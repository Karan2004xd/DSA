package com.DSA.Java.Arrays.Project;

import java.util.Arrays;
import java.util.Scanner;

public class Demo {
    public static void main(String[] args) {
        int[][] matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
        // int daysAboveAvg = 0, sum = 0;

        // Scanner scanner = new Scanner(System.in);
        
        // System.out.print("How many days temperature ? ");
        // arr = new int[scanner.nextInt()];

        // for (int i = 0; i < arr.length; i++) {
        //     System.out.print("Days " + (i + 1) + "'s high temp: ");
        //     arr[i] = scanner.nextInt();
        //     sum += arr[i];
        // }

        // double average = sum / arr.length;
        // System.out.println("Average = " + average);
        
        // for (int i = 0; i < arr.length; i++) {
        //     if (arr[i] > average) {
        //         daysAboveAvg++;
        //     }
        // }
        
        // System.out.println(daysAboveAvg + " days above average temperature");
        // scanner.close();
        
        System.out.println(rotateMatrix(matrix).length / 2);
    }
    
    static int[][] rotateMatrix(int[][] arr) {
        return arr;
    }
}
