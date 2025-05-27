#include <bits/stdc++.h>
using namespace std;

void floydWarshall(int V, vector<vector<int>> &dist) {
    // Applying Floyd-Warshall Algorithm
    for (int k = 1; k <= V; k++) {
        for (int i = 1; i <= V; i++) {
            for (int j = 1; j <= V; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;

    // Initialize the distance matrix with INT_MAX (infinity)
    vector<vector<int>> dist(vertices + 1, vector<int>(vertices + 1, INT_MAX));

    // Distance from a vertex to itself is 0
    for (int i = 1; i <= vertices; i++) {
        dist[i][i] = 0;
    }

    // Input edges
    for (int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w; // Directed graph with weights
    }

    // Run Floyd-Warshall algorithm
    floydWarshall(vertices, dist);

    // Output the shortest distances
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 1; i <= vertices; i++) {
        for (int j = 1; j <= vertices; j++) {
            if (dist[i][j] == INT_MAX) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}