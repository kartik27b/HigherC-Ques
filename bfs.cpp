#include <iostream>
#include <queue> // for bfs
#include <vector>
using namespace std;

#define v 6

void addedge(int source, int dest, vector<vector<int>> &graph){
	graph[source][dest] = 1;
	graph[dest][source] = 1;
}


void bfs(int source, vector<bool> &visited, vector<vector<int>> &graph){
	queue<int> q;
	visited[source] = true;
	q.push(source);

	while(!q.empty()){
		auto val = q.front();
		
		cout << val << " " ;
		q.pop();

		for(int i=0; i<v; i++){
			if(graph[val][i] == 1 && (!visited[i])){
				visited[i] = true;
				q.push(i);
			}
		}
	}

}


int main(int argc, char const *argv[])
{	
	vector<int> vec(v, 0);
	vector<vector<int>> graph(v, vec);
	vector<bool> visited(v, false);


	addedge(0, 1, graph); 
    addedge(1, 2, graph); 
    addedge(2, 0, graph); 
    addedge(2, 3, graph); 
    //addedge(3, 3, graph); 

    for (int i = 0; i < v; ++i)
    {
    	if(!visited[i]){
    		bfs(i, visited, graph);
    	}
    }


    cout << endl;


 //    for(int i=0; i<v; i++){
	// 	for(int j=0; j<v; j++){
	// 		cout << graph[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return 0;
}