#pragma once
#include <string>
#include <memory>
#include <ostream>
#include <vector>
#include <numeric>

class Node;
class Edge;

const int MAX_VALUE = 10e7;

class Vertex
{
    std::string name;
    std::vector<Edge *> adjacenciesList;
    Vertex *predecessor = nullptr;
    double minDistance = MAX_VALUE;

public:
    Vertex(std::string const &name);
    std::string getName() const;
    void addNeighbour(Edge *edge);
    const std::vector<Edge *> &getAdjacenciesList();
    Vertex *getPredecessor() const;
    void setPredecessor(Vertex *predecessor);
    double getMinDistance() const;
    void setMinDistance(double distance);
    friend std::ostream &operator<<(std::ostream &strm, const Vertex &vert);
    // we will compare objects of Vertexes
    // How to know which one is smaller and greater?
    bool operator<(const Vertex &other) const;
};