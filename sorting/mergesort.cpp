#include<iostream>
#include<memory>
#include <vector>


using namespace std;

class MergeSort
{
    public:
        MergeSort(){}
        ~MergeSort(){}

       vector<int>& Sort(vector<int>& array)
        {
            return sort(array);
        }
    private:
         vector<int>& sort(vector<int>& array)
        {
           if(array.size() <= 1)
           {
               return array;
           }

            int midpoint= array.size()/2;
            vector<int>& leftHalfPtr = sort(split(array,0, midpoint));
            vector<int>& rightHalfPtr = sort(split(array,midpoint+1, array.size()));
            return merge(leftHalfPtr,rightHalfPtr);
        }

         vector<int>& split(vector<int>& arr, int start, int end)
        {
            const int resultSize = end-start;
            unique_ptr<vector<int>> resultArray(new vector<int>(resultSize));
            for(int i = start; i < end; ++i)
            {
                resultArray->push_back(arr[i]);
            }
           
            return *resultArray.get();
        }


         vector<int>& merge(const vector<int>& left, const vector<int>& right)
        {
            const int resultSize = left.size() + right.size();
            unique_ptr<vector<int>>resultVecPtr(new vector<int>(resultSize));
            int resultIndex = 0;
            int leftIndex = 0;
            int rightIndex = 0;
            while(resultIndex < resultSize)
            {
                if(leftIndex == left.size() && rightIndex < right.size())
                {
                    resultVecPtr->push_back(right[rightIndex]);
                    ++rightIndex;
                }
                else if(rightIndex == right.size() && leftIndex < left.size())
                {                  
                    resultVecPtr->push_back(left[leftIndex]);
                    ++leftIndex;
                }
                else if(left[leftIndex] <= right[rightIndex])
                {
                    resultVecPtr->push_back(left[leftIndex]);
                    ++leftIndex;
                }
                else
                {
                    resultVecPtr->push_back(right[rightIndex]);
                    ++rightIndex;
                }
                resultIndex++;
            }

            return *resultVecPtr.get();  
        }
};




int main()
{
    vector<int> arr {10,8,3};
    MergeSort ms;
    vector<int>& result =  ms.Sort(arr);
    std::cout << "done!" <<std::endl;
    for(const auto& elem : result)
    {
        std::cout << elem << std::endl;
    }
    return 0;
}