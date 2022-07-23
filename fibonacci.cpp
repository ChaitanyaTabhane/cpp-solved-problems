#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    if(n==0 || n==1 ){
        return n;
    }
    
    return (fibonacci(n-2) + fibonacci(n-1));
}

int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for (int i =1 ; i<= n; i ++){
        cout<<fibonacci(i) <<" ";
    }
    return 0;
}
