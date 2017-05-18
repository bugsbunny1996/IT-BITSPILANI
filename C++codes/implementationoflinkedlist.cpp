#include <iostream>
using namespace std;

struct node {
  int x;
  node *next;
};

int main(void){

node *end = new node;
node *root = new node;

for (int i =0;i<5;i++){
	if(i==0){
		root->x = 0;
		root->next = NULL;
		end = root;
	}
	else{
		node *temp;
		temp = new node;

		temp->x = i;
		temp->next = NULL;
		end->next = temp;
		end = temp;
		
	}
}
node *itr;
itr = root;
while(itr->next!=NULL){
	cout<<itr->x<<" ";
	itr = itr->next;
}
	// your code goes here
	return 0;
}
