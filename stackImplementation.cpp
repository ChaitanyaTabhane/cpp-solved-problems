#include <iostream>

using namespace std;
class Stack{
    int * arr;
    int top;
    int size;
    
    public:
        Stack(){
            top = -1;
            size = 1000;
            arr = new int[size];
        }
        
        void push(int x){
            top++;
            arr[top] = x;
        }
        
        int pop(){
            top--;
            return arr[top+1];
            
        }
        
        int Size(){
            return top+1;
        }
        
        int Top(){
            return arr[top];
        }
};

int main() {
    
    Stack st;
    st.push(4);
    st.push(5);
    st.push(4);
    st.push(5);
    st.push(4);
    st.push(39);
    
    cout<<"last element : "<<st.Top();
    cout<<endl<<"Size : "<<st.Size()<<endl;
    cout<<"poped element : "<< st.pop()<<endl;
    cout<<"poped element : "<< st.pop()<<endl;
    cout<<"poped element : "<< st.pop()<<endl;
    cout<<"poped element : "<< st.pop()<<endl;
    
    
    

    return 0;
}
