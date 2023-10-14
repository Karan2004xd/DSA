#include <iostream>
#include <string>
#include <vector>

struct Tree {
   std::vector<Tree> treeNodes;
   std::string data;

   Tree(std::string data);
   void addChild(Tree node);
   std::string printChild(int level);
};

Tree::Tree(std::string data) {
   this->data = data;
}

void Tree::addChild(Tree node) {
   treeNodes.push_back(node);
}

std::string Tree::printChild(int level) {
   std::string result;
   for (int i = 0; i < level; i++) {
      result += " ";
   }
   result += this->data + "\n";
   for (Tree node : treeNodes) {
      result += node.printChild(level + 1);
   }
   return result;
}

int main() {
   Tree drinks("Drinks");
   Tree hot("Hot");
   Tree cold("Cold");

   Tree tea("Tea");
   Tree coffee("Coffee");
   
   Tree cold_drink("Cold Drink");
   Tree fanta("Fanta");

   drinks.addChild(hot);
   drinks.addChild(cold);

   hot.addChild(tea);
   hot.addChild(coffee);
   
   cold.addChild(cold_drink);
   cold.addChild(fanta);
   std::cout << cold.printChild(2) << std::endl;
   return 0;
}
