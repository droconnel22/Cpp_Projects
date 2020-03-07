#include<iostream>
using namespace std;

int main()
{
    const int ARRAY_LEN = 5;
    int MyNumbers[ARRAY_LEN] = {24,-1,265,-999,2011};

    int *pNumbers = MyNumbers;

    cout << "Displaying array using pointer synatx operator*" << endl;
    for(int i = 0; i < ARRAY_LEN; ++i)
    {
        cout << "Element " << i << " = " << *(MyNumbers+i) << endl;        
    }
    cout << "Displaying array using pionter with array syntax operator[]" << endl;
    for(int i =0; i < ARRAY_LEN; ++i)
    {
        cout << "Element" << i << " = " << pNumbers[i] << endl;
    }
    return 0;
}