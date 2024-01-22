package com.DSA.Java.Graphs.BasicImplementation.AdjancencyList;

import java.util.ArrayList;

public class Graph {
    ArrayList<GraphNode> nodeList = new ArrayList<GraphNode>();

    public ArrayList<GraphNode> getNodeList() {
        return nodeList;
    }

    public void add_edge(String name, int index) {
        nodeList.add(new GraphNode(name, index));
    }

    public void undirectedEdge(int i, int j) {
        GraphNode first = nodeList.get(i);
        GraphNode second = nodeList.get(j);
        first.neighbours.add(second);
        second.neighbours.add(first);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (GraphNode i : nodeList) {
            sb.append(i.name + ": ");
            for (GraphNode j : i.neighbours) {
                sb.append(j.name);
                if (j != i.neighbours.getLast()) {
                    sb.append(" -> ");
                }
            }
            sb.append("\n");
        }
        return sb.toString();
    }
}
