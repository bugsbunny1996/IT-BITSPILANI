#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	stack <int> a,b;

	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
		int temp,temp1;
		cin>>temp;

		a.push(temp);
		temp1 = a.top();
		if(i==0){
			b.push(1);
		}
		else{
			int temp2;
			temp2 = b.top();
			if(abs(a.top()-temp1)>abs(a.top()-temp2) && a.top()>temp1 || a.top()<temp2){
				b.push(temp2);
			}
			else{
				b.push(temp1);
			}
		}
	}

	for(int i = 0; i<n;i++){
		cout<<a.top()<<" ";
		a.pop();
	}
	cout<<endl;
	for(int i = 0; i<n;i++){
		cout<<b.top()<<" ";
		b.pop();
	}


	return 0;
}
