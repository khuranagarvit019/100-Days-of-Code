#include<iostream>
using namespace std;

int i,j,k,n,a,b,v,u, num_edge=1;

int minimum, mincost = 0;
int cost[9][9], parent[9];

int find(int);
int unio(int, int);

int main() {
    cout<<"Num of vertices"<<endl;
    cin>>n;
    cout<<"Enter Adj. Matrix(Cost)"<<endl;
    for(i =1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            cin>>cost[i][j];
            if (cost[i][j] == 0) {
                cost[i][j] = 999;
            }
        }
    }
    cout<<"Edges of MST are"<<endl;

    while(num_edge < n) {
        for(i=1, minimum =999; i<=n ; i++) {
            for(j=1; j<=n; j++) {
                if (cost[i][j] < minimum) {
                    minimum = cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if(unio(u,v)){
            cout<<num_edge++<<" edge("<<a<<","<<b<<") = "<<minimum<<endl;
            mincost += minimum;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    cout<<"Min Cost"<<mincost;
}
int find(int i) {
    while (parent[i]) {
        i = parent[i];
    }
    return i;
}

int unio(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}
