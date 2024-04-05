#include <iostream>

using namespace  std;
class Node{
public:
    int data;
    Node* nextdata;
    Node* priviousdata;

};
int main(){
    Node* start;
    Node* first ;
    Node* second ;
    Node* third ;
    Node* fourth ;
    Node* five ;
    Node* six ;
    Node* seven ;
    Node* nine ;
    Node* ten ;


    first = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    five = new Node();
    six = new Node();
    seven = new Node();
    nine = new Node();
    ten = new Node();


    first->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;
    five->data = 5;
    six->data = 6;
    seven->data =7 ;
    nine->data = 8;
    ten->data = 9;

    first->nextdata = second;
    second->nextdata = third;
    third->nextdata = fourth;
    fourth->nextdata = five;
    five->nextdata = six;
    six->nextdata = seven;
    seven->nextdata =nine ;
    nine->nextdata = ten;
    ten->nextdata = NULL;

    first->priviousdata = NULL;
    second->priviousdata = first;
    third->priviousdata = second;
    fourth->priviousdata = third;
    five->priviousdata = fourth;
    six->priviousdata = five;
    seven->priviousdata =six ;
    nine->priviousdata = seven;
    ten->priviousdata = nine;

    start = ten;
    cout<< "Backword: "<<"\t";
    while(start!= NULL){
        cout << start->data<<"\t";

        start = start->priviousdata;
    }
    start = first;
    cout<< "\nFarword: "<<"\t";

    while(start!= NULL){
        cout << start->data<<"\t";

        start = start->nextdata;
    }

    return  0;
}