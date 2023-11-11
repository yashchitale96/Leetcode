#include <vector>
#include <algorithm>
using namespace std;

class Graph {
public:
    vector<vector<long>> dist;
    int N = 0;

    Graph(int n, vector<vector<int>>& edges) {
        N = n;
        dist = vector<vector<long>>(n, vector<long>(n, 1e14));

        for (auto& edge : edges) {
            dist[edge[0]][edge[1]] = edge[2];
        }

        for (int i = 0; i < n; i++) {
            dist[i][i] = 0;
        }

        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    void addEdge(vector<int> edge) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                dist[i][j] = min(dist[i][j], dist[i][edge[0]] + dist[edge[1]][j] + edge[2]);
            }
        }
    }

    int shortestPath(int node1, int node2) {
        return ((dist[node1][node2] >= 1e14) ? -1 : dist[node1][node2]);
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
