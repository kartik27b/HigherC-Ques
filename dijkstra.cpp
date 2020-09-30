#include <iostream>
#include <vector>
using namespace std;
#define V 9 

// dijkstra


int findMinVertex(vector<int> &distance, vector<bool> &visited){
	int minVertex = -1;
	int minDistance = INT_MAX;

	for (int i = 0; i < V; ++i)
	{
		if(!visited[i] && distance[i] < minDistance){
			minVertex = i;
			minDistance = distance[i];
		}
	}
	return minVertex;
}
  
void printit(vector<int> &distance){
	for(int i=0; i<V; i++){
		cout << i << "\t " << distance[i] << endl;
	}
}  


void shortest(int graph[V][V], int source){
	vector<int> distance(V, INT_MAX);
	vector<bool> visited(V, false);

	distance[source] = 0;
	//visited[source] = true;

	for(int i=0; i<V-1; i++){

		int minVertex = findMinVertex(distance, visited);
		visited[minVertex] = true;

		for(int j=0; j<V; j++){
			if(!visited[j] && graph[minVertex][j]){
				int dist = graph[minVertex][j] + distance[minVertex];
				if(dist < distance[j]){
					distance[j] = dist;
				}
			}
		}

	}

	printit(distance);
}




// driver program to test above function 
int main() 
{ 
    /* Let us create the example graph discussed above */
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
  //  dijkstra(graph, 0); 
  	 shortest(graph, 0); 
  
    return 0; 
} 
