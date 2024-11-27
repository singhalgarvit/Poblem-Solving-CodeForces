#include <iostream>
#include <queue>

using namespace std;

class Graph {
public:
    static const int MAX_VERTICES = 100; 
    int adjList[MAX_VERTICES][MAX_VERTICES]; 
    int edgeCount[MAX_VERTICES]; 
    int vertices;

    Graph(int vertices) {
        this->vertices = vertices;
       
        for (int i = 0; i < vertices; i++) {
            edgeCount[i] = 0; 
            for (int j = 0; j < MAX_VERTICES; j++) {
                adjList[i][j] = -1;
            }
        }
    }

    void addEdge(int src, int dest) {
        if (edgeCount[src] < MAX_VERTICES) { 
            adjList[src][edgeCount[src]++] = dest; 
        }
    }

    void bfs(int start) {
        bool visited[MAX_VERTICES];
        for (int i = 0; i < vertices; i++) {
            visited[i] = false; 
        }

        queue<int> q;

        q.push(start);
        visited[start] = true;

        cout << "Nodes reachable from " << start << ": ";

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

           
            for (int i = 0; i < edgeCount[node]; i++) {
                int neighbor = adjList[node][i];
                if (neighbor != -1 && !visited[neighbor]) { 
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int vertices, edges;


    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    Graph g(vertices);

  
    cout << "Enter edges (src dest): " << endl;
    for (int i = 0; i < edges; i++) {
        int src, dest;
        cin >> src >> dest;
        g.addEdge(src, dest);
    }

    int startNode;
    cout << "Enter starting node for BFS: ";
    cin >> startNode;

    g.bfs(startNode);

    return 0;
}
