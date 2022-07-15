// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // int *arr1 = new int[len1];
    // int *arr2 = new int[len2];
    
    int arr1[len1];
    int arr2[len2];
    
    
    int arrayIndex =s;
    for(int i=0; i< len1; i++){
        arr1[i] = arr[arrayIndex++];
    }
    
    arrayIndex = mid+1;
    for(int i=0; i< len2; i++){
        arr2[i] = arr[arrayIndex++];
    }
    
    int index1=0;
    int index2=0;
    arrayIndex= s;
    
    while(index1<len1 && index2<len2){
        if(arr1[index1]< arr2[index2]){
            arr[arrayIndex++]= arr1[index1++];
        }
        else{
            arr[arrayIndex++]= arr2[index2++];
        }
    }
    
    while(len1>index1){
            arr[arrayIndex++]= arr1[index1++];
    }
    
    while(len2>index2){
        arr[arrayIndex++]= arr2[index2++];
    }
    
    // delete []arr1;
    // delete []arr2;

    
}

void mergeSort(int arr[], int s, int e){
    
    int mid = (s+e)/2;
    
    if(s>=e){
        return;
    }
    
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    
    merge(arr, s, e);
}

int main() {
    // Write C++ code here
    int n=7;
    int arr[n]= {6,2,8,9,7,1,5};
    
    mergeSort(arr, 0, n-1);
    
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
