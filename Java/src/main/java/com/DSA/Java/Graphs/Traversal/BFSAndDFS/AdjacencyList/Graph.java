package com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyList;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Stack;

public class Graph {
    ArrayList<GraphNode> nodeList = new ArrayList<GraphNode>();

    public void add_edge(String name, int index) {
        nodeList.add(new GraphNode(name, index));
    }

    public ArrayList<GraphNode> getNodeList() {
        return nodeList;
    }

    public void undirectedEdge(int i, int j) {
        GraphNode first = nodeList.get(i);
        GraphNode second = nodeList.get(j);
        first.neighbours.add(second);
        second.neighbours.add(first);
    }

    public void directedEdge(int i, int j) {
        GraphNode first = nodeList.get(i);
        GraphNode second = nodeList.get(j);
        first.neighbours.add(second);
    }

    private void bfsHelper(GraphNode node) {
        LinkedList<GraphNode> queue = new LinkedList<GraphNode>();
        queue.add(node);
        while (!queue.isEmpty()) {
            GraphNode currentNode = queue.remove(0);
            currentNode.isVisisted = true;
            System.out.print(currentNode.name + " ");
            for (GraphNode gn : currentNode.neighbours) {
                if (!gn.isVisisted) {
                    queue.add(gn);
                    gn.isVisisted = true;
                }
            }
        }
    }

    public void bfs() {
        for (GraphNode node : nodeList) {
            if (!node.isVisisted) {
                bfsHelper(node);
            }
        }
        System.out.println();
    }

    private void dfsHelper(GraphNode node) {
        Stack<GraphNode> stack = new Stack<GraphNode>();
        stack.add(node);
        while (!stack.isEmpty()) {
            GraphNode currentNode = stack.pop();
            currentNode.isVisisted = true;
            System.out.print(currentNode.name + " ");

            for (GraphNode gn : currentNode.neighbours) {
                if (!gn.isVisisted) {
                    gn.isVisisted = true;
                    stack.add(gn);
                }
            }
        }
    }

    public void dfs() {
        for (GraphNode node : nodeList) {
            if (!node.isVisisted) {
                dfsHelper(node);
            }
        }
        System.out.println();
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
