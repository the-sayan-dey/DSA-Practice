#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> findPairSum(vector<int> arr, int key){
    vector<int> ans;
    
    for (int i = 0;i <= arr.size() - 1; i++){
        for (int j=0; j<=arr.size() - 1; j++){
            if (i == j){
                continue;
            } else{
                if (arr[i] + arr[j] == key){
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                }
            }
        }
    }
    
    return ans;
}

int main(){
    
    vector<int> arr = {1,2,3,4,5};
    vector<int> ans;
    // vector<int> ans = getUniqueElements(arr);
    ans = findPairSum(arr, 5);
    cout<<endl;
    
    for(auto elem : ans){
        cout<<" "<<elem;
    }
    
    return 0;
}
