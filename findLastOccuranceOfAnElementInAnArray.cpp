// Code for binary search
#include<iostream>
#include<vector>
using namespace std;

int findLastOccuranceOf(vector<int> arr, int key){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start)/2);
    
    int ans = 0;
    
    while(start <= end){
        mid = start + ((end - start)/2);
        
        if(arr[mid] == key){
            start = mid + 1;
            ans = mid;
        }
        
        if(arr[mid] > key){
            end = mid - 1;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }
    }
    
    return ans;
}

int main(){
    vector<int> arr = {1,2,2,55,77,23,11,7};
    // int index = binarySearch(arr, 77);
    int index = findLastOccuranceOf(arr,2);
    
    std::cout << "Index is: " << index << std::endl;
    
    return 0;
}
