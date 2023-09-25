package com.DSA.Java.Tree.BasicTree;

import java.util.ArrayList;

public class TreeNode {
   private ArrayList<TreeNode> treeNodes;
   private String data;

   public TreeNode(String data) {
      this.data = data;
      this.treeNodes = new ArrayList<TreeNode>();
   }

   public void addChild(TreeNode node) {
      this.treeNodes.add(node);
   }

   public String print(int level) {
      String result;
      result = " ".repeat(level) + this.data + "\n";
      for (TreeNode node : this.treeNodes) {
         result += node.print(level + 1);
      }
      return result;
   }
}
