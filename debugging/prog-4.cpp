#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void print_cases(const std::string& name)
{
    char up[name.size()];
    char lo[name.size()];

    for(size_t i = 0; i < name.size(); i++)
    {
        up[i] = std::toupper(name[i]);
        lo[i] = std::tolower(name[i]);
    }

    std::cout << lo << " " << up << std::endl;
    
    for(size_t j = 0; j < name.size(); j++)
    {
        up[j] = 0;
      //  up[j*] -> nullptr;
        lo[j] = 0;
    }
}




int main()
{
    print_cases("Elizabeth");
    print_cases("John");
    print_cases("Frank");
    print_cases("Fred");

    return 0;
}

