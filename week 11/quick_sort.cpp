#include <iostream>
using namespace std;




int partion(int a[],int l,int h) {
    int p = a[l];
    int i = l;
    int j = h;
    int temp;
    while (i < j) {
        do {
            i++;
        } while (a[i] <= p);
        do {
            j--;
        } while (a[j] > p);
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j]=temp;
        }
    }
    temp = a[l];
    a[l] = a[j];
    a[j]=temp;
    return j;

}
void quic(int a[],int l, int h){
    int p = partion(a,l,h);
    if(l<h){
        quic(a,l,p);
        quic(a,p+1,h);
    }
}
int main(){
    int a[]={45,9,10,75,80,21};

    int n = int(sizeof(a)/sizeof(a[0]));
    cout<< "List: ";
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    quic(a,0,n);
    cout<< "\nSorted List: ";
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}