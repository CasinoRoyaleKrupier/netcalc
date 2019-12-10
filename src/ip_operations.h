#include <iostream>
#include <cstring>
#include <math.h>

std::string get_network_address(std::string bin_ip4_addr, std::string bin_netmask);
void get_broadcast_addr(std::string bin_network_addr, std::string bin_netmask);
void get_number_hosts(std::string bin_ip4_addr, std::string prefix);
long int exponentiation(long int base_of_power, int index);