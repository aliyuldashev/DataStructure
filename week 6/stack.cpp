#include <iostream>

using namespace  std;
class stack{
public:
    int data[5]={} ;
    int top = 0;
    int max = 5;

};
void push(stack *newstack, int *top, int max, int item){
    if(*top >= max){
        cout<< "Stack overflow"<<endl;
        return;
    }
    newstack->data[*top] = item;
    top++;
}
void pop(stack *newstack, int *top){
    if(*top== 0){
        cout<< "Stack underflow"<<endl;
        return;
    }
    top --;



}
int main(){
    int top = 0;
    int max = 5;
    stack Stack =  stack();
    push(&Stack,&top,5,1);
    push(&Stack,&top,5,2);

    cout << Stack.data[0] << "\t";
    cout << Stack.data[1];

    return  0;
}