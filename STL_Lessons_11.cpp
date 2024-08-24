#include <iostream>
#include <vector>
#include <algorithm>


void sort_arr(std::vector<int>& arr)
{
   
    std::sort(arr.begin(), arr.end());
    auto it = std::unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
   
}

int main()
{
    std::vector<int> arr{ 1, 1, 2, 5, 6, 1, 2, 4 };
    std::cout << "IN: ";
    for (std::vector<int>::iterator it = arr.begin(); it < arr.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    
    sort_arr(arr);
 
    std::cout << "OUT: ";
    for (std::vector<int>::iterator it = arr.begin(); it < arr.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}   
