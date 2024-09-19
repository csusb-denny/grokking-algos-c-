#include <iostream>
#include <vector>

#include "binarySearch.h"
using namespace std;

int binarySearch::Search(vector<int> list, int item)
{
    int low = 0; //lowest index
    int high = list.size() - 1; //highest index 

    cout << "High: " << high;

    while(low <= high)
    {
        int mid = (low+high) / 2;
        int guess = list[mid];

        cout << " Mid: " << mid;
        cout << " Guess: " << guess << endl;

        if(guess == item)
            return mid;
        if(guess > item)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch::Search(arr, x);

    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in array" << endl;

    return 0;
}




