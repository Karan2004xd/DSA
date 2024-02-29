package com.DSA.Java.Algorithms.Greedy.FractionalKnapsackProblem;

public class KnapsackItem {
  private int index;
  private int value;
  private int weight;
  private double ratio;

  public KnapsackItem(int index, int value, int weight) {
    this.index = index;
    this.value = value;
    this.weight = weight;
    ratio = value * 1.0 / weight;
  }

  public int getIndex() {
    return index;
  }
  public double getRatio() {
    return ratio;
  }
  public int getValue() {
    return value;
  }
  public int getWeight() {
    return weight;
  }

  public void setIndex(int index) {
    this.index = index;
  }
  public void setValue(int value) {
    this.value = value;
  }
  public void setWeight(int weight) {
    this.weight = weight;
  }
  public void setRatio(double ratio) {
    this.ratio = ratio;
  }

  @Override
  public String toString() {
    return "Item index : " + index + ", value = " + value + ", weight = " + weight + ", ratio = " + ratio;
  }
}
