class BasicTree:
    def __init__(self, data: str) -> None:
        self.__data = data
        self.__treeNodes = []

    def addChild(self, node) -> None:
        if node not in self.__treeNodes:
            self.__treeNodes.append(node)

    def printTree(self, level: int) -> str:
        space, result = "", ""

        for _ in range(level):
            space += " "

        result += (space + self.__data + "\n")

        for node in self.__treeNodes:
            result += node.printTree(level + 1)

        return result

drinks = BasicTree("Drinks")

hotDrinks = BasicTree("Hot Drinks")
coffee = BasicTree("Coffee")
tea = BasicTree("Tea")

hotDrinks.addChild(coffee)
hotDrinks.addChild(tea)

coldDrinks = BasicTree("Cold Drinks")
fanta = BasicTree("Fanta")
shake = BasicTree("Shake")

coldDrinks.addChild(fanta)
coldDrinks.addChild(shake)

drinks.addChild(hotDrinks)
drinks.addChild(coldDrinks)

print(drinks.printTree(0))
