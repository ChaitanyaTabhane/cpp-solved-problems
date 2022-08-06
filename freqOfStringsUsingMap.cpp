// To calculate the frequency of strings
// using maps
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m;
    int n;
    cout << "How many strings do you want to enter? : "<<endl;
    cin >> n;
    cout<<"Enter strings : "<<endl;
    for(int i=0; i< n; i++){
        string s;
        cin>>s;
        m[s] = m[s] + 1;
        // or we can also use m[s]++
    }
    cout<<"The frequncy of the strings is :"<<endl;
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}
