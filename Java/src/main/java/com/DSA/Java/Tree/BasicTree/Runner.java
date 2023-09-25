package com.DSA.Java.Tree.BasicTree;

public class Runner {
   public static void main(String[] args) {
      TreeNode drinks = new TreeNode("Drinks");
      TreeNode hot = new TreeNode("Hot");
      TreeNode cold = new TreeNode("Cold");
      TreeNode tea = new TreeNode("Tea");
      TreeNode coffee = new TreeNode("Coffee");
      TreeNode fanta = new TreeNode("Fanta");
      TreeNode pepsi = new TreeNode("Pepsi");

      drinks.addChild(hot);
      drinks.addChild(cold);

      hot.addChild(tea);
      hot.addChild(coffee);
      
      cold.addChild(fanta);
      cold.addChild(pepsi);
      System.out.println(drinks.print(0));
   }
}
