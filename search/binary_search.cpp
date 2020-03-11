#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& arr, const int& target)
{
    int low = 0, high = arr.size()-1;
    while(low <= high)
    {
        int midpoint = (high-low)/2 + low;
        if(target < arr[midpoint])
        {
            high = midpoint-1;
        }
        else if(target > arr[midpoint])
        {
            low = midpoint+1;
        }
        else 
        {
            return midpoint;
        }
    }

    return -1;
}


int main() 
{

   vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    int target = 0;
    bool running = true;
    char continuation = 'Y';
    while(running)
    {
        cout << "\n Enter A Target: ";
        cin >> target;
        int result = search(arr,target);
        if(result == -1)
        {
            cout << "Oops! Did not find target: " << target << endl;
        }
        else
        {
            cout <<"Found the target: " << target << " at index: " << result << endl;
        }

        bool validInput = false;
        while(!validInput)
        {
            cout << "\n Would you like to continue Y/N ?" << endl;
            cin >> continuation;
            if(continuation == 'Y' || continuation == 'y')
            {
                cout << "\n Lets continue! " << endl;
                validInput = true;
            } 
            else if(continuation == 'N' || continuation == 'n')
            {
                cout <<"\n All done! " << endl;
                validInput = true;
                running = false;
            }
            else 
            {
                cout << "\n Not valid! Enter (Y) for yes or (N) for no!" << endl;
            }
        }
       

    }

}