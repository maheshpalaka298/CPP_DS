#include<bits/stdc++.h>
using namespace std;


class Node{
  public:
  
    int data;
    Node *left;
    Node *right;
    Node(int val){
      data = val;
      left = right = NULL;
    }
};
void Inorder(Node *root){
    if (root == NULL) return ;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    //cout<<root->data;
}
void preorder(Node *root){
    if (root == NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node *root){
  if (root ==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void levelorder(Node *root){
  if (root == NULL) return ;
  queue<Node*>q;
  q.push(root);
  while(q.empty()==false){
    Node *nxt=q.front();
    cout<<nxt->data<<" ";
    q.pop();

    if (nxt->left!=NULL) q.push(nxt->left);
    
    if (nxt->right!=NULL) q.push(nxt->right);
  }

  
}
int main(){
  Node *root = new Node(1);
  Node *first = new Node(20);
  root->left=first;
  Node *second = new Node(25);
  root->right = second;
  Node *third = new Node(30);
  first->left =third;
  Node *forth = new Node(35);
  first->right =forth;
  // Inorder(root);
  // preorder(root);
  // postorder(root);
  vector<vector<int>>vc;
  levelorder(root);

  
  //tree t;

        
}