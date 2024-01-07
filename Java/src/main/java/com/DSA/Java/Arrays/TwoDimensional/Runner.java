package com.DSA.Java.Arrays.TwoDimensional;

public class Runner {
    public static void main(String[] args) {
        TwoDimensionalArray tda = new TwoDimensionalArray(3, 3);
        tda.insert(0, 0, 10);
        tda.insert(0, 1, 20);
        tda.insert(1, 0, 30);
        tda.insert(2, 0, 40);

        tda.traverse();
        tda.delete(0, 0);
        tda.traverse();
    }
}
