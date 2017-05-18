#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
string expr;
stack <char> s;
cin>>expr;

int len=expr.length();

  for (int i=0; i<len; i++)
    {
        if (expr[i]=='}' && !s.empty())
        {
            if (s.top()=='{')
                s.pop();
            else
                s.push(expr[i]);
        }
        else
            s.push(expr[i]);
    }
int count1=0;
int count2=s.size();

for(int i =0;i<s.size();i++){
	if(s.top()=='{')
		count1++;

	s.pop();
}

cout<<count1%2 + count2/2;
	// your code goes here
	return 0;
}
