#include <bits/stdc++.h>
using namespace std;

vector <int> graph[100];
int visited[100];

void dfs(int current){
	if(visited[current])
		{	cout<<current;
			cout<<" abandon"<<endl;
			return;}
	visited[current] =1;
	cout<<current<<endl;
	for(auto x:graph[current]){
		dfs(x);
	}

}
int main() {


int N, E;
cin>>N>>E;
for(int i = 1;i<E; i++ ){
	graph[i].clear();
}
for(int i = 1;i<E; i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(u);
		graph[u].push_back(v);
	}

dfs(5);
	// your code goes here
	return 0;
}
