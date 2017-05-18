#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a > b)? a : b;
}


int visited[100][100] ={0};

int longest(char *a, char *b, int m, int n){
	if(visited[m][n]!=0)
	{
		return visited[m][n];
	}
	else{
	if(m==0 || n==0){
		visited[m][n] = 0;
		return 0;
	}
	else{
		if(a[m-1] == b[n-1]){
			visited[m][n] = 1+longest(a,b,m-1,n-1);
			return (visited[m][n]);
		}
		else{
			visited[m-1][n] = longest(a,b,m-1,n);
			visited[m][n-1] = longest(a,b,m,n-1);
			return max(1+ visited[m][n-1], 1+ visited[m-1][n]);
			}
	}

	}
}

int main() {
	char a[] ="acdesf";
	char b[] = "acdesf";
	int temp =longest(a,b,6,6);
	cout<<temp;
	// your code goes here
	return 0;
}
