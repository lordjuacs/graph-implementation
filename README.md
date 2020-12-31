# graph-implementation
## Complete implementation of graphs (directed and undirected)
   
--------

Developed in the Algorithms and Data Structures course at UTEC in November 2020.
Work done by:
- [Joaquin Ramirez](https://github.com/lordjuacs)

Collaborators:
- [Anthony Aguilar](https://github.com/warleon)
- [Juan Pablo Lozada](https://github.com/IWeseI)

----


### Methods:
```cpp
bool insertVertex(string id, V data); // Creates a new vertex in the graph with some data and an ID

bool createEdge(string start, string end, E data); // Creates a new edge in the graph with some data

bool deleteVertex(string id); // Deletes a vertex in the graph

bool deleteEdge(string start, string end); // Deletes an edge in the graph

void display(); // Displays the graph

E &operator()(string start, string end); // Gets the value of the edge from the start and end vertexes

float density() const; // Calculates the density of the graph

bool isDense(float threshold = 0.5) const; // Calculates the density of the graph, and determine if it is dense depending on a threshold value

bool isConnected(); // Detects if the graph is connected

bool isStronglyConnected() throw(); // Detects if the graph is strongly connected (only for directed graphs)

bool empty(); // Checks if the graph is empty

void clear(); // Clears the graph
```

### Algorithms - Traversal:
```cpp
//Given the graph
UndirectedGraph<char, int> graph;

Kruskal<char, int> kruskal(&graph); // Generates the MST for the graph (only for undirected graphs)
UndirectedGraph<char, int> result = kruskal.apply(); // Returns a tree

Prim<char, int> prim(&graph, "A"); // Generates the MST for the graph given a vertex (only for undirected graphs)
UndirectedGraph<char, int> result = prim.apply(); // Returns a tree

BFS<char, int> bfs(graph, "A"); // Traverses the graph using BFS starting on a given vertex
UndirectedGraph<char, int> result = bfs.undirectedApply(); // Returns a tree

DFS<char, int> dfs(graph, "A"); // Traverses the graph using DFS starting on a given vertex
UndirectedGraph<char, int> result = dfs.undirectedApply(); // Returns a tree
```
### Algorithms - Shortest Path:
```cpp
//Given the graph
UndirectedGraph<char, int> graph;

Dijkstra<char, int> dijkstra(graph, "A"); // Computes the Dijkstra algorithm starting on a given vertex 

BellmanFord<data_type, weight_type> bellman(graph, "A"); // Computes the Bellman-Ford algorithm starting on a given vertex

FloydWarshall<data_type, weight_type> floyd(graph); // Computes the Floyd-Warshall algorithm

SCC<char, int> scc(graph); // Generates the strongly connected components of the graph (only for directed graphs)
UndirectedGraph<char, int> result = bfs.apply(); // Returns a graph
```

## JSON File Parser
* Builds a graph after reading a JSON file which stores data on airports around the globe. The library used to parse the data is `rapidJSON`. 

## Tester
* Run `Tester::executeParser(file::airports);` to execute the data parser and check the successful parsing to graphs and the time complexity of the main algorithms.
* Run `Tester::executeExamples();` to build your own graph from the console and execute different methods and algorithms.
