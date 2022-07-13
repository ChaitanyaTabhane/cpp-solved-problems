#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int m= 3, n=4;
    int arr1[m]={3,6,7};
    int arr2[n]={2,4,8,9};
    
    vector<int> ans;
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    //Bache huye 1st array ke element (Kyu ki 1st arra bada ho sakta hai)
    while(i<m){
        ans.push_back(arr1[i++]);
    }
    
    // Bache huye 2nd array ke elements (Kyu ki 2nd aray bada ho sakta hai)
    while(j<n){
            ans.push_back(arr2[j++]);
    }
    
    for(int k=0; k<ans.size();k++){
        cout<<ans[k]<<" ";
    }

    return 0;
}
