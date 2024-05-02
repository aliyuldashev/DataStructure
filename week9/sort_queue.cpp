#include <iostream>
#include <algorithm>
using namespace  std;

void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int find_smallest( int arr[],int k, int N,int pos ){
    int small = arr[k];
    int poss = k-1;
    for(int j=k;j<=N;j++){
        if(small>arr[j]){
            small = arr[j];
        }
        pos = j;
    }
    return pos;
}

int main(){
    int arr[] = {1233,131,231,20,3123,1242};
    int poss = 0;
    int n;
    for(int k =1;k<n;k++){
        poss = find_smallest(arr,k,n,poss);
        cout<<arr[k]<<" "<<arr[poss];
        swap(arr,arr[k],arr[poss]);

    }
    for(int i =0;i<=5;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;

}