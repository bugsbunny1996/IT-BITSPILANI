#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	queue <char> a;
	stack <char> b;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char temp;
		cin>>temp;
		a.push(temp);
	}

	while(a.size()){
		int temp;
		temp = a.front();
		a.pop();
		if(temp>47 && temp< 58){
		 b.push(temp);
		}
		else{
			char temp1;
			temp1= b.top();
			b.pop();
			char temp2;
			temp2 = b.top();
			b.pop();

			b.push(temp1);
			b.push(temp);
			b.push(temp2);
		}

	}

	for(int i =0;i<n;i++){
		cout<<b.top()<<" ";
		b.pop();
	}



	// your code goes here
	return 0;
}
