// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
  public : 
  int data;
  Node* next;
  
  Node(int data){
      this -> data = data;
      this -> next = NULL;
  }
  
};

void InsertAtHead(Node* &head, int data){
  Node* temp = new Node(data);
  temp -> next = head;
  head = temp;
}

void InsertAtTail(Node* tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d) {


    //insert at Start
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        InsertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data << " ";
        temp  = temp -> next;
    }
    cout<<endl;
}


int main() {
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1-> next;
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 5);
    print(head);
    InsertAtTail(tail, 84);
    print(head);
    InsertAtPosition(tail, head, 2,43);
    print(head);
    InsertAtPosition(tail, head, 1, 6);
    print(head);
    
    return 0;
}
