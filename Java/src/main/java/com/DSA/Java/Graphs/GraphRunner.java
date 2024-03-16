package com.DSA.Java.Graphs;

import com.DSA.Java.Graphs.TopologicalSort.TpsUsingList;
import com.DSA.Java.Graphs.TopologicalSort.TpsUsingMatrix;

public class GraphRunner {
  public static void main(String[] args) {
    TpsUsingMatrix graph = new TpsUsingMatrix();
    graph.add_edge("A", 0);
    graph.add_edge("B", 1);
    graph.add_edge("C", 2);
    graph.add_edge("D", 3);
    graph.add_edge("E", 4);
    graph.add_edge("F", 5);
    graph.add_edge("G", 6);
    graph.add_edge("H", 7);

    graph.directedEdge(0, 2);
    graph.directedEdge(2, 4);
    graph.directedEdge(4, 7);
    graph.directedEdge(4, 5);
    graph.directedEdge(5, 6);
    graph.directedEdge(1, 2);
    graph.directedEdge(1, 3);
    graph.directedEdge(3, 5);
    graph.tps();
  }
}
