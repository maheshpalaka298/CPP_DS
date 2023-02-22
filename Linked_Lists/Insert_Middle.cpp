#include<bits/stdc++.h>
using namespace std;
int main(){


Node *k=head;
	int cnt=0;
	while(k){
	    cnt++;
	     k=k->next;
	}
    int n;
	if (cnt&1) {
	    n=(cnt/2)+1;
	    
	}
	else{
	   n=(cnt/2);
	}
	Node *tmp=head;
	Node *pre;
	//int cnt=0;
	Node *tmp1=new Node(x);
	
    	while(n--){
    	    pre=tmp;
    	    tmp=tmp->next;
    	}
    	pre->next=tmp1;
    	tmp1->next=tmp;
	
	return head;
}
