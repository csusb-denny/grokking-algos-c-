#include <iostream>
#include <vector>
using namespace std;

int findSmallest(vector<int>& arr);
vector<int> selectionSort(vector<int> arr);

int main()
{
    //Example Array
    vector<int> arr = {5, 3, 6, 2, 10};

    //perform the selectionSort function
    vector<int> sortedArr = selectionSort(arr);

    //print the sorted array
    for(int i = 0; i < sortedArr.size(); i++)
    {
        cout << sortedArr[i] << " ";
    }
    cout << endl;
    return 0;
}

int findSmallest(vector<int>& arr){
    //to find the smallest element
        //1. Assume the first element is the smallest
    int smallest = arr[0];
        //2. Keep track of the index of the smallest element
    int smallestIndex = 0;


    //now we loop through the array, to find the smallest element
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    return smallestIndex;
}

vector<int> selectionSort(vector<int> arr){
    vector<int> newArr; //vector to store new sorted array

    while(!arr.empty()){ //while the array is empty
        //find the smallest element's index, by calling the function.
        int smallestIndex = findSmallest(arr);
        //add the smallest element to the new array
        newArr.push_back(arr[smallestIndex]);
        //remove the smallest element from the original array
        arr.erase(arr.begin() + smallestIndex);
    }
    return newArr;
}