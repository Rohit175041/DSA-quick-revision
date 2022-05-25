#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    int V;
    int E;
    int **Adj;
};

Graph* AdjMatrix(){
    int u,v,i;
    Graph *G = (Graph*)malloc(sizeof(Graph));
    if(G){
        cout<<"Memory error"<<endl;
        return AdjMatrix();
    }
    cout<<"Enter the number of node and edges"<<endl;
    cin>>G->V>>G->E;
    *G->Adj= (Graph*)malloc(sizeof(int)*(G->V *G->V));
    for(u=0;u<G->V;u++){
        for(v=0;v<G->V;v++){
            G->Adj[u][v]=0;
        }
    }
    cout<<"Enter node number in a pair that connects an edge "<<endl;
    for(i=0;i<G->E;i++){
        cin>>u>>v;
        G->Adj[u][v]=1;
        G->Adj[v][u]=1;
    }
    return (G);
}


int main(){
    AdjMatrix();
    return 0;
}