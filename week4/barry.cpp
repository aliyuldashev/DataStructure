//THIS CODE SHOULD GET INPUT OF USER INT AND THEN CHECK WHETHER THAT NUMBER WILL BE DIVIDABLE IN SUCH PORTION THAT BOTH PART SHOULD BE EVEN NUMBERS.
//FOR EXAMPLE 8 output YES
// EXPLANATION WE CAN DIVIDE 8 TO 4 and 4 ALSO 6 and 2.
#include <iostream>
using namespace std;
 int main(){
     int input;
     cout<<"Input: "<<endl;
     cin >> input;
     if(input%2==0 && input!=2){
         cout <<"YES\n";
     } else{
         cout <<"NO\n";

     }
     return 0;
 }