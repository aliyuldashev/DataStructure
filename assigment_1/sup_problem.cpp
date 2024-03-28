#include <iostream>
using  namespace  std;

int main(){
    cout<< "SUPPLEMENTARY PROBLEMS"<<endl;
    string S= "WE THE PEOPLE";
    string T = "OF THE UNITED STATES";
    cout<<"3.5"<<endl;
    //3.5
    int S_Length = S.length();
    int T_Length = T.length();
    cout<<"length of S"<<S_Length<<endl;
    cout<<"length of T"<<T_Length<<endl<<endl;

    //3.6
    cout<<"3.6"<<endl;
    string S_Substring = S.substr(4,8);
    string T_Substring = T.substr(10,5);
    cout<<"SUBSTRING(S, 4, 8): "<<S_Substring<<endl;
    cout<<"SUBSTRING(T, 10. 5)."<<T_Substring<<endl<<endl;


    //3.7
    int index = S.find("P");
    int index_2 = S.find("E");
    int index_3 = S.find("THE");
    int index_4 =T.find("THE");
    int index_5 =T.find("THEN");
    int index_6 =T.find("TE");
    cout<<"INDEX(S, 'P'): "<<index<<endl;
    cout<<"INDEX(S, 'E'): "<<index_2<<endl;
    cout<<"INDEX(S, 'THE'): "<<index_3<<endl;
    cout<<"INDEX(S, 'THEN' ): "<<index_4<<endl;
    cout<<"INDEX(T, 'THEN' ): "<<index_5<<endl;
    cout<<"INDEX(T, 'TE' ): "<<index_6<<endl<<endl;



    //3.8
    cout<<3.8<<endl;
    string NO = "NO";
    string EXIT = "EXIT";
    string space = " ";
    string ARE = "ARE";

    cout<<"'NO’//'EXIT'"<< NO+EXIT<<endl;
    cout<<"'NO//[]//'EXIT'"<< NO+space+EXIT<<endl;
    cout<<"SUBSTRING(S,4,  10)//'[]ARE[]'//SUBSTRING(T, 8, 6)"<<S.substr(4,10)+space+ARE+space+T.substr(8,6)<<endl<<endl;

    //3.9    Find (a) DELETE!'AAABBB', 3. 3). (b)  DELETECAAABBB', 1,  4), (c) DELETERS.  1,  3) and (d) DELETES, 1. 7).
    cout<<"3.9"<<endl;
    string delete_1= "AAABBB";
    string delete_2= "AAABBB";

    cout <<"DELETE('AAABBB', 3. 3)"<< delete_1.erase(3,3)<<endl;
    cout << "DELETE('AAABBB', 1,  4)"<<delete_2.erase(1,4)<<endl;
    cout<<"DELETER(S,  1,  3)"<< S.erase(1,3)<<endl;
    cout <<"DELETE(T, 1. 7)."<< T.erase(1,7)<<endl<<endl;
    S= "WE THE PEOPLE";
    T = "OF THE UNITED STATES";

    //3.10
    cout<<"3.10"<<endl;
    string str = "ABABAB";

    str.replace(str.find("B"),strlen("B"),"BAB");
    S.replace(S.find("WE"),strlen("WE"),"ALL");
    T.replace(T.find("THE"), strlen("THE"),"THESE");
    cout<<"REPLACE('ABABAB',  'B', 'BAB'): "<<str<<endl;
    cout<<"REPLACE(S,  'WE',   'ALL’)"<<S<<endl;
    cout<<"REPLACE(T,'THE', 'THESE' )"<<T<<endl<<endl;

    //3.11
    cout<<"3.11"<<endl;
    string insert_1 = "AAA";
    string insert_2 = "ABCDE";
    string insert_3 = "THE BOY";

    cout <<"INSERT('AAA', 2, 'BBB')"<< insert_1.insert(2,"BBB")<<endl;
    cout <<"INSERT('ABCDE', 3,  'XYZ')"<< insert_2.insert(3,"XYZ")<<endl;
    cout << "INSERT (THE BOY', 5,  'BIG[]')"<<insert_3.insert(5,"BIG ")<<endl<<endl;

    //3.12
    string U = "MARC STUDIES MATHEMATICS";
    cout<<"A: " << U.insert(13,"ONLY ")<<endl;
    cout <<"B: "<< U.erase(13,-1)<<endl;





    return 0;
}