package com.DSA.Java.Graphs;

import com.DSA.Java.Graphs.DijkstraAlgorithm.*;

public class GraphRunner {
    public static void main(String[] args) {
        WeightedGraph g = new WeightedGraph();
        g.add_vertices("A", 0);
        g.add_vertices("B", 1);
        g.add_vertices("C", 2);
        g.add_vertices("D", 3);
        g.add_vertices("E", 4);
        g.add_vertices("F", 5);
        g.add_vertices("G", 6);

        g.addDirectedWeightedEdge(0, 1, 2);
        g.addDirectedWeightedEdge(0, 2, 5);
        g.addDirectedWeightedEdge(1, 2, 6);
        g.addDirectedWeightedEdge(1, 3, 1);
        g.addDirectedWeightedEdge(1, 4, 3);
        g.addDirectedWeightedEdge(2, 5, 8);
        g.addDirectedWeightedEdge(3, 4, 4);
        g.addDirectedWeightedEdge(0, 1, 2);
        g.addDirectedWeightedEdge(4, 6, 9);
        g.addDirectedWeightedEdge(5, 6, 7);

        g.dijkstra();
    }
}
