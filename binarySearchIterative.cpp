// Code for binary search
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int key){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start) / 2);
    
    while(start <= end){
        mid = start + ((end - start) / 2);
        
        if(arr[mid] == key){
            return mid;
        }
        
        if(key < arr[mid]){
            end = mid - 1;
        }
        
        if(key > arr[mid]){
            start = mid + 1;
        }
    }
    
    return -1;
}

int main(){
    vector<int> arr = {1,2,55,77,23,11,7};
    int index = binarySearch(arr, 77);
    
    std::cout << "Index is: " << index << std::endl;
    
    return 0;
}
