package com.DSA.Java.Graphs.DisjointSet;

import java.util.ArrayList;

public class WeightedNode {
    public String name;
    public ArrayList<WeightedNode> neighbours = new ArrayList<>();
    public boolean isVisited = false;
    
    public WeightedNode parent;
    public int distance;
    public int index;
    public DisJointSetImpl set;

    public WeightedNode(String name) {
      this.name = name;
      this.distance = Integer.MAX_VALUE;
    }

    public WeightedNode(String name, int index) {
        this.name = name;
        this.index = index;
        this.distance = Integer.MAX_VALUE;
    }

}
