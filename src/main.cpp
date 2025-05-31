#include "../include/cupholder.h"
#include <iostream>

int main() {
    Graph g;

    
    g.addVertex("A");
    g.addVertex("B");
    g.addVertex("C");
    g.addVertex("D");

    
    g.addEdge(0, 1, 2.0);
    g.addEdge(0, 2, 1.5);
    g.addEdge(1, 2, 3.5);
    g.addEdge(1, 3, 2.1);

    
    g.show();

    //futuro
    g.BFS(0);
    g.DFS(0);
    g.dijkstra(0);

    return 0;
}
