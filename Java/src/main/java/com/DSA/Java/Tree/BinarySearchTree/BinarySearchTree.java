package com.DSA.Java.Tree.BinarySearchTree;

import java.util.LinkedList;
import java.util.Queue;

public class BinarySearchTree {
    public BinaryNode root;

    public BinarySearchTree() {
        root = null;
    }

    private BinaryNode insertElement(BinaryNode currentValue, int value) {
        if (currentValue == null) {
            BinaryNode newNode = new BinaryNode();
            newNode.value = value;
            return newNode;
        } else if (value <= currentValue.value) {
            currentValue.left = insertElement(currentValue.left, value);
            return currentValue;
        } else {
            currentValue.right = insertElement(currentValue.right, value);
            return currentValue;
        }
    }
public void insertElement(int value) {
        root = insertElement(root, value);
    }

    public void preOrderTraversal(BinaryNode node) {
        if (node == null) {
            return;
        }
        System.out.print(node.value + " ");
        preOrderTraversal(node.left);
        preOrderTraversal(node.right);
    }

    public void inOrderTraversal(BinaryNode node) {
        if (node == null) {
            return;
        }
        inOrderTraversal(node.left);
        System.out.print(node.value + " ");
        inOrderTraversal(node.right);
    }

    public void postOrderTraversal(BinaryNode node) {
        if (node == null) {
            return ;
        }
        postOrderTraversal(node.left);
        postOrderTraversal(node.right);
        System.out.print(node.value + " ");
    }

    public void levelOrderTraversal() {
        Queue<BinaryNode> queue = new LinkedList<>();
        queue.add(root);
        while (!queue.isEmpty()) {
            BinaryNode tempNode = queue.remove();
            System.out.print(tempNode.value + " ");
            if (tempNode.left != null) {
                queue.add(tempNode.left);
            }
            if (tempNode.right != null) {
                queue.add(tempNode.right);
            }
        }
        System.out.println();
    }

    public BinaryNode searchElement(BinaryNode node, int value) {
        if (node == null) {
            return null;
        } else if (value == node.value) {
            return node;
        } else if (value <= node.value) {
            return searchElement(node.left, value);
        } else {
            return searchElement(node.right, value);
        }
    }

    public boolean searchElement(int value) {
        System.out.println();
        return searchElement(root, value) != null;
    }

    private BinaryNode minimumNode(BinaryNode root) {
        if (root.left == null) {
            return root;
        }
        return minimumNode(root.left);
    }

    private BinaryNode deleteElement(BinaryNode node, int value) {
        if (node == null) {
            return null;
        } else if (value < node.value) {
            node.left = deleteElement(node.left, value);
        } else if (value > node.value) {
            node.right = deleteElement(node.right, value);
        } else {
            if (node.left != null && node.right != null) {
                BinaryNode minNode = minimumNode(node.right);
                node.value = minNode.value;
                node.right = deleteElement(node.right, minNode.value);
            } else if (node.right != null) {
                node = node.right;
            } else if (node.left != null) {
                node = node.left;
            } else {
                node = null;
            }
        }
        return node;
    }

    public void deleteElement(int value) {
        if (searchElement(value)) {
            root = deleteElement(root, value);
        } else {
            System.out.println("The Value was not found in the tree");
        }
    }

    public void deleteTree() {
        root = null;
    }
}
