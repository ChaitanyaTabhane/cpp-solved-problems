#include<bits/stdc++.h>

using namespace std;
class Queue {
    int * arr;
    int count, rear, front, size;
public :
  Queue(int size) {
    this -> size = size;
    arr = new int[size];
    count = 0;
    rear = -1;
    front = -1;
  }
  void push(int newElement) {
    if(count == size){
        cout << "Queue is full."<<endl;
        exit(1);
    }
    if(rear == -1){
        front = 0;
        rear = 0; 
    }
    else rear = (rear + 1) % size;
    
    arr[rear] = newElement;  
    count++;
    cout<<"Element pushed : "<<newElement<<endl;
  }
  
  int pop(){
      
      int popped  = arr[front];
    if(front == -1){
       cout<<"array is empty."<<endl;
   }
   
   if(count == 1){
       front = -1;
       rear = -1;
   }
   else front = (front + 1) % size;
   
   count--;
   
   return popped;
   
  }
  int top() {
      if(front == -1){
          cout<< "Queue is empty."<<endl;
          exit(1);
      }
      return arr[front];
  }
  int Size() {
    return count;
  }

};

int main() {
  Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.Size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.Size() << endl;

  return 0;
}
