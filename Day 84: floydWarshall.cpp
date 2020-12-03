#include<iostream>
#define V 4
#define INF 999
using namespace std;

int costMatrix[V][V] = {
   {0, 3, INF, 7},
   {8, 0, 2, INF},
   {5, INF, 0, 1},
   {2, INF, INF, 0}
};

void floydWarshal() {
	int cost[V][V];    //stores shortest path path between every vertex
	for(int i = 0; i<V; i++) {
	for(int j = 0; j<V; j++) {
		cost[i][j] = costMatrix[i][j];     //copies costMatrix to a new matrix
		}
	}
   for(int k = 0; k<V; k++) {
		for(int i = 0; i<V; i++) {
        	for(int j = 0; j<V; j++) {
            	if(cost[i][k]+cost[k][j] < cost[i][j]) {           
            		cost[i][j] = cost[i][k]+cost[k][j];        // Main logic/formula of Floyd Warshall
        		}
    		}	
		}
	}
	
	cout << "The All Pair Shortest Path Matrix is:" << endl;
	for(int i = 0; i<V; i++) {
		for(int j = 0; j<V; j++) {
        	cout  << cost[i][j]<<" ";
		}
		cout << endl;
	}
}

int main() {
	floydWarshal();
return 0;
}
