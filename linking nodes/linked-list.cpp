#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }

    ~Node()
    {
        cout << "Node data deleted " << data << "Freed memory" << endl;
    }
};

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);

    node1->next = node2;
    node2->next = node3;

    Node *head = node1;

    Node *current = head;
    while (current != nullptr)
    {
        cout << "Node Data: " << current->data << endl;
        current = current->next;
    }

    // freeing memory
    current = head;
    while (current)
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
    return 0;
}
