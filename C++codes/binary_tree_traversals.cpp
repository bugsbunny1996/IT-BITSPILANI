#include <iostream>
using namespace std;

struct tree{

int data;
struct tree *left;
struct tree *right;
}

void Preorder(tree a){

if(node != NULL){
cout<<node->data;
Preorder(node->left);
Preorder(node->right);
}
}


void Postorder(tree a){

if(node != NULL){

Postorder(node->left);
Postorder(node->right);
cout<<node->data;
}
}

int main() {



	// your code goes here
	return 0;
}
