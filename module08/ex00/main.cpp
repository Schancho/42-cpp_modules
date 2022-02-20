

#include "easyfind.hpp"
#include <vector>
#include <map>
#include <string>

int main()
{
    std::vector<int> v;

    for (size_t i = 0; i < 40; i++)
        v.push_back(i);

    if (easyfind(v, 5))
        std::cout << "Found!" << std::endl;
    else
        std::cout << "NOT Found!" << std::endl;
    
    if (easyfind(v, 50))
        std::cout << "Found!" << std::endl;
    else
        std::cout << "NOT Found!" << std::endl;

    return 0;
}
