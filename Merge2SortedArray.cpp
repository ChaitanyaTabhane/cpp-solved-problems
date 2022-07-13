#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr1[3]={3,6,7};
    int arr2[4]={2,4,8,9};
    
    vector<int> ans;
    int i=0,j=0;
    while(i<3 && j<4){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    
    while(i<3){
        ans.push_back(arr1[i++]);
    }
    
    while(j<4){
            ans.push_back(arr2[j++]);
    }
    
    for(int k=0; k<ans.size();k++){
        cout<<ans[k]<<" ";
    }

    return 0;
}