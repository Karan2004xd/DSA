from Node import Node


class DoublyCircularLL:
    def __init__(self):
        self.head = self.tail = Node()
        self.size = 0

    def create_list(self, value):
        new_node = Node()
        new_node.value = value
        new_node.next = new_node
        new_node.prev = new_node
        self.head = self.tail = new_node
        self.size = 1

    def traverse(self):
        if self.size <= 0:
            print("The list is empty")
            return

        temp_node = self.head
        for i in range(self.size):
            print(temp_node.value, end="")
            if i < self.size - 1:
                print(" -> ", end="")
            temp_node = temp_node.next
        print()

    def insert_value(self, value, index):
        if self.size == 0:
            self.create_list(value)
        else:
            new_node = Node()
            new_node.value = value
            if index <= 0:
                new_node.next = self.head
                new_node.prev = self.tail
                self.head.prev = new_node
                self.head = new_node
                self.tail.next = self.head
            elif index >= self.size - 1:
                new_node.next = self.head
                new_node.prev = self.tail
                self.tail.next = new_node
                self.tail = new_node
                self.head.prev = self.tail
            else:
                temp_node = self.head
                for i in range(index - 1):
                    temp_node = temp_node.next
                new_node.next = temp_node.next
                new_node.prev = temp_node

                temp_node.next.prev = new_node
                temp_node.next = new_node
            self.size += 1

    def search_value(self, value):
        if self.size == 0:
            print("The list is empty")
        else:
            temp_node = self.head
            for i in range(self.size):
                if temp_node.value == value:
                    return i
                temp_node = temp_node.next
            print("The value {} was not found in the list".format(value))
        return -1

    def delete_value(self, value):
        index = self.search_value(value)
        if index != -1:
            if index <= 0:
                self.head = self.head.next
                self.tail.next = self.head
                self.head.prev = self.tail
            elif index >= self.size - 1:
                self.tail = self.tail.prev
                self.tail.next = self.head
                self.head.prev = self.tail
            else:
                temp_node = self.head
                for i in range(index - 1):
                    temp_node = temp_node.next
                temp_node.next.prev = temp_node
                temp_node.next = temp_node.next.next
            self.size -= 1

    def delete_list(self):
        temp_node = self.head
        for i in range(self.size):
            temp_node.prev = None
        self.head = self.tail = None
        self.size = 0


list = DoublyCircularLL()
list.insert_value(10, 5)
list.insert_value(20, 5)
list.insert_value(30, 5)
list.insert_value(40, 1)
list.insert_value(50, 1)
list.traverse()

list.delete_value(40)
list.traverse()

list.delete_list()
list.traverse()
