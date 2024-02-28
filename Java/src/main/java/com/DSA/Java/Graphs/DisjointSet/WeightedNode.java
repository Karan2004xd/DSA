package com.DSA.Java.Graphs.DisjointSet;

import java.util.ArrayList;
import java.util.HashMap;

public class WeightedNode implements Comparable<WeightedNode> {
    public String name;
    public ArrayList<WeightedNode> neighbours = new ArrayList<>();
    public HashMap<WeightedNode, Integer> weightMap = new HashMap<>();
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

    @Override
    public String toString() {
        return name;
    }

    @Override
    public int compareTo(WeightedNode arg0) {
        return this.distance - arg0.distance;
    }
}
