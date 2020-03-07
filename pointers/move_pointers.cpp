#include<iostream>

using namespace std;

int main()
{
    int dogsAge = 39;

    cout <<"Initial dogs age is "<< dogsAge << endl;

    int* dogsAgePointer = &dogsAge;

    cout <<"Dogs age pointer assigned to dogs age" << endl;

    cout <<"Enter a new age for doggo: ";
    cin>> *dogsAgePointer;

    cout <<"Address of dogs age is " << hex <<dogsAgePointer <<endl;
    cout <<"Value of dogs age is " << dec << *dogsAgePointer << endl;

    return 0;
}