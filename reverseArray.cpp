/*
  Code for reversing an array in C++
*/

#include <iostream>
#include<vector> 
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> reverseArray(vector<int> arr){
    
    vector<int> reversed_arr;
    for(int i=arr.size() - 1; i >= 0; i--){
        reversed_arr.push_back(arr[i]);
    }
    
    return reversed_arr;
}

void reverseInPlace(vector<int> &arr){
    int start = 0;
    int end = arr.size() - 1;
    
    while(start < end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}


int main()
{
    vector<int> arr = {1,2,3,4,5};
    
    // vector<int> reversed_arr;
    
    // reversed_arr = reverseArray(arr);
    
    // for (int i : reversed_arr){
    //     cout<<i << " ";
    // }
    
    reverseInPlace(arr);
    
    for (int val : arr){
        cout<<val << " ";
    }

    return 0;
}
