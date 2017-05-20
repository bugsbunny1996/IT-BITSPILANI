#include<bits/stdc++.h>
#include<iterator>
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
  int array[] = {1,2,5,2,3,4};
  int temp = 0;
  int k = increasing(array,5);
  for(int i = 0; i< 100;i++){
      
      if(visited[i]>temp){

      temp = visited[i];
    }
  }

  cout<<temp;

  return 0;

}
