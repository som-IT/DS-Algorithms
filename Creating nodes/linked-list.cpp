#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;  // No connection yet
    }
};

int main() {
    Node* node1 = new Node(10);
    cout << "Node data: " << node1->data << ", Next node: " << node1->next << endl;
    return 0;
}
