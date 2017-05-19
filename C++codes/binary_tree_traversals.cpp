#include <iostream>
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
cout<<node->data;
}
}

int main() {

tree *root = newNode(5);
root->left = newNode(2);
root->right = newNode(12);
root->left->left = newNode(-4);
root->left->right = newNode(3);
root->right->left = newNode(9);
root->right->right = newNode(21);

root->right->right->left = newNode(19);
root->right->right->right = newNode(25);


Preorder(root);

	// your code goes here
	return 0;
}
