#include <iostream>
#include <numeric>
#include <vector>
 
int main() 
{
    std::vector<int> v{ 1,2,3,4,5 };
    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "The sum of all the elements in the vector is " << sum << std::endl;
}
