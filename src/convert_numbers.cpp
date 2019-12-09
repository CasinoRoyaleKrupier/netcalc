#include "convert_numbers.h"

int dec_to_bin(int dec_input)
{
    int i=0,
		tab[31],
		int_output;

	std::string str_output;

	while(dec_input)
	{
		tab[i++] = dec_input % 2;
		dec_input /= 2;
	}

	for(int j = i - 1; j >= 0; j--)
	{
		str_output += std::to_string(tab[j]);
	}

	int_output = atoi(str_output.c_str());

	return int_output;
}

int convertBinaryToDecimal(long long bin_input)
{
    int decimalNumber = 0, i = 0, remainder;
    while (bin_input != 0)
    {
        remainder = bin_input % 10;
        bin_input /= 10;
        decimalNumber += remainder *pow(2, i);
        ++i;
    }
    return decimalNumber;
}