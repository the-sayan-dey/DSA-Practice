// Duplicate in an array// Find duplicant elements in an array
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int findDuplicantElementsInAnarray(vector<int> arr){
    map<int, int> freq;
    
    for (int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    
    for (auto elem : freq){
        if(elem.second > 1){
            return elem.first;
        }
    }
    
    return -1;
}

int main(){
    
    vector<int> arr = {1,2,3,4,5};
    std::cout << findDuplicantElementsInAnarray(arr) << std::endl;
    
    return 0;
}
