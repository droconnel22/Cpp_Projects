#include<iostream>
using namespace std;

int main()
{
    int Age = 30;
    double Pi = 3.1416;
    char SayYes = 'Y';

    int* pointerToAge = &Age;
    double* pointerToPi = &Pi;
    char* pointerToYes = &SayYes;

    cout << "sizeof fundamteal types " << endl;
    cout << "sizeof(int) = " << sizeof(int) <<endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;

    cout << "size of pointers to fundamental types" << endl;
    cout << "size of (pInt) = " << sizeof(pointerToAge) << endl;
    cout << "size of (doubleInt) =" << sizeof(pointerToPi) << endl;
    cout << "size of (charPointer) =" << sizeof(pointerToYes) << endl;

    return 0;
}