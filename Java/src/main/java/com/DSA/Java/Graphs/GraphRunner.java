package com.DSA.Java.Graphs;

import java.util.ArrayList;

import com.DSA.Java.Graphs.DisjointSet.*;

public class GraphRunner {
  public static void main(String[] args) {
    DisJointSetImpl newSet = new DisJointSetImpl();

    ArrayList<WeightedNode> nodeList = new ArrayList<>();
    nodeList.add(new WeightedNode("A"));
    nodeList.add(new WeightedNode("B"));
    nodeList.add(new WeightedNode("C"));
    nodeList.add(new WeightedNode("D"));

    newSet.makeSet(nodeList);
    WeightedNode firstNode = nodeList.get(0);
    WeightedNode secondNode = nodeList.get(1);
    DisJointSetImpl output = newSet.findSet(secondNode);
    output.printAllNodedOfSet();

    output = newSet.union(firstNode, secondNode);
    output.printAllNodedOfSet();
  }
}
