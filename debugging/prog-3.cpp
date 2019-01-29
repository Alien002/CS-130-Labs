#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::vector<double> v(100);

    for(size_t i = v.size()-1; i!= -1; i--)
        v[i] = cos(i);

    std::sort(v.begin(), v.end());

    std::cout << v[0] << std::endl;
    /*
    for(unsigned j = 0; j<v.size(); ++j){
        std::cout<<j <<": " <<v[j] <<std::endl;
    }
    */
    return 0;
}

