package com.DSA.Java.Graphs.TopologicalSort;
import java.util.ArrayList;
import java.util.Stack;

import com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyMatrix.*;;

public class TpsUsingMatrix extends Graph {
    private void tpsHelper(GraphNode node, Stack<GraphNode> stack) {
        ArrayList<GraphNode> neighbours = getNeighbours(node);
        for (GraphNode tempNode : neighbours) {
            if (!tempNode.isVisited) {
                tpsHelper(tempNode, stack);
            }
        }

        node.isVisited = true;
        stack.push(node);
    }

    public void tps() {
        Stack<GraphNode> stack = new Stack<>();
        for (GraphNode node : getNodeList()) {
            if (!node.isVisited) {
                tpsHelper(node, stack);
            }
        }

        while (!stack.isEmpty()) {
            System.out.print(stack.pop().name + " ");
        }
        System.out.println();
    }
}
