from Node import Node


class DoublyLL:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def create_ll(self, value):
        new_node = Node()
        new_node.next = None
        new_node.prev = None
        new_node.value = value
        self.head = self.tail = new_node
        self.size = 1

    def insert_value(self, value, index):
        if (self.size <= 0):
            self.create_ll(value)
        else:
            new_node = Node()
            new_node.value = value
            if (index <= 0):
                new_node.next = self.head
                new_node.prev = None
                self.head.prev = new_node
                self.head = new_node
            elif (index >= self.size - 1):
                new_node.prev = self.tail
                new_node.next = None
                self.tail.next = new_node
                self.tail = new_node
            else:
                temp_node = self.head
                for i in range(index - 1):
                    temp_node = temp_node.next
                new_node.next = temp_node.next
                new_node.prev = temp_node
                temp_node.next.prev = new_node
                temp_node.next = new_node
            self.size += 1

    def traverse(self):
        if (self.size <= 0):
            print("The list is empty")
        else:
            temp_node = self.head
            for i in range(self.size):
                print(temp_node.value, end="")
                if (i < self.size - 1):
                    print(" -> ", end="")
                temp_node = temp_node.next
            print()

    def delete_value(self, value):
        index = self.search_value(value)
        if (index != -1):
            if (index <= 0):
                self.head = self.head.next
                self.head.prev = None
            elif (index >= self.size - 1):
                self.tail = self.tail.prev
                self.tail.next = None
            else:
                temp_node = self.head
                for i in range(index - 1):
                    temp_node = temp_node.next
                temp_node.next.prev = temp_node
                temp_node.next = temp_node.next.next
            self.size -= 1

    def search_value(self, value):
        if (self.size <= 0):
            print("The list is empty")
        else:
            temp_node = self.head
            for i in range(self.size):
                if (temp_node.value == value):
                    return i
                temp_node = temp_node.next
            print("The value was not found in the list")
        return -1

    def delete_ll(self):
        temp_node = self.head
        for i in range(self.size):
            temp_node.prev = None
        self.head = self.tail = None
        self.size = 0


dll = DoublyLL()
dll.insert_value(10, 5)
dll.insert_value(20, 5)
dll.insert_value(30, 5)
dll.insert_value(40, 1)
dll.insert_value(50, 1)
dll.traverse()

dll.delete_value(50)
dll.traverse()

dll.delete_ll()
dll.traverse()
