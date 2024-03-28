#include <iostream>
using  namespace std;

int main(){
    int array[] = {12,234,342,4,24,2};
    int k =1;
    int loc = 0;
    int item = 2;
    int n = sizeof(array)/sizeof(array[0]);
    while (loc==0 && k<n){
        if(item == array[k]){
            loc = k;
        }
        k++;
    }
    if(loc!=0){
        cout<< "Item found in "<<loc<<endl;
    } else{
        cout<<"Item not found"<<endl;
    }
    return 0;
}
