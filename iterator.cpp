#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
    // a dynamic array of integers
    vector<int> vecArray;

    int a = 2991;
    // insert sample ints into array
    vecArray.push_back(50);
    vecArray.push_back(a);
    vecArray.push_back(23);
    vecArray.push_back(9999);

    cout << "The contents of the vector are: " << endl;

    // Walk the vector and read values using an iterator
    vector <int>::iterator iterator = vecArray.begin();

    while(iterator != vecArray.end()) 
    {
        // write the value to the screen
        cout << *iterator << endl;
        ++iterator;
    }

    // Find
    vector <int>::iterator found = find(vecArray.begin(), vecArray.end(),a);

    // check if value was ofound
    if(found != vecArray.end())
    {
        // value was found ... Determine position in array
        int position = distance(vecArray.begin(), found);
        cout << *found << endl;
        cout << position << endl;
    }
    
    return 0;
}