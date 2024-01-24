class Stack:
    def __init__(self):
        self.stack = []

    def is_empty(self):
        return len(self.stack) <= 0

    def push(self, value):
        self.stack.insert(0, value)

    def peek(self):
        if self.is_empty() is False:
            return self.stack[0]
        else:
            print("The stack is empty")

    def pop(self):
        if self.is_empty() is False:
            value = self.stack[0]
            self.stack.pop(0)
            return value
        else:
            print("The stack is empty")

    def delete_stack(self):
        self.stack.clear()

stack = Stack()
stack.push(5)
stack.push(10)
stack.push(15)
stack.push(25)
print(stack.peek())

print(stack.pop())
print(stack.peek())
