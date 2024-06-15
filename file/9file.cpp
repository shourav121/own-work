#include <iostream>
#include <list>
#include <stack>

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

    void DFSUtil(int v, bool visited[]) {
        // Mark the current node as visited and print it
        visited[v] = true;
        std::cout<< v << " ";

        // Recur for all the vertices adjacent to this vertex
        std::list<int>::iterator i;
        for (i =adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited);
    }

    void DFS(int v) {
        // Mark all the vertices as not visited
        bool*visited = new bool[V];
        for (int i = 0; i < V; ++i)
            visited[i] = false;

        // Call the recursive helper function to print DFS traversal
        DFSUtil(v, visited);
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

    std::cout << "Depth First Traversal (starting from vertex 2): ";
    g.DFS(2);
    std::cout << std::endl;

    return 0;
}
