package com.DSA.Java.Graphs.FloydWarshallAlgorithm;

import java.util.ArrayList;

import com.DSA.Java.Graphs.DijkstraAlgorithm.*;

// Test Cases
// FloydWarshallImpl g = new FloydWarshallImpl();
// g.addVertices("A", 0);
// g.addVertices("B", 1);
// g.addVertices("C", 2);
// g.addVertices("D", 3);

// g.addDirectedWeightedEdge(0, 3, 1);
// g.addDirectedWeightedEdge(0, 1, 8);
// g.addDirectedWeightedEdge(1, 2, 1);
// g.addDirectedWeightedEdge(2, 0, 4);
// g.addDirectedWeightedEdge(3, 1, 2);
// g.addDirectedWeightedEdge(3, 2, 9);

// g.floydWarshallAlgo();

public class FloydWarshallImpl {
  private ArrayList<WeightedNode> nodeList;

  public FloydWarshallImpl() {
    this.nodeList = new ArrayList<>();
  }

  public void floydWarshallAlgo() {
    int size = nodeList.size();
    int[][] V = new int[size][size];

    for (int i = 0; i < size; i++) {
      WeightedNode first = nodeList.get(i);
      for (int j = 0; j < size; j++) {
        WeightedNode second = nodeList.get(j);
        if (i == j) {
          V[i][j] = 0;
        } else if (first.weightMap.containsKey(second)) {
          V[i][j] = first.weightMap.get(second);
        } else {
          V[i][j] = Integer.MAX_VALUE / 10;
        }
      }
    }

    for (int k = 0; k < size; k++) {
      for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          if (V[i][j] > V[i][k] + V[k][j]) {
            V[i][j] = V[i][k] + V[k][j];
          }
        }
      }
    }

    for (int i = 0; i < size; i++) {
      System.out.print("Printing the distance list for node " + nodeList.get(i) + ": ");
      for (int j = 0; j < size; j++) {
        System.out.print(V[i][j] + " ");
      }
      System.out.println();
    }
  }

  // private void printPath(WeightedNode node) {
  //   if (node.parent != null) {
  //     printPath(node.parent);
  //   }
  //   System.out.print(node.name + " ");
  // }

  public void addVertices(String name, int index) {
    this.nodeList.add(new WeightedNode(name, index));
  }

  public void addDirectedWeightedEdge(int i, int j, int d) {
    WeightedNode first = nodeList.get(i);
    WeightedNode second = nodeList.get(j);
    first.neighbours.add(second);
    first.weightMap.put(second, d);
  }
}
