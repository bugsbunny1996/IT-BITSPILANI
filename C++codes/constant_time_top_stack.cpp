#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	stack <int> a,b;
	int min =0;
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
		int temp;
		cin>>temp;
		a.push(temp);
		if(i==0){
			b.push(temp);
		}
		else{
			int temp;
			temp = b.top();
			if(temp>a.top() ){
				b.push(a.top());

			}
			else{
				b.push(b.top());
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
