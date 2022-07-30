#include <bits/stdc++.h>
using namespace std;

class Node{
public: 
  int data;
  Node* next;
  
  //constructor
  Node(int data){
      this -> data = data;
      this -> next = NULL;
  }
};

void InsertAtHead(Node* &head, int d){
    // making new node temp
    Node* temp = new Node(d);
    
    temp -> next = head;
    head = temp;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL ){
        cout<< temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    // Node* node1 = new Node();
    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;
    
    Node* node1 = new Node(10);
    // cout<< node2 -> data << endl;
    // cout<< node2 -> next << endl;
    Node* head = node1;
    InsertAtHead(head, 30);
    InsertAtHead(head, 30);
    InsertAtHead(head, 30);
    
    print(head);
    return 0;
}
