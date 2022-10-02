#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;  //do not overflow integer value

    while(start<=end)

    {
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid])
        {
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;              

}
int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]= {3,5,7,9,11};

    int index = binarySearch(even, 6, 12);

    cout<<"index of 12 is "<<index;

}