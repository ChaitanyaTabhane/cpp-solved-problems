#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int size;
    int *ptr;
    
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    ptr = new int[size]; 
    cout<<"Enter the values : "<<endl;
    for(int i = 0 ; i < size ; i ++ ){
        cin>>ptr[i];
    }
    
    for(int i = 0 ; i < size ; i ++ ){
        cout<<ptr[i]<<" ";
    }
    
    return 0;
}
