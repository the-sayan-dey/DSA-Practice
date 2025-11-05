#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> getUniqueElements(vector<int> arr){
    map<int, int> freq;
    vector<int> ans;
    
    for (int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    
    for (auto elem : freq){
        if(elem.second == 1){
            ans.push_back(elem.first);
        }
    }
    
    return ans;
}

int main(){
    
    vector<int> arr = {1,2,2,3,4,4,5};
    vector<int> ans = getUniqueElements(arr);
    
    cout<<endl;
    
    for(auto elem : ans){
        cout<<" "<<elem;
    }
    
    return 0;
}
