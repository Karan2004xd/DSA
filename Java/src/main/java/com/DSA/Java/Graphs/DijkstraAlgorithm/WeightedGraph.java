package com.DSA.Java.Graphs.DijkstraAlgorithm;

import java.util.ArrayList;
import java.util.PriorityQueue;

public class WeightedGraph {
    ArrayList<WeightedNode> nodeList = new ArrayList<>();
    
    public void add_vertices(String name, int index) {
        this.nodeList.add(new WeightedNode(name, index));
    }

    private void dijkstraHelper(WeightedNode root) {
        PriorityQueue<WeightedNode> queue = new PriorityQueue<>();
        root.distance = 0;
        queue.addAll(nodeList);

        while (!queue.isEmpty()) {
            WeightedNode currentNode = queue.remove();
            for (WeightedNode node : currentNode.neighbours) {
                if (queue.contains(node)) {
                    if (node.distance > currentNode.distance + currentNode.weightMap.get(node)) {
                        node.distance = (currentNode.distance + currentNode.weightMap.get(node));
                        node.parent = currentNode;
                        queue.remove(node);
                        queue.add(node);
                    }
                }
            }
        }

        for (WeightedNode node : nodeList) {
            System.out.print("Node "+ node.name +", distance : "+ node.distance +", Path : ");
            printPath(node);
            System.out.println();
        }
    }

    public void dijkstra() {
        dijkstraHelper(nodeList.get(0));
    }

    private void printPath(WeightedNode node) {
        if ((node.parent != null)) {
            printPath(node.parent);
        }
        System.out.print(node.name + " ");
    }

    public void addDirectedWeightedEdge(int i, int j, int d) {
        WeightedNode first = nodeList.get(i);
        WeightedNode second = nodeList.get(j);
        first.neighbours.add(second);
        first.weightMap.put(second, d);
    }
};
