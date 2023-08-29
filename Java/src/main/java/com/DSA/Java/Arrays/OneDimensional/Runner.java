package com.DSA.Java.Arrays.OneDimensional;

public class Runner {
    public static void main(String[] args) {
        SingleDimensionalArrays sda = new SingleDimensionalArrays(10);

        sda.insert(0, 0);
        sda.insert(1, 10);
        sda.insert(2, 20);
        
        sda.traversal();
        sda.delete(0);
        sda.traversal();
    }
}
