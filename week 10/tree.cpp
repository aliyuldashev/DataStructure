#include <iostream>
using namespace  std;

class Node{
public:
    Node(string value){
        this->value = value;
    }


    string value;
    Node* left ;
    Node* right;
};
void inorder(Node* node){
    if(node == nullptr){
        return ;
    }
    inorder(node->left);
    cout << node->value << " ";
    inorder(node->right);


}
void preorder(Node* node){
    if(node == nullptr){
        return ;
    }
    preorder(node->right);
    preorder(node->left);
    cout << node->value << " ";
}
void postorder(Node* node){
    if(node == nullptr){
        return ;
    }
    preorder(node->left);
    preorder(node->right);
    cout << node->value << " ";
}
Node settree( ){
    Node* root = new Node("J");
    root->left = new Node("F");
    root->left->left = new Node("D");
    root->left->left->left = new Node("C");


}

int main(){


    return 0;
}