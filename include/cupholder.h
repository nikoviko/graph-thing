#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <utility>

using std::string;
using std::vector;
using std::unordered_map;
using std::pair;

class Vertex {
public:
    int id;
    string label;

    Vertex(int id, const string& label);
};

class Edge {
public:
    int from;
    int to;
    double weight;

    Edge(int from, int to, double weight = 1.0);
};

class Graph {
private:
    vector<Vertex> vertices;
    vector<Edge> edges;
    unordered_map<int, vector<pair<int, double>>> adjacencyList;

public:
    void addVertex(const string& label);
    void addEdge(int from, int to, double weight = 1.0, bool directed = false);
    void show() const;

    // funções que vo implementar depois:
    void BFS(int start) const;
    void DFS(int start) const;
    void dijkstra(int start) const;
};
