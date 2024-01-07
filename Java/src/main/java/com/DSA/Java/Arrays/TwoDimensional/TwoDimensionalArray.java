package com.DSA.Java.Arrays.TwoDimensional;

public class TwoDimensionalArray {
    int[][] arr = null;
    
    public TwoDimensionalArray(int rowLength, int columnLength) {
        arr = new int[rowLength][columnLength];
        for (int i = 0; i < rowLength; i++) {
            for (int j = 0; j < columnLength; j++) {
                arr[i][j] = Integer.MIN_VALUE;
            }
        }
    }

    public void traverse() {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    public void insert(int row, int column, int value) {
        try {
            if (arr[row][column] == Integer.MIN_VALUE) {
                arr[row][column] = value;
                System.out.println("Successfully inserted!");
            } else {
                System.out.println("The given index is already occupied");
            }
        } catch (IndexOutOfBoundsException e) {
            System.out.println("Invalid index for 2D array");
        }
    }

    public void search(int value) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (arr[i][j] == value) {
                    System.out.println("arr[" + i + "][" + j + "] = " + value); 
                    return;
                }
            }
        }
        System.out.println(value + " was not found!");
    }

    public void delete(int row, int column) {
        try {
            arr[row][column] = Integer.MIN_VALUE;
            System.out.println("Deleted Successfully");

        } catch (IndexOutOfBoundsException e) {
            System.out.println("Invalid index for 2D array");
        }
    }
}
