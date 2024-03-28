#include <iostream>
using  namespace  std;
int function(int s,string tk){
    string pattern ="aabbaa";
    int position = 0;
    while (position !=tk.length()){
        if(pattern.substr(0,s+1)==tk.substr(position,s+1)){
            s++;
            return s;
        }
        else{
            position ++;
            s--;
        }
    }
    return 0;

}
int main(){
    int k =1;
    int s = 0;
    string pattern ="aabbaa";
    string text = "adsdsdaabbaaabba";
    int p_len = pattern.length();
    int text_len = text.length();
    while (s!=p_len && k<=text_len){
         string t = text.substr(0,s+1);
         s= function(s,t);
         if(s<p_len) {
             text = text.erase(0, t.length()-s);
         }
         k++;
    }
    if(s==p_len){
        cout<<k-p_len<<endl;
    } else{
        cout<<0<<endl;
    }

    return 0;
}