#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;     // Data part of the node
    Node* link;   // Pointer to the next node
};

// Function to create a linked list
Node* create(int n) {
    Node* first = nullptr; // Pointer to the first node
    Node* cur = nullptr;   // Pointer to traverse and create nodes

    for (int i = 1; i <= n; i++) {
        // Create a new node
        Node* newNode = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> newNode->data; // Read data for the new node
        newNode->link = nullptr;

        if (i == 1) {
            // For the first node, set it as the head
            first = newNode;
            cur = first;
        } else {
            // Link the current node to the new node
            cur->link = newNode;
            cur = cur->link; // Move to the newly created node
        }
    }
    return first; // Return the head of the linked list
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node* head = create(n); // Create a linked list
    cout << "The linked list is: ";
    display(head);          // Display the linked list

    return 0;
}
