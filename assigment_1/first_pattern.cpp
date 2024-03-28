#include <iostream>
using namespace  std;
int main() {
    int k = 1;
    string TEXT = "adaadaadaadad";
    string  P = "dad";
    int S = TEXT.length();
    int r =P.length();
    int MAX = S - r +1;
    int index=0;

    while(k<=MAX){
        for(int L=0;L<r;L++){
            if(P[L] != TEXT[k+L-1]){
                goto step5;
            }
        }
        index = k;
        break;
        step5:k++;
    }
    cout << index;

    return 0;
}