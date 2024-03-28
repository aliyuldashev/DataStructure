#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,2,3,4,5,6,8,9,10,11,22,44,66,74,123};
    int item =1;
    int beg = 1;
    int end = 15;
    int mid = (beg+end)/2;
    while (beg<=end&&array[mid]!= item){
        if(item<array[mid]){
            end =mid -1;
        } else{
            beg = mid+1;
        }
        mid = (beg+end)/2;
    }
    if(array[mid]==item){
        cout<<"Item found in "<<mid<<endl;
    }else{
        cout<<"item not found"<<endl;
    }

    return 0;
}