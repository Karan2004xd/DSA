package com.DSA.Java.Arrays.OneDimensional;

public class SingleDimensionalArrays {
    int[] arr = null;

    public SingleDimensionalArrays(int arrLength) {
        arr = new int[arrLength];
        for (int i = 0; i < arrLength; i++) {
            arr[i] = Integer.MIN_VALUE;
        }
    }

    public void insert(int index, int value) {
        try {
            if (arr[index] == Integer.MIN_VALUE) {
                arr[index] = value;
                System.out.println("Successfully inserted!!");
            } else {
                System.out.println("Given index value is already occupied!");
            }
        } catch (IndexOutOfBoundsException e) {
            System.out.println("Invalid index value!");
        }
    }
    
    public void traversal() {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
    public void search(int value) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == value) {
                System.out.println("arr[" + i + "] = " + value);
                return;
            }
        }
        System.out.println("The value was not found!");
    }

    public void delete(int index) {
        try {
            arr[index] = Integer.MIN_VALUE;
            System.out.println("Successfully deleted!");
        
        } catch (IndexOutOfBoundsException e) {
            System.out.println("Invalid index value!");
        }
    }
}
