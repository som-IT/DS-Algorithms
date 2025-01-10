class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

node1 = Node(10)
node2 = Node(20)
node3 = Node(30)

# linking nodes

node1.next = node2
node2.next = node3

head = node1

# traversing
current = head

while current:
    print(f"Node Data: {current.data}")
    current = current.next