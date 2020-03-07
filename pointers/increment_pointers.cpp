#include<iostream>
using namespace std;

int main()
{
    cout << "How many integers do you wish to enter? ";
    int* nPointer;
    cin >> *nPointer;

    int* pNums = new int[*nPointer]; // allocate requested integers
    int* pNumsCopy = pNums;
    cout <<"Successfully allocated memory for " << *nPointer << " ints" << endl;
    for(int i =0; i < *nPointer; i++){
        cout << "Enter number " << i <<": ";
        cin >> *(pNums+i); /// very cool        
    }

    cout <<"Displaying all numbers input: " << endl;
    for(int j = 0; j < *nPointer;j++)
    {
        cout << *(pNumsCopy++) << " ";
    }

    delete[] pNums;
    return 0;
}