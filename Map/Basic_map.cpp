#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<"Size : "<<m.size()<<endl;
    for(auto &pr:m)
        cout<<pr.first<<" "<<pr.second<<endl;

}
int main()
{
   map<int,string>m;
   m[4]="Saha";         ///O(log(n))
   m[9]="Bornali";
   m[11]="Nobody";
   m.insert({2,"What"});
   print(m);
}
//Output: //sorted keys
//    Size : 4
//    2 What
//    4 Saha
//    9 Bornali
//    11 Nobody
