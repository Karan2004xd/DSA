#ifndef BFS_AND_DFS_USING_LIST_H_
#define BFS_AND_DFS_USING_LIST_H_
#include "../BasicImplementation/AdjacencyList.h"
#include <stack>
#include <queue>

// Test Cases 

    /* BfsAndDfsUsingList graph; */
    /* graph.add_element("A", 0); */
    /* graph.add_element("B", 1); */
    /* graph.add_element("C", 2); */
    /* graph.add_element("D", 3); */
    /* graph.add_element("E", 4); */

    /* graph.undirected_edge(0, 1); */
    /* graph.undirected_edge(0, 2); */
    /* graph.undirected_edge(0, 3); */
    /* graph.undirected_edge(1, 4); */
    /* graph.undirected_edge(2, 3); */
    /* graph.undirected_edge(3, 4); */

    /* graph.display_graph(); */
    
    /* // Use only one of them at a time or use a seperate object for each */
    /* graph.dfs(); // Output : A D E C B */
    /* /1* graph.bfs(); // Output : A B C D E *1/ */

class BfsAndDfsUsingList : public AdjacencyList {
public:
    void bfs();
    void dfs();
};
#endif // BFS_AND_DFS_USING_LIST_H_
