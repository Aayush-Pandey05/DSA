#include<iostream>
using namespace std;

class Node {
    public:
        Node* left;
        Node* right;
        int data;
        Node(int data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* insertintoBST(Node*& root, int d) {
    // Base case
    if (root == NULL) {
        root = new Node(d);
        return root;
    }

    // If the data is larger than the root node
    if (d > root->data) {
        // Insert in the right subtree
        root->right = insertintoBST(root->right, d);
    } 
    // If the data is smaller than the root node
    else {
        // Insert in the left subtree
        root->left = insertintoBST(root->left, d);
    }
    return root;
}

void takeInput(Node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        insertintoBST(root, data);
        cin >> data;
    }
}

// Preorder Traversal: Root -> Left -> Right
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " "; // Visit root
    preorder(root->left);      // Traverse left subtree
    preorder(root->right);     // Traverse right subtree
}

int main() {
    Node* root = NULL;

    cout << "Enter data to create BST (end with -1): ";
    takeInput(root);

    cout << "Preorder traversal of the BST: ";
    preorder(root);

    return 0;
}
