#include<bits/stdc++.h>
using namespace std;


int visited[100] = {0};

int increasing(int array[],int n){
  if(n == 0){
    return 0;
  }
  if(visited[n]!=0){
    return visited[n];
  }
  else{
    if(array[n]>array[n-1]){
      visited[n] =1 + increasing(array,n-1);
      return visited[n];
    }
    else{
      if(n>1){
        visited[n-1] = increasing(array,n-1);
      }
    }
  }

}


int main(void){
vector <pair<int,int> > a;
int n;
cin>>n;
for(int i = 0 ; i<n; i++){
  int temp,temp2;
  cin>>temp>>temp2;
    a.push_back(make_pair(temp,temp2));
}
sort(a.begin(),a.end());

int b[n];
for(int i = 0; i<n;i++){
  b[i] = a[i].second;
}
cout<<increasing(b,n);
  return 0;
}
