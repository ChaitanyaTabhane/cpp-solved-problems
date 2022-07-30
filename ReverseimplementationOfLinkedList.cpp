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

void InsertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition(Node* head, int pos, int data){
    Node* temp = head;
    int count = 1;
    while(count< pos -1){
        temp = temp -> next;
        count++;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert  = temp -> next;
    temp -> next = nodeToInsert;
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
    Node* tail = node1;
    
    // InsertAtHead(head, 30);
    // InsertAtHead(head, 30);
    // InsertAtHead(head, 30);
    
    InsertAtTail(tail,6);
    InsertAtTail(tail,7);
    InsertAtTail(tail,2);
    InsertAtTail(tail,3);
    
    print(head);
    
    InsertAtPosition(head, 3, 3);
    
    print(head);
    return 0;
}
