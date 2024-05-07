#include <iostream>
using namespace  std;

class Node{
public:
    Node(int value){
        this->value = value;
    }


    int value;
    Node* left ;
    Node* right;
};
void search(int data[],int root, Node* node){
    for(int i = 0; i< int(sizeof(data)/sizeof(data[0])); i++){
        if(data[i] < node->value){
            node->left->value=data[i];
            node = node->left;
        }
        else{
            node->right->value=data[i];
            node = node->right;
        }
    }
}
int main(){
    int data[]={15,75,8,35,79,84,37,80,105,55,42,95,155,57,130,18};
    int root_int =65;
    Node* root = new Node(root_int);
    Node* node = root;

    return  0;
}