#include <iostream>

using namespace  std;
class Node{
public:
    int data;
    Node* nextdata;
    Node* priviousdata;

};

void Insert_beginig( Node** head,Node* first){
    Node * newnode;
    newnode= new Node();
    newnode->data = 100;
    newnode->nextdata = first;
    *head  = newnode;
}
void Insert_end( Node** head){
    Node * newnode;
    newnode= new Node();
    newnode->data = 100;
    newnode->nextdata = NULL;
    Node* current = *head;
    while (current->nextdata !=NULL){
        current = current->nextdata;
    }
    current->nextdata = newnode;
}
void Insert_mid( Node** head,Node* mid){
    Node * newnode;
    newnode= new Node();
    newnode->data = 100;
    newnode->nextdata = NULL;
    Node* current = *head;
    while (current !=mid){
        current = current->nextdata;
    }
    newnode->nextdata = mid->nextdata;
    current->nextdata = newnode;
}
void delete_beginning( Node** head){
    Node* current = *head;
    *head = current->nextdata;

}
void delete_end( Node** head){
    Node* current = *head;
    while (current->nextdata->nextdata != NULL){
        current = current->nextdata;
    }
    current->nextdata = NULL;
}
void delete_mid( Node** head, Node* mid){
    Node* current = *head;
    Node* next;
    next = new Node;
    while (current != mid){
        next = current;
        current = current->nextdata;
    }
    next->nextdata = current->nextdata;
}

int main(){
    Node* start;
    Node* first ;
    Node* second ;
    Node* third ;
    Node* fourth ;

    first = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    first->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    first->nextdata = second;
    second->nextdata = third;
    third->nextdata = fourth;
    fourth->nextdata = NULL;

    start = first;
//    Insert_beginig(&start,first);
//    Insert_mid( &start,second);
//    Insert_end(&start);

    cout<< "\nFarword: "<<"\t";

    while(start!= NULL){
        cout << start->data<<"\t";
        start = start->nextdata;
    }
    start = first;
//    delete_beginning(&start);
//    delete_mid(&start,third);
//    delete_end(&start);

    cout<< "\nFarword: "<<"\t";
    while(start!= NULL){
        cout << start->data<<"\t";
        start = start->nextdata;
    }
    return  0;
}