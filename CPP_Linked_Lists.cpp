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

  }
  void InsertAtEnd(int x){

  }
  void InsertAtPosition(int x,int pos){

  }

};
int main(){
  Linked_list list;
  list.Insert(10);
  list.Insert(20);
  list.Insert(30);
  list.PrintData();
        
}
