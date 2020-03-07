#include <iostream>
using namespace std;

int main() 
{
    int age = 30;
    const double Pi = 3.1416;

    cout << " Integer  Age is at 0x " << hex << &age << endl;
    cout << "Double Pi is located at 0x" << hex << &Pi << endl;

    int* pointerToAge = &age;

    cout <<"Integer age is at: 0x" << hex << pointerToAge << endl;

    int dogsAge = 9;
    pointerToAge = &dogsAge;

    cout <<"Pointer of age now points to dog age: 0x" << hex << pointerToAge << endl;
    cout <<"Pointer of age has value of " << dec << *pointerToAge << endl;

    return 0;
}