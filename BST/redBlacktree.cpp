#include <iostream>
using namespace std;

// Enumeration for node color
enum Color { RED, BLACK };

// Node structure
struct Node {
    int data;
    Color color;
    Node* left;
    Node* right;
    Node* parent;

    // Constructor
    Node(int data) {
        this->data = data;
        left = right = parent = nullptr;
        color = RED; // New nodes are initially red
    }
};

class RedBlackTree {
private:
    Node* root;

    // Rotate left
    void rotateLeft(Node*& root, Node*& node) {
        Node* nodeRight = node->right;
        node->right = nodeRight->left;

        if (node->right != nullptr)
            node->right->parent = node;

        nodeRight->parent = node->parent;

        if (node->parent == nullptr)
            root = nodeRight;
        else if (node == node->parent->left)
            node->parent->left = nodeRight;
        else
            node->parent->right = nodeRight;

        nodeRight->left = node;
        node->parent = nodeRight;
    }

    // Rotate right
    void rotateRight(Node*& root, Node*& node) {
        Node* nodeLeft = node->left;
        node->left = nodeLeft->right;

        if (node->left != nullptr)
            node->left->parent = node;

        nodeLeft->parent = node->parent;

        if (node->parent == nullptr)
            root = nodeLeft;
        else if (node == node->parent->left)
            node->parent->left = nodeLeft;
        else
            node->parent->right = nodeLeft;

        nodeLeft->right = node;
        node->parent = nodeLeft;
    }

    // Fix violations after insertion
    void fixViolation(Node*& root, Node*& node) {
        Node* parent = nullptr;
        Node* grandparent = nullptr;

        while (node != root && node->color == RED && node->parent->color == RED) {
            parent = node->parent;
            grandparent = parent->parent;

            // Parent is the left child of the grandparent
            if (parent == grandparent->left) {
                Node* uncle = grandparent->right;

                // Case 1: Uncle is red (recoloring)
                if (uncle != nullptr && uncle->color == RED) {
                    grandparent->color = RED;
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    node = grandparent;
                } else {
                    // Case 2: Node is the right child (left rotation needed)
                    if (node == parent->right) {
                        rotateLeft(root, parent);
                        node = parent;
                        parent = node->parent;
                    }

                    // Case 3: Node is the left child (right rotation needed)
                    rotateRight(root, grandparent);
                    swap(parent->color, grandparent->color);
                    node = parent;
                }
            } else { // Parent is the right child of the grandparent
                Node* uncle = grandparent->left;

                // Case 1: Uncle is red (recoloring)
                if (uncle != nullptr && uncle->color == RED) {
                    grandparent->color = RED;
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    node = grandparent;
                } else {
                    // Case 2: Node is the left child (right rotation needed)
                    if (node == parent->left) {
                        rotateRight(root, parent);
                        node = parent;
                        parent = node->parent;
                    }

                    // Case 3: Node is the right child (left rotation needed)
                    rotateLeft(root, grandparent);
                    swap(parent->color, grandparent->color);
                    node = parent;
                }
            }
        }
        root->color = BLACK;
    }

public:
    // Constructor
    RedBlackTree() { root = nullptr; }

    // Insert a new node
    void insert(const int& data) {
        Node* node = new Node(data);

        // Perform standard BST insertion
        Node* parent = nullptr;
        Node* current = root;

        while (current != nullptr) {
            parent = current;
            if (node->data < current->data)
                current = current->left;
            else
                current = current->right;
        }

        node->parent = parent;

        if (parent == nullptr)
            root = node;
        else if (node->data < parent->data)
            parent->left = node;
        else
            parent->right = node;

        // Fix red-black tree violations
        fixViolation(root, node);
    }

    // Inorder traversal
    void inorder() { inorderHelper(root); }

private:
    void inorderHelper(Node* root) {
        if (root == nullptr)
            return;

        inorderHelper(root->left);
        cout << root->data << " ";
        inorderHelper(root->right);
    }
};

int main() {
    RedBlackTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(15);
    tree.insert(25);

    cout << "Inorder traversal of the Red-Black Tree: ";
    tree.inorder();

    return 0;
}
