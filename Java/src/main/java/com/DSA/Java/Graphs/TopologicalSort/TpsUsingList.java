package com.DSA.Java.Graphs.TopologicalSort;
import com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyList.*;
import java.util.Stack;

public class TpsUsingList extends Graph {
    public void directedEdge(int i, int j) {
        GraphNode first = getNodeList().get(i);
        GraphNode second = getNodeList().get(j);
        first.neighbours.add(second);
    }

    private void tpsHelper(GraphNode node, Stack<GraphNode> stack) {
        for (GraphNode tempNode : node.neighbours) {
            if (!tempNode.isVisisted) {
                tpsHelper(tempNode, stack);
            }
        }
        node.isVisisted = true;
        stack.push(node);
    }

    public void tps() {
        Stack<GraphNode> stack = new Stack<>();
        for (GraphNode node : getNodeList()) {
            if (!node.isVisisted) {
                tpsHelper(node, stack);
            }
        }

        while (!stack.isEmpty()) {
            System.out.print(stack.pop().name + " ");
        }
        System.out.println();
    }
}
