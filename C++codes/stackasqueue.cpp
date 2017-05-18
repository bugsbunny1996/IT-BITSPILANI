#include <iostream>
using namespace std;

int main() {

	int n;

	for(int i=0;i<n;i++){
		int temp ;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i =0;i<n;i++){
		int temp;
		temp = a.front();
		a.pop();
		b.push_back(temp);
	}
	a.swap(b);


	// your code goes here
	return 0;
}
