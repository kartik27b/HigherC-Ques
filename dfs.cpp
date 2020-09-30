#include <iostream>
#include <stack>
#include <vector>
using namespace std;

#define v 5


// dfs on matrix 


template<typename t>
using vec = vector<pair<t,t>>;

// dfs using stack
void addEdge(int source, int destination, vector<vector<int>> &graph)
{
	graph[source][destination] = 1;
	graph[destination][source] = 1;
}


void dfs(int node, vector<bool> &visited, vector<vector<int>> &graph){
	cout << node << " ";
	visited[node] = true;

	for(int i=0; i<v; i++)
	{
		if(graph[node][i] == 1 && !visited[i]){
			dfs(i, visited, graph);
		}
	}
}


int main(int argc, char const *argv[])
{
	vector<bool> visited(v, false);
	vector<int> vec(v, 0);
	vector<vector<int>> graph(v, vec);

	addEdge(0, 1, graph); 
   	 addEdge(0, 2, graph); 
    	addEdge(2, 1, graph); 
   	 addEdge(0, 4, graph);

    	for (int i = 0; i < v; ++i)
    	{
    		if(!visited[i]){
    			dfs(i, visited, graph);
    		}
   	 }	

	return 0;
}
