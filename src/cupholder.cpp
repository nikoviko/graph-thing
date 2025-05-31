#include "cupholder.h"
#include <iostream>
#include <queue>
#include <stack>
#include <limits>

using std::cout;
using std::endl;

// vertices
Vertex::Vertex(int id, const string& label) : id(id), label(label) {}

// arestas
Edge::Edge(int from, int to, double weight) : from(from), to(to), weight(weight) {}

// grafoooo
void Graph::addVertex(const string& label) {
    int id = vertices.size();
    vertices.emplace_back(id, label);
}

void Graph::addEdge(int from, int to, double weight, bool directed) {
    if (from >= static_cast<int>(vertices.size()) || 
        to >= static_cast<int>(vertices.size())) {
        cout << "Erro: vértice inválido." << endl;
        return;
    }

    edges.emplace_back(from, to, weight);
    adjacencyList[from].emplace_back(to, weight);

    if (!directed) {
        edges.emplace_back(to, from, weight);
        adjacencyList[to].emplace_back(from, weight);
    }
}


void Graph::show() const {
    cout << "===== Grafo =====" << endl;
    for (const auto& vertex : vertices) {
        cout << vertex.label << " -> ";
        if (adjacencyList.find(vertex.id) != adjacencyList.end()) {
            for (const auto& neighbor : adjacencyList.at(vertex.id)) {
                cout << vertices[neighbor.first].label
                     << " (" << neighbor.second << "), ";
            }
        }
        cout << endl;
    }
    cout << "=================" << endl;
}

// funcoes futuras ignorarrrrr
void Graph::BFS(int start) const {
    cout << "[BFS ainda não implementado]" << endl;
}

void Graph::DFS(int start) const {
    cout << "[DFS ainda não implementado]" << endl;
}

void Graph::dijkstra(int start) const {
    cout << "[Dijkstra ainda não implementado]" << endl;
}
