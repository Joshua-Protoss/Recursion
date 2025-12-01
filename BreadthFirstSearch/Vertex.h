#ifndef Vertex_h
#define Vertex_h
#include <ostream>
#include <vector>
#include <memory>

class Vertex {
private:
    //every node will have a string (data) parameter
    std::string name = 0;
    //track wether we have already visited the node or not
    bool visited = false;
    //store the neighboring nodes in an array (vector)
    std::vector<Vertex *> neighbours;

public:

    Vertex(const std::string &name);
    ~Vertex();

    const std::string &getName() const;
    void setName(const std::string &name);

    bool isVisited() const;
    void setVisited(bool visited);

    const std::vector<Vertex *> &getNeighbourList() const;
    void addNeighbour(Vertex *neighbour);

    friend std::ostream &operator<<(std::ostream &os, const Vertex &vertex);
 
};

#endif