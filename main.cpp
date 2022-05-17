#include "Graph/project.h"
#include "Graph/DirectedGraph.h"
#define data_type std::string
#define weight_type std::string


int main() {
    //Tester::executeParser(file::airports);
    //Tester::executeExamples();

    DirectedGraph<data_type, weight_type> afn;
    afn.readInput("../in.txt");
    afn.buildNFA();
    afn.display();


    return EXIT_SUCCESS;
}