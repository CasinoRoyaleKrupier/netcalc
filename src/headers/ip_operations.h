#include <iostream>
#include <vector>
#include <string>

std::string make_bin_address    (std::string bin_input);
std::string get_network_address (std::string bin_ip4_addr, std::string bin_netmask);
std::string get_broadcast_addr  (std::string bin_network_addr, std::string bin_netmask);
void        get_number_hosts    (std::string bin_ip4_addr, int prefix);
void        get_first_last_host (std::string bin_ip4_addr, std::string bin_network);
long int    exponentiation      (long int base_of_power, int index);