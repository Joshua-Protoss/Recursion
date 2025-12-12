#ifndef Vertex_h
#define Vertex_h

#include <vector>
#include <ostream>
#include <string>

class Vertex {

private:
    // every node has a name (string or character)
    std::string name = 0;
    // we have to track wether we have visited the node or not
    bool visited = false;
    // we store all the neighbors in an array (vector)
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

    friend std::ostream &operator<<(std::ostream &os, const Vertex &vertex); // overloading the stream insertion operator (<<) for the vertex class
    // operator<< needs to access private or protected members of the Vertex class hence the : friend
      // ERROR: Cannot access vertex.name - it's private!
};

#endif