#include <stdio.h>
#include <stdbool.h>

#define MAX_NODES 100

int graph[MAX_NODES][MAX_NODES];
int numNodes;

void initializeGraph() {
    for (int i = 0; i < MAX_NODES; i++) {
        for (int j = 0; j < MAX_NODES; j++) {
            graph[i][j] = 0; // Initialize the graph with zeros
        }
    }
}

void addEdge(int u, int v, int weight) {
    graph[u][v] = weight;
    graph[v][u] = weight;
}

void primMST() {
    int selected[MAX_NODES];
    int minWeight[MAX_NODES];

    for (int i = 0; i < numNodes; i++) {
        selected[i] = false;
        minWeight[i] = INT_MAX;
    }

    int startNode = 0; // You can change the starting node if needed
    selected[startNode] = true;
    int numSelectedNodes = 1;
    int totalWeight = 0;

    printf("Minimum Spanning Tree Edges:\n");

    while (numSelectedNodes < numNodes) {
        int u = -1;
        int v = -1;
        int minEdgeWeight = INT_MAX;

        for (int i = 0; i < numNodes; i++) {
            if (selected[i]) {
                for (int j = 0; j < numNodes; j++) {
                    if (!selected[j] && graph[i][j] != 0 && graph[i][j] < minWeight[j]) {
                        minWeight[j] = graph[i][j];
                        if (graph[i][j] < minEdgeWeight) {
                            minEdgeWeight = graph[i][j];
                            u = i;
                            v = j;
                        }
                    }
                }
            }
        }

        selected[v] = true;
        numSelectedNodes++;
        totalWeight += minEdgeWeight;
        printf("%d - %d: %d\n", u, v, minEdgeWeight);
    }

    printf("Total Minimum Spanning Tree Weight: %d\n", totalWeight);
}

int main() {
    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &numNodes);

    initializeGraph();

    printf("Enter the number of edges: ");
    int numEdges;
    scanf("%d", &numEdges);

    for (int i = 0; i < numEdges; i++) {
        int u, v, weight;
        printf("Enter edge %d (node u, node v, weight): ", i + 1);
        scanf("%d %d %d", &u, &v, &weight);
        addEdge(u, v, weight);
    }

    primMST();

    return 0;
}

