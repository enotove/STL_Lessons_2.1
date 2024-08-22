#include <iostream>
#include <vector>
#include <algorithm>


void sort_arr(std::vector<int>& arr)
{
    int h = 1;
    for (std::vector<int>::iterator i = arr.begin() + 1; i < arr.end(); i++)
    {
        for (std::vector<int>::iterator j = arr.begin(); j < arr.end() - h; j++)
        {
            if (*j > *(j + 1))
            {
                auto temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;

            }
        }
        h++;

    }
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
 
    auto it = std::unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
    std::cout << "OUT: ";
    for (std::vector<int>::iterator it = arr.begin(); it < arr.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}   
