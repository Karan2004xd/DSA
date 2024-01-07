package com.DSA.Java.Graphs.BasicImplementation.AdjancencyMatrix;

import java.util.ArrayList;

public class Graph {
  ArrayList<GraphNode> nodeList = new ArrayList<GraphNode>();
  int[][] adjancencyMatrix;

  public Graph(ArrayList<GraphNode> nodeList) {
    this.nodeList = nodeList;
    adjancencyMatrix = new int[nodeList.size()][nodeList.size()];
  }

  public void undirectedEdge(int i, int j) {
    adjancencyMatrix[i][j] = 1;
    adjancencyMatrix[j][i] = 1;
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("   ");
    String tempStr = "";

    for (GraphNode node : nodeList) {
      tempStr += node.name + " ";
    }

    sb.append(tempStr + "\n");
    int x = 0;
    for (int i = 0; i < adjancencyMatrix.length; i++) {
      String tempStr1 = "";
      if (x < tempStr.length()) {
        tempStr1 += tempStr.charAt(x) + ": ";
        x += 2;
      }
      for (int j = 0; j < adjancencyMatrix.length; j++) {
        tempStr1 += Integer.toString(adjancencyMatrix[i][j]) + " ";
      }
      sb.append(tempStr1 + "\n");
    }
    return sb.toString();
  }
}
