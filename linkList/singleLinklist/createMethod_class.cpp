#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int data;     // Data part of the node
    Node* link;   // Pointer to the next node

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        link = nullptr;
    }
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head; // Pointer to the first node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() {
        head = nullptr;
    }

    // Function to create the linked list
    void create(int n) {
        Node* cur = nullptr; // Pointer to traverse and create nodes

        for (int i = 1; i <= n; i++) {
            int value;
            cout << "Enter data for node " << i << ": ";
            cin >> value;

            Node* newNode = new Node(value); // Create a new node

            if (i == 1) {
                // For the first node, set it as the head
                head = newNode;
                cur = head;
            } else {
                // Link the current node to the new node
                cur->link = newNode;
                cur = cur->link; // Move to the newly created node
            }
        }
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;

        if (head == nullptr) {
            cout << "The linked list is empty." << endl;
            return;
        }

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->link;
        }
        cout << "NULL" << endl;
    }

    // Destructor to clean up memory
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->link;
            delete temp;
            temp = next;
        }
        cout << "Linked list memory has been freed." << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    LinkedList list; // Create a LinkedList object
    list.create(n);  // Create the linked list
    cout << "The linked list is: ";
    list.display();  // Display the linked list

    return 0;
}
