#include <iostream>
using namespace std;

int main()
{
    int* pAge = new int;
    cout << "Enter age: ";
    cin >> *pAge;

    cout << "Age " << *pAge << " is stored at 0x" << hex <<pAge << endl;

    delete pAge;

    return 0;
}