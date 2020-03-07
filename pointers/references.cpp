#include<iostream>
using namespace std;

// reference are aliased for variables

void returnSquare(int& number)
{
    number*=number;
}

void CalculateSquare(const int& Number, int& result) 
{
    result = Number*Number;
}

int main() 
{
    // reference is what a variable represents.
    int i = 3;
    int& y = i;

    int original = 30;
    cout << "Original =" << original << endl;
    cout << "Original is at address: " << hex << &original << endl;

    int& ref = original;
    cout << "Ref is at address: " << hex << &ref << endl;
    
    int& ref2 = ref;
    cout <<"Ref2 is at address: " << hex << &ref2 << endl;
    cout <<"Ref2 value is = " << dec << ref2 << endl;
    returnSquare(ref);
    cout <<"Ref2 squared is " << dec << ref2 << endl;
    int result =0;
    CalculateSquare(ref,result);
    cout <<"Ref2 squared is " << dec << result << endl;


    return 0;
}