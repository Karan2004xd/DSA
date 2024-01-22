package com.DSA.Java.Graphs;

import com.DSA.Java.Graphs.TopologicalSort.*;

public class GraphRunner {
    public static void main(String[] args) {
        TpsUsingMatrix g = new TpsUsingMatrix();
        g.add_edge("A", 0);
        g.add_edge("B", 1);
        g.add_edge("C", 2);
        g.add_edge("D", 3);
        g.add_edge("E", 4);
        g.add_edge("F", 5);
        g.add_edge("G", 6);
        g.add_edge("H", 7);

        g.directedEdge(0, 2);
        g.directedEdge(2, 4);
        g.directedEdge(4, 7);
        g.directedEdge(4, 5);
        g.directedEdge(5, 6);
        g.directedEdge(1, 2);
        g.directedEdge(1, 3);
        g.directedEdge(3, 5);
        System.out.println(g.toString());

        g.tps();
    }
}
