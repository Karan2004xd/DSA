package com.DSA.Java.Graphs.BellmanFordAlgorithm;

import java.util.ArrayList;

import com.DSA.Java.Graphs.DijkstraAlgorithm.*;

// Test Cases
// BellmanFordImpl g = new BellmanFordImpl();
// g.addVertices("A", 0);
// g.addVertices("B", 1);
// g.addVertices("C", 2);
// g.addVertices("D", 3);
// g.addVertices("E", 4);
// g.addVertices("F", 5);
// g.addVertices("G", 6);

// g.addDirectedWeightedEdge(0, 1, 2);
// g.addDirectedWeightedEdge(0, 2, 5);
// g.addDirectedWeightedEdge(1, 2, 6);
// g.addDirectedWeightedEdge(1, 3, 1);
// g.addDirectedWeightedEdge(1, 4, 3);
// g.addDirectedWeightedEdge(2, 5, 8);
// g.addDirectedWeightedEdge(3, 4, 4);
// g.addDirectedWeightedEdge(0, 1, 2);
// g.addDirectedWeightedEdge(4, 6, 9);
// g.addDirectedWeightedEdge(5, 6, 7);

// g.bellmanFordAlgo();

public class BellmanFordImpl {
  private ArrayList<WeightedNode> nodeList;

  public BellmanFordImpl() {
    nodeList = new ArrayList<>();
  }

  private void bellmanFordAlgoHelper(WeightedNode node) {
    node.distance = 0;
    for (int i = 0; i < nodeList.size(); i++) {
      for (WeightedNode currentNode : nodeList) {
        for (WeightedNode neighbour : currentNode.neighbours) {
          int tempDistance = currentNode.distance + currentNode.weightMap.get(neighbour);
          if (neighbour.distance > tempDistance) {
            neighbour.distance = tempDistance;
            neighbour.parent = currentNode;
          }
        }
      }
    }

    System.out.println("Checking for any negative cycles...");
    for (WeightedNode currentNode : nodeList) {
      for (WeightedNode neighbour : currentNode.neighbours) {
        int tempDistance = currentNode.distance + currentNode.weightMap.get(neighbour);
        if (neighbour.distance > tempDistance) {
          System.out.println("\nNegative Cycle found!\n");
          System.out.println("Vertex name: " + neighbour.name);
          System.out.println("Old cost: " + neighbour.distance);
          System.out.println("New cost: " + tempDistance);
          return;
        }
      }
    }

    System.out.println("Negative cycles where not found");
    for (WeightedNode nodeToCheck : nodeList) {
      System.out.print("Node " + nodeToCheck + ", distance: " + nodeToCheck.distance + ", Path: ");
      printPath(nodeToCheck);
      System.out.println();
    }
  }

  public void bellmanFordAlgo() {
    bellmanFordAlgoHelper(nodeList.get(0));
  }

  public void addVertices(String name, int index) {
    this.nodeList.add(new WeightedNode(name, index));
  }

  public void addDirectedWeightedEdge(int i, int j, int d) {
    WeightedNode first = nodeList.get(i);
    WeightedNode second = nodeList.get(j);
    first.neighbours.add(second);
    first.weightMap.put(second, d);
  }

  private void printPath(WeightedNode node) {
    if (node.parent != null) {
      printPath(node.parent);
    }
    System.out.print(node.name + " ");
  }
}
