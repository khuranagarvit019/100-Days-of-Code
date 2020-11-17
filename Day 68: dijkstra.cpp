#include<iostream>
using namespace std;
#define V 3

int minimumDistance(int distance[], bool visitedNode[]) {
    
    int min = 999, index;
    for(int v=1;v<=V;v++) {

		if(visitedNode[v]==false &&distance[v]<=min) {

			min=distance[v];
			index=v;
		}
	}
	return index;
}

void Dijkstra(int cost[V][V], int sourceVertex) {
    
    int distance[V];
    bool visitedNode[V];
    for (int i ; i<=V; i++) {
        distance[i] = 999;
        visitedNode[i] = false;
    }

    distance[sourceVertex] = 0;
    for (int c = 2; c<=V; c++) {
        int u = minimumDistance(distance, visitedNode);
        visitedNode[u] = true;

        for(int v =1; v<= V; v++) {
            if(!visitedNode[v] && cost[u][v] && distance[u]+cost[u][v] < distance[v]) {
                distance[v] = distance[u] + cost[u][v];
            }
        }

    }
    cout<<"The shortest path "<<sourceVertex<<" to all other vertices is:"<<endl;
    for (int i = 1; i<= V; i++) {
        if(i != sourceVertex) {
            cout<<"Source: "<<sourceVertex<<"\t Destination: "<<i<<"\t Minimum Cost is: "<<distance[i]<<endl;
        }
    }
}

int main() {
    int cost[V][V], i, j, sourceVertex;

    cout<<"Enter the weights of Cost Matrix"<<endl;
    for (i =1; i<= V; i++) {
        for (j=1; j<= V; j++) {
            cin>>cost[i][j];
            if (cost[i][j] == 0) {
                cost[i][j] == 999;
            }
        }
    }

    cout<<"Source Vertex"<<endl;
    cin>> sourceVertex;
    Dijkstra(cost,sourceVertex);
    return 0;

}
