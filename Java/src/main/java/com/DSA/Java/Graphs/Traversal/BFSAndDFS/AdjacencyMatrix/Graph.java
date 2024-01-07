package com.DSA.Java.Graphs.Traversal.BFSAndDFS.AdjacencyMatrix;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Stack;

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

  private ArrayList<GraphNode> getNeighbours(GraphNode node) {
    ArrayList<GraphNode> neighbours = new ArrayList<GraphNode>();
    for (int i = 0; i < adjancencyMatrix.length; i++) {
      if (adjancencyMatrix[node.index][i] == 1) {
        neighbours.add(nodeList.get(i));
      }
    }
    return neighbours;
  }
  
  private void bfsHelper(GraphNode node) {
    LinkedList<GraphNode> queue = new LinkedList<GraphNode>();
    queue.add(node);
    while (!queue.isEmpty()) {
      GraphNode tempNode = queue.remove(0);
      tempNode.isVisited = true;
      System.out.print(tempNode.name + " ");
      ArrayList<GraphNode> neighbours = getNeighbours(tempNode);

      for (GraphNode gn : neighbours) {
        if (!gn.isVisited) {
          queue.add(gn);
          gn.isVisited = true;
        }
      }
    }
  }

  public void bfs() {
    for (GraphNode node : nodeList) {
      if (!node.isVisited) {
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
      currentNode.isVisited = true;
      System.out.print(currentNode.name + " ");
      ArrayList<GraphNode> neighbours = getNeighbours(currentNode);

      for (GraphNode gn : neighbours) {
        if (!gn.isVisited) {
          gn.isVisited = true;
          stack.push(gn);
        }
      }
    }
  }

  public void dfs() {
    for (GraphNode node : nodeList) {
      if (!node.isVisited) {
        dfsHelper(node);
      }
    }
    System.out.println();
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
};
