class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def add_to_end(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = new_node
    
    def traverse(self):
        current = self.head
        while current:
            print(current.data)
            current = current.next
    

list = LinkedList()

list.add_to_end(10)
list.add_to_end(20)
list.add_to_end(30)
list.traverse()