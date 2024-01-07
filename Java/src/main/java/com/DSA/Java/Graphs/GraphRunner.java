package com.DSA.Java.Graphs;

import java.util.ArrayList;

import com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyList.*;

public class GraphRunner {
  public static void main(String[] args) {
    ArrayList<GraphNode> nodeList = new ArrayList<GraphNode>();
    nodeList.add(new GraphNode("A", 0));
    nodeList.add(new GraphNode("B", 1));
    nodeList.add(new GraphNode("C", 2));
    nodeList.add(new GraphNode("D", 3));
    nodeList.add(new GraphNode("E", 4));

    Graph g = new Graph(nodeList);
    g.undirectedEdge(0, 1);
    g.undirectedEdge(0, 2);
    g.undirectedEdge(0, 3);
    g.undirectedEdge(1, 4);
    g.undirectedEdge(2, 3);
    g.undirectedEdge(3, 4);
    System.out.println(g.toString());

    g.dfs();
  }
}
