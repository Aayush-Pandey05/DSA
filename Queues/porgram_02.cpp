#include <iostream>

using namespace std;

// Node structure for BST using Doubly Linked List
class Node{
    public:
    Node* right;
    Node* left;
    Node* parent;
    int data;
    
    Node(int data){
        this->data = data;
        this->parent = NULL;
        this->right = NULL;
        this->left = NULL;
    }
};

// Class for Binary Search Tree
class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    // Insert a node
    void insert(int val) {
        root = insertNode(root, nullptr, val);
    }

    // Search for a value
    bool search(int val) {
        return searchNode(root, val) != nullptr;
    }

    // Inorder Traversal (Left, Root, Right)
    void inorder() {
        inorderTraversal(root);
        cout << endl;
    }

    // Preorder Traversal (Root, Left, Right)
    void preorder() {
        preorderTraversal(root);
        cout << endl;
    }

    // Postorder Traversal (Left, Right, Root)
    void postorder() {
        postorderTraversal(root);
        cout << endl;
    }

private:
    // Helper function for insertion
    Node* insertNode(Node* node, Node* parent, int val) {
        if (node == nullptr) {
            Node* newNode = new Node(val);
            newNode->parent = parent;
            return newNode;
        }
        if (val < node->data)
            node->left = insertNode(node->left, node, val);
        else if (val > node->data)
            node->right = insertNode(node->right, node, val);

        return node;
    }

    // Helper function for searching
    Node* searchNode(Node* node, int val) {
        if (node == nullptr || node->data == val)
            return node;
        if (val < node->data)
            return searchNode(node->left, val);
        return searchNode(node->right, val);
    }

    // Helper function for inorder traversal (Left, Root, Right)
    void inorderTraversal(Node* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

    // Helper function for preorder traversal (Root, Left, Right)
    void preorderTraversal(Node* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }

    // Helper function for postorder traversal (Left, Right, Root)
    void postorderTraversal(Node* node) {
        if (node != nullptr) {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->data << " ";
        }
    }
};

// Driver code
int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder Traversal: ";
    tree.inorder();

    cout << "Preorder Traversal: ";
    tree.preorder();

    cout << "Postorder Traversal: ";
    tree.postorder();

    int key = 40;
    if (tree.search(key))
        cout << key << " found in the BST." << endl;
    else
        cout << key << " not found in the BST." << endl;

    return 0;
}
