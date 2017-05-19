#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct tree{

int data;
struct tree *left;
struct tree *right;
};

void Preorder(tree *node){

if(node != NULL){
cout<<node->data<<" ";
Preorder(node->left);
Preorder(node->right);
}
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

int height(tree *node){
	if(node == NULL) {return 0;}
	else{
		return (1+max(height(node->left),height(node->right)));
	}
}

struct tree* newNode(int data)
{
     struct tree* node = (struct tree*)malloc(sizeof(struct tree));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
     return(node);
};


void Postorder(tree *node){

if(node != NULL){

Postorder(node->left);
Postorder(node->right);
cout<<node->data<<" ";
}
}

tree* insert(tree *node,int dta){
 if (node == NULL) return newNode(dta);
 if(node->data > dta){
 		node->left = insert(node->left,dta);
 	}
 else{
 	node->right = insert(node->right,dta);
 }

 return node;
}


tree* delet(tree *node, int dta){
	if(node->data == dta){node=NULL;}

	else{
	if(node->data<dta){
			delet(node->left,dta);

		}
	if(node->data>dta){
		node = delet(node->right,dta);
	}
	}

}

int main() {

//creating a Binary search tree
tree *root = newNode(50);
//

root = insert(root, 15);
root = insert(root, 62);
root = insert(root, 5);


Preorder(root);

cout<<endl;
cout<<height(root);
	// your code goes here
	return 0;
}
