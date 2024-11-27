#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int V; // Number of vertices in the graph

int minKey(int key[], bool mstSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

void printMST(int parent[], vector<vector<int>>& graph) {
    cout << "Edge \tWeight\n";
    int weight = 0;
    for (int i = 1; i < V; i++){
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
        weight += graph[i][parent[i]];
    }
    cout << "Weight: " << weight << endl;
}

void primMST(vector<vector<int>>& graph) {
    int parent[V]; 
    int key[V];     
    bool mstSet[V];  

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;     
    parent[0] = -1; 

    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent, graph);
}

int main() {
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<vector<int>> graph(V, vector<int>(V));

    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            cin >> graph[i][j];

    primMST(graph);

    return 0;
}