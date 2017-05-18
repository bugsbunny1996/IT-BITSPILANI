#include <bits/stdc++.h>
using namespace std;

vector <int> comps;
vector <int> graph[100];
int visited[100];

void dfs(int current)
{
	if(visited[current] || color[current] == 'B')
		{	cout<<current;
			cout<<" abandon"<<endl;
			return 0;
    }
	visited[current] =1;
  int ret = 0;
	cout<<current<<endl;
	for(auto x:graph[current])
  {
		dfs(x);
	}
  return ret;
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
for (int i = 1; i<=N; i++)
  {
    if(color[i] == 'B' && !visited[i])
    {
      comps.push_back(dfs(i));
    }
  }

int total = 0;
for(int i = 0; i<=N; i++)
{
  total+ = comps[i];
}

for(int i = 0; i<=N; i++)
{
  ans = comps[i] * (total - comps[i]);
}
cout<<ans/2 <<endl;
coit
	return 0;
}
