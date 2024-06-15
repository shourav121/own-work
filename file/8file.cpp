#include <iostream>
#include <list>
#include <queue>

class Graph {
    int V; // Number of vertices
    std::list<int> *adj; // Pointer to an array containing adjacency lists

public:
    Graph(int V) {
        this->V = V;
        adj = new std::list<int>[V];
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v's list
    }

    void BFS(int s) {
        // Mark all vertices as not visited
        bool *visited = new bool[V];
        for (int i = 0; i< V; ++i)
            visited[i] = false;

        // Create a queue for BFS
        std::queue<int> queue;

        // Mark the current node as visited and enqueue it
        visited[s] = true;
        queue.push(s);

        // 'i' will be used to get all adjacent vertices of a vertex
        std::list<int>::iterator i;

        while (!queue.empty()) {
            // Dequeue a vertex from queue and print it
            s = queue.front();
            std::cout << s << " ";
            queue.pop();

            // Get all adjacent vertices of the dequeued vertex s
            // If an adjacent vertex has not been visited, then mark it visited and enqueue it
            for (i = adj[s].begin(); i != adj[s].end(); ++i) {
                if (!visited[*i]) {
                    visited[*i] = true;
                    queue.push(*i);
                }
            }
        }
    }
};

int main() {
    // Create a graph given in the example
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "Breadth First Traversal (starting from vertex 2): ";
    g.BFS(2);
    std::cout << std::endl;

    return 0;
}
