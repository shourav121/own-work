#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree {
private:
    TreeNode* root;

    TreeNode* insertRecursive(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->data) {
            node->left = insertRecursive(node->left, value);
        } else if (value > node->data) {
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    bool searchRecursive(TreeNode* node, int value) {
        if (node == nullptr) {
            return false;
        }

        if (value == node->data) {
            return true;
        } else if (value < node->data) {
            return searchRecursive(node->left, value);
        } else {
            return searchRecursive(node->right, value);
        }
    }

public:
    BinarySearchTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    bool search(int value) {
        return searchRecursive(root, value);
    }
};

int main() {
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    int searchValue = 40;
    if (bst.search(searchValue)) {
        std::cout << searchValue << " found in the BST." << std::endl;
    } else {
        std::cout << searchValue << " not found in the BST." << std::endl;
    }

    // Inserting a new node with value 45
    bst.insert(45);

    searchValue = 45;
    if (bst.search(searchValue)) {
        std::cout << searchValue << " found in the BST." << std::endl;
    } else {
        std::cout << searchValue << " not found in the BST." << std::endl;
    }

    return 0;
}
