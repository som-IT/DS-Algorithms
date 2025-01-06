class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

node1 = Node(10)
node2 = Node(20)
node3 = Node(30)
print(f"Node1 Data: {node1.data}, Node1 next: {node1.next}")
print(f"Node2 Data: {node2.data}, Node2 next: {node2.next}")
print(f"Node3 Data: {node3.data}, Node3 next: {node3.next}")