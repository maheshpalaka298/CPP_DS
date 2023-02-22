#include<bits/stdc++.h>
using namespace std;

int main(){
  Node *r=head;
   Node *t=head;
   while(t->next!=NULL && t->next->next!=NULL){
       t=t->next->next;
       r=r->next;
       if (t==r)return true;
   }
   return false;
}
