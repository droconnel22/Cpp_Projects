#include <iostream>


int main()
{
    try 
    {        
        // Reuest lots of memory space
        int* pAge = new int[287368432648];
        // Request lots of memory space using no throw version.
        int* pAgeNoThrow = new(std::nothrow) int [0x1ffffffff];
        delete[] pAge;
    } 
    catch(std::bad_alloc) 
    {
        std::cout << "Memory allocaiton failed. Ending program" << std::endl;
    }
    return 0;
}