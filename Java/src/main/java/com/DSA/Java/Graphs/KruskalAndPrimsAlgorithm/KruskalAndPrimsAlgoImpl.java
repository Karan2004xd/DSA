package com.DSA.Java.Graphs.KruskalAndPrimsAlgorithm;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.PriorityQueue;

import com.DSA.Java.Graphs.DisjointSet.*;

// Test Cases

// ArrayList<WeightedNode> nodeList = new ArrayList<>();
// nodeList.add(new WeightedNode("A"));
// nodeList.add(new WeightedNode("B"));
// nodeList.add(new WeightedNode("C"));
// nodeList.add(new WeightedNode("D"));
// nodeList.add(new WeightedNode("E"));

// KruskalAndPrimsAlgoImpl graph = new KruskalAndPrimsAlgoImpl(nodeList);
// graph.addWeightedUndirectedEdge(0, 1, 5);
// graph.addWeightedUndirectedEdge(0, 2, 13);
// graph.addWeightedUndirectedEdge(0, 4, 15);
// graph.addWeightedUndirectedEdge(1, 2, 10);
// graph.addWeightedUndirectedEdge(1, 3, 8);
// graph.addWeightedUndirectedEdge(2, 3, 6);
// graph.addWeightedUndirectedEdge(2, 4, 20);
// System.out.println("Running Kruskal Algorithm on the graph : ");
// graph.kruskal();

public class KruskalAndPrimsAlgoImpl {
  private ArrayList<WeightedNode> nodeList;
  private ArrayList<UndirectedEdge> edgeList;
  private DisJointSetImpl disJointSet;

  public KruskalAndPrimsAlgoImpl(ArrayList<WeightedNode> nodeList) {
    this.nodeList = nodeList;
    this.edgeList = new ArrayList<UndirectedEdge>();
    this.disJointSet = new DisJointSetImpl();
  }

  public void addWeightedUndirectedEdge(int firstIndex, int secondIndex, int weight) {
    UndirectedEdge edge = new UndirectedEdge(nodeList.get(firstIndex), nodeList.get(secondIndex), weight);
    WeightedNode first = edge.first;
    WeightedNode second = edge.second;

    first.neighbours.add(second);
    second.neighbours.add(first);

    first.weightMap.put(second, weight);
    second.weightMap.put(first, weight);
    
    edgeList.add(edge);
  }

  public void kruskal() {
    disJointSet.makeSet(nodeList);
    Comparator<UndirectedEdge> comparator = new Comparator<UndirectedEdge>() {
      @Override
      public int compare(UndirectedEdge arg0, UndirectedEdge arg1) {
        return arg0.weight - arg1.weight;
      }
    };

    Collections.sort(edgeList, comparator);
    int cost = 0;

    for (UndirectedEdge edge : edgeList) {
      WeightedNode first = edge.first;
      WeightedNode second = edge.second;

      if (!disJointSet.findSet(first).equals(disJointSet.findSet(second))) {
        disJointSet.union(first, second);
        cost += edge.weight;
        System.out.println("Taken " + edge);
      }
    }

    System.out.println("\nTotal cost of minimun spamming tree : " + cost);
  }

  public void prims(WeightedNode node) {
    for (int i = 0; i < nodeList.size(); i++) {
      nodeList.get(i).distance = Integer.MAX_VALUE;
    }
    
    node.distance = 0;
    PriorityQueue<WeightedNode> queue = new PriorityQueue<>();
    queue.addAll(nodeList);

    while (!queue.isEmpty()) {
      WeightedNode currentNode = queue.remove();
      for (WeightedNode neighbour : currentNode.neighbours) {
        if (queue.contains(neighbour)) {
          if (neighbour.distance > currentNode.weightMap.get(neighbour)) {
            neighbour.distance = currentNode.weightMap.get(neighbour);
            neighbour.parent = currentNode;
            queue.remove(neighbour);
            queue.add(neighbour);
          }
        }
      }

      int cost = 0;
      System.out.println();
      for (WeightedNode nodeToCheck : nodeList) {
        System.out.println("Node " + nodeToCheck + ", key " + nodeToCheck.distance + " Parent " + nodeToCheck.parent);
        cost += nodeToCheck.distance;
      }
      System.out.println("\nTotal cost of minimun spamming tree: " + cost);
    }
  }
}
