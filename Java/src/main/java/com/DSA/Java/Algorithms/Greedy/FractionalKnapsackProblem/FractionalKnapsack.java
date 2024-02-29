package com.DSA.Java.Algorithms.Greedy.FractionalKnapsackProblem;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

// Test Cases
// FractionalKnapsack fKnapsack = new FractionalKnapsack();
// fKnapsack.addItem(1, 100, 20);
// fKnapsack.addItem(2, 120, 30);
// fKnapsack.addItem(3, 60, 10);
// int capacity = 50;
// fKnapsack.knapSack(capacity);

public class FractionalKnapsack {
  private ArrayList<KnapsackItem> items;

  public FractionalKnapsack() {
    this.items = new ArrayList<>();
  }

  public void addItem(int index, int value, int weight) {
    items.add(new KnapsackItem(index, value, weight));
  }

  public void knapSack(int capacity) {
    Comparator<KnapsackItem> comparator = new Comparator<KnapsackItem>() {
      @Override
      public int compare(KnapsackItem arg0, KnapsackItem arg1) {
        if (arg1.getRatio() > arg0.getRatio()) return 1;
        else return -1;
      }
    };

    Collections.sort(items, comparator);
    int usedCapacity = 0;
    double totalValue = 0;

    for (KnapsackItem item : items) {
      if (usedCapacity + item.getWeight() <= capacity) {
        usedCapacity += item.getWeight();
        System.out.println("Taken: " + item);
        totalValue += item.getValue();
      } else {
        int usedWeight = capacity - usedCapacity;
        double value = item.getRatio() * usedWeight;
        System.out.println("Taken: Item index = " + item.getIndex() + ", Obtained value = " + value +
            ", Used weight = " + usedWeight + ", Ratio = " + item.getRatio());
        usedCapacity += usedWeight;
        totalValue += value;
      }

      if (usedCapacity == capacity) break;
    }

    System.out.println("\nTotal value obtained : " + totalValue);
  }
}
