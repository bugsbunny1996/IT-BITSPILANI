#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long visited[1000]={0};

long fib(long n){
	if(visited[n] !=0){return visited[n];}
	else{

	if(n == 2 || n==1){
		visited[n] = 1;
		return 1;
		}

	visited[n]=fib(n-1) + fib(n-2);
	return visited[n];
	}
}

int main() {
	long k;
	k = fib(5);
	cout<<k;
	// your code goes here
	return 0;
}
