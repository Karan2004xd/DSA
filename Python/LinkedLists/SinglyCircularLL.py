from Node import Node


class SinglyCircularLL:
    def __init__(self):
        self.head = self.tail = None
        self.size = 0

    def create_ll(self, value):
        new_node = Node()
        new_node.value = value
        new_node.next = new_node
        self.head = self.tail = new_node
        self.size = 1

    def insert_value(self, value, index):
        if (self.size == 0):
            self.create_ll(value)
        else:
            new_node = Node()
            new_node.value = value
            if (index <= 0):
                new_node.next = self.head
                self.head = new_node
                self.tail.next = self.head
            elif (index >= self.size - 1):
                new_node.next = self.head
                self.tail.next = new_node
                self.tail = new_node
            else:
                temp_node = self.head
                for i in range(index - 1):
                    temp_node = temp_node.next
                new_node.next = temp_node.next
                temp_node.next = new_node
            self.size += 1

    def traverse(self):
        if (self.size == 0):
            print("The Linked List is empty")
        else:
            temp_node = self.head
            for i in range(self.size):
                print(temp_node.value, end="")
                temp_node = temp_node.next
                if (i < self.size - 1):
                    print(" -> ", end="")
            print()

    def search_value(self, value):
        if (self.size == 0):
            print("The Linked list is empty")
        else:
            temp_node = self.head
            for i in range(self.size):
                if (temp_node.value == value):
                    return i
                temp_node = temp_node.next
            print("The element was not found in the list")
        return -1

    def delete_value(self, value):
        index = self.search_value(value)
        if (index != -1):
            if (index <= 0):
                self.head = self.head.next
                self.tail.next = self.head
            elif (index >= self.size - 1):
                temp_node = self.head
                for i in range(self.size - 1):
                    temp_node = temp_node.next
                temp_node.next = self.head
                self.tail = temp_node
            else:
                temp_node = self.head
                for i in range(index - 1):
                    temp_node = temp_node.next
                temp_node.next = temp_node.next.next
            self.size -= 1

    def delete_ll(self):
        self.head = self.tail = None
        self.size = 0


ll = SinglyCircularLL()
ll.insert_value(10, 5)
ll.insert_value(15, 5)
ll.insert_value(20, 5)
ll.insert_value(25, 1)
ll.insert_value(30, 1)

ll.traverse()
ll.delete_value(20)
ll.traverse()

ll.delete_ll()
ll.traverse()
