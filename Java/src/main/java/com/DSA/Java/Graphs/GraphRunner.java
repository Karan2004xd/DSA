package com.DSA.Java.Graphs;

import com.DSA.Java.Graphs.SSSPP.*;

public class GraphRunner {
    public static void main(String[] args) {
        SSSPPUsingMatrix g = new SSSPPUsingMatrix();
        g.add_edge("A", 0);
        g.add_edge("B", 1);
        g.add_edge("C", 2);
        g.add_edge("D", 3);
        g.add_edge("E", 4);
        g.add_edge("F", 5);
        g.add_edge("G", 6);

        g.undirectedEdge(0, 1);
        g.undirectedEdge(0, 2);
        g.undirectedEdge(1, 3);
        g.undirectedEdge(1, 6);
        g.undirectedEdge(2, 3);
        g.undirectedEdge(2, 4);
        g.undirectedEdge(3, 5);
        g.undirectedEdge(4, 5);
        g.undirectedEdge(5, 6);
        System.out.println(g.toString());

        g.bfsForSSSPP();
    }
}
