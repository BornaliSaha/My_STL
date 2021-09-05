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
   auto it=m.find(9);      ///O(log(n))
   //m.erase(it);          ///log(n)
   if(it== m.end())
    cout<<"No value"<<endl;
   else cout<<(*it).first<<" "<<(*it).second<<endl;
   print(m);
   m.clear();
}
