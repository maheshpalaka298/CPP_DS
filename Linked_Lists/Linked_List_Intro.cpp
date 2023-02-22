#include<bits/stdc++.h>
using namespace std;


class Linked_list{
  public:
  struct Node
  {
    int data;
    Node *next;
    Node(int val){
      data = val;
      next = NULL;
    }
  };
  Node *head;
  Node *tail;

  Linked_list(){
    head = NULL;
    tail = NULL;
  }
  void Insert(int x){
    Node *newNode=new Node(x);
    if (head==NULL){
      head =newNode;
      tail =newNode;
      return;
    }
    tail->next=newNode;
    tail=tail->next;
  }
  void PrintData(){
    Node *temp=head;
    while(temp){
      cout<<temp->data<<" ";
      temp=temp->next;

    }
  }
  void InsertAtBegin(int x){
    Node *tmp=new Node(x);
    tmp->next=head;
    head=tmp;
  }
  void InsertAtEnd(int x){
    Node *tmp = new Node(x);
    tail->next=tmp;
    tail=tail->next;

  }
  void InsertAtPosition(int x,int pos){
    Node *tmp1;
    tmp1=head;
    Node *tmp=new Node(x);
    Node *pre;
    
    while(pos--){
      pre=tmp1;
      tmp1=tmp1->next;

    }
    pre->next=tmp;
    tmp->next=tmp1;
  }

};
int main(){
  Linked_list list;
  list.Insert(10);
  list.Insert(20);
  list.Insert(30);
  list.InsertAtBegin(5);
  list.InsertAtPosition(25,3);
  list.InsertAtEnd(40);
  list.PrintData();
        
}