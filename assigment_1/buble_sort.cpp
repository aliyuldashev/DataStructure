#include <iostream>
using  namespace std;
int main(){
    int arr[10]={72,105,350,84,63,94,45,25,65};
    //BUBLE SORT
    int n= 8;
    for (int i = 0; i < n; ++i) {
        for (int ptr = 0; ptr< n-i-1 ; ++ptr) {
            if (arr[ptr]>arr[ptr+1]){
                int tosave = arr[ptr];
                arr[ptr]=arr[ptr+1];
                arr[ptr+1]=tosave;
            }

        }
    }
    for (int i = 0; i < n; ++i){
        cout<<arr[i]<<" ";}

    return  0;
}
