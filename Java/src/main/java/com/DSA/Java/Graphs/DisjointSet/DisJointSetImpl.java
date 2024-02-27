package com.DSA.Java.Graphs.DisjointSet;
import java.util.ArrayList;

// Test Cases
// DisJointSetImpl newSet = new DisJointSetImpl();

// ArrayList<WeightedNode> nodeList = new ArrayList<>();
// nodeList.add(new WeightedNode("A"));
// nodeList.add(new WeightedNode("B"));
// nodeList.add(new WeightedNode("C"));
// nodeList.add(new WeightedNode("D"));

// newSet.makeSet(nodeList);
// WeightedNode firstNode = nodeList.get(0);
// WeightedNode secondNode = nodeList.get(1);
// DisJointSetImpl output = newSet.findSet(secondNode);
// output.printAllNodedOfSet();

// output = newSet.union(firstNode, secondNode);
// output.printAllNodedOfSet();

public class DisJointSetImpl {
  private ArrayList<WeightedNode> nodeList;

  public DisJointSetImpl() {
    this.nodeList = new ArrayList<>();
  }

  public void makeSet(ArrayList<WeightedNode> nodeList) {
    for (WeightedNode node : nodeList) {
      DisJointSetImpl set = new DisJointSetImpl();
      set.nodeList.add(node);
      node.set = set;
    }
  }

  public DisJointSetImpl findSet(WeightedNode node) {
    return node.set;
  }

  public DisJointSetImpl union(WeightedNode node1, WeightedNode node2) {
    if (node1.set.equals(node2.set)) {
      return null;
    } else {
      DisJointSetImpl set1 = node1.set;
      DisJointSetImpl set2 = node2.set;

      if (set1.nodeList.size() > set2.nodeList.size()) {
        ArrayList<WeightedNode> nodeSet2 = set2.nodeList;
        for (WeightedNode node : nodeSet2) {
          node.set = set1;
          set1.nodeList.add(node);
        }
        return set1;
      } else {
        ArrayList<WeightedNode> nodeSet1 = set1.nodeList;
        for (WeightedNode node : nodeSet1) {
          node.set = set2;
          set2.nodeList.add(node);
        }
        return set2;
      }
    }
  }

  public void printAllNodedOfSet() {
    System.out.print("Printing all nodes of the set: ");
    for (WeightedNode node : nodeList) {
      System.out.print(node.name + " ");
    }
    System.out.println();
  }
}
