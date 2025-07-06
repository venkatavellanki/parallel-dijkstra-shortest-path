#include <iostream>
#include <vector>
#include <limits>
#include <thread>
#include <mutex>

#define INF 9999
#define V 6

std::mutex mtx;

void findMinDistance(const std::vector<int> &dist, const std::vector<bool> &sptSet, int &min_index, int &min_val) {
    min_val = INF;
    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] <= min_val) {
            min_val = dist[v];
            min_index = v;
        }
    }
}

void dijkstra(int graph[V][V], int src) {
    std::vector<int> dist(V, INF);
    std::vector<bool> sptSet(V, false);

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u, min_val;
        std::thread t(findMinDistance, std::ref(dist), std::ref(sptSet), std::ref(u), std::ref(min_val));
        t.join();

        sptSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    std::cout << "\nShortest Distances to all nodes:\n";
    for (int i = 0; i < V; i++) {
        std::cout << "Node " << i << ": " << dist[i] << std::endl;
    }
}

int main() {
    int graph[V][V] = {
        {0, 3, 0, 0, 0, 0},
        {3, 0, 1, 0, 0, 0},
        {0, 1, 0, 7, 0, 2},
        {0, 0, 7, 0, 6, 3},
        {0, 0, 0, 6, 0, 1},
        {0, 0, 2, 3, 1, 0}
    };

    int source = 0;
    std::cout << "Source Node: " << source << std::endl;
    dijkstra(graph, source);

    return 0;
}
