#include <iostream>
#include <climits>
using namespace std;
#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

void dijkstra(int graph[100][100], int V, int start) {
    int dist[100];   // Stores the shortest distance from start to each vertex
    bool visited[100];  // Keeps track of visited vertices

    // Initialize the distances and visited array
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;   
        visited[i] = false; 
    }
    dist[start] = 0;  // Distance to the start vertex is 0

    // Dijkstra's algorithm
    for (int count = 0; count < V - 1; count++) {
        int minDist = INT_MAX;
        int u = -1;

        // Find the vertex with the smallest distance that hasn't been visited
        for (int v = 0; v < V; v++) {
            if (!visited[v] && dist[v] < minDist) {
                minDist = dist[v];
                u = v;
            }
        }

        visited[u] = true;  // Mark the vertex u as visited

        // Update distances of adjacent vertices
        for (int v = 0; v < V; v++) {
            if (graph[u][v] != 0 && !visited[v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];  
            }
        }
    }

    // Output the distances from the start vertex
    cout << "Vertex \t Distance from Source (" << start << ")\n";
    int totalCost = 0;  // Variable to store the total cost

    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX) {
            cout << i << " \t INF\n"; 
        } else {
            cout << i << " \t " << dist[i] << endl;
            totalCost += dist[i];  // Add the distance to total cost if it's finite
        }
    }

    cout << "Total Cost (sum of shortest paths to all reachable vertices): " << totalCost << endl;
}

int main() {
    int V, E;
.
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Initialize the graph with 0s
    int graph[100][100];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            graph[i][j] = 0;  
        }
    }

    cout << "Enter each edge in the format (u v weight) where u, v are vertices and weight is the edge weight:\n";
    for (int i = 0; i < E; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u][v] = weight;
        graph[v][u] = weight;  // Since it's an undirected graph
    }

    int start;
    cout << "Enter the starting vertex: ";
    cin >> start;
    
    // Run Dijkstra's algorithm
    dijkstra(graph, V, start);

    return 0;
}

