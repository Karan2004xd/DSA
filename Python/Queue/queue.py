class Queue:
    def __init__(self):
        self.queue = []

    def is_empty(self):
        if (len(self.queue) <= 0):
            print("The Queue is empty")
            return True
        return False

    def push(self, value):
        self.queue.append(value)

    def peek(self):
        if self.is_empty() is False:
            return self.queue[0]

    def pop(self):
        if self.is_empty() is False:
            value = self.queue[0]
            self.queue.pop(0)
            return value

    def delete_queue(self):
        self.queue.clear()

queue = Queue()
queue.push(5)
queue.push(10)
queue.push(15)
queue.push(20)

print(queue.peek())
print(queue.pop())
print(queue.peek())
