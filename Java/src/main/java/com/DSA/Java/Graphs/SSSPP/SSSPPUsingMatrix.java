package com.DSA.Java.Graphs.SSSPP;
import java.util.LinkedList;

import com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyMatrix.Graph;
import com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyMatrix.GraphNode;

public class SSSPPUsingMatrix extends Graph {
    private void printPath(GraphNode node) {
        if (node.parent != null) {
            printPath(node.parent);
        }
        System.out.print(node.name + " ");
    }

    private void bfsForSSSPPHelper(GraphNode root) {
        LinkedList<GraphNode> queue = new LinkedList<>();
        queue.add(root);
        while (!queue.isEmpty()) {
            GraphNode currentNode = queue.remove(0);
            currentNode.isVisited = true;
            System.out.print("Printing the path for " + currentNode.name + ": ");
            printPath(currentNode);
            System.out.println();

            for (GraphNode node : getNeighbours(currentNode)) {
                if (!node.isVisited) {
                    queue.add(node);
                    node.isVisited = true;
                    node.parent = currentNode;
                }
            }
        }
    }

    public void bfsForSSSPP() {
        bfsForSSSPPHelper(getNodeList().get(0));
    }
}
