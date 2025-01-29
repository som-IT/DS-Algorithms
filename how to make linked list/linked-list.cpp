#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }

    ~Node() {
        cout << "Node data deleted: " << data << " Freed memory" << endl;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void addToEnd(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }

    void traverse() {
        Node* current = head;
        while (current) {
            cout << "Node Data: " << current->data << endl;
            current = current->next;
        }
    }

    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }
};


int main() {
    LinkedList list;
    list.addToEnd(10);
    list.addToEnd(20);
    list.addToEnd(30);
    list.traverse();
    return 0;
}
