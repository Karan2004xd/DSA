package com.DSA.Java.Graphs.SSSPP;
import java.util.LinkedList;
import com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyList.Graph;
import com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyList.GraphNode;

public class SSSPPUsingList extends Graph {
    private void pathPrint(GraphNode node) {
        if (node.parent != null) {
            pathPrint(node.parent);
        } 
        System.out.print(node.name + " ");
    }

    private void bfsForSSSPPHelper(GraphNode root) {
        LinkedList<GraphNode> queue = new LinkedList<>();
        queue.add(root);
        while (!queue.isEmpty()) {
            GraphNode currentNode = queue.remove(0);
            currentNode.isVisisted = true;
            System.out.print("Printing the path for " + currentNode.name + ": ");
            pathPrint(currentNode);
            System.out.println();

            for (GraphNode node : currentNode.neighbours) {
                if (!node.isVisisted) {
                    queue.add(node);
                    node.isVisisted = true;
                    node.parent = currentNode;
                }
            }
        }
    }

    public void bfsForSSSPP() {
        bfsForSSSPPHelper(getNodeList().get(0));
    }
}
