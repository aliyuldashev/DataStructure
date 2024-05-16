#include <iostream>
using namespace std;

class Node {
public:
    Node(string value) : value(value), left(nullptr), right(nullptr) {}

    string value;
    Node* left;
    Node* right;
};

void inorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    inorder(node->left);
    cout << node->value << " ";
    inorder(node->right);
}

void preorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    cout << node->value << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->value << " ";
}

Node* settree() {
    Node* root = new Node("J");
    root->left = new Node("F");
    root->left->left = new Node("D");
    root->left->left->left = new Node("C");
    root->left->left->right = new Node("E");
    root->left->right = new Node("G");
    root->left->right->right = new Node("I");
    root->right = new Node("K");
    root->right->right = new Node("L");
    return root;
}

int main() {
    Node* root = settree();
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
