#include<bits/stdc++.h>
using namespace std;

2 5 2 3
3 6 3 4
1 2
2 3

int main()
{
   vector<int> v ={2,5,2,3};

   for(auto it=v.begin();it!=v.end();it++)
   {
       cout<<(*it)<<" ";
   }
   cout<<endl;

    ///to change value use reference
    for(int &value:v)
    {
        value++;
    }

    ///Ranged based loop
    ///short form of iterator
   for(int value:v)
   {
       cout<<value<<" ";
   }
   cout<<endl;

   ///vector of Pair-
   vector<pair<int,int> >vp = {{1,2},{2,3}};
   for(auto &value:vp)
   {
       cout<<value.first<<" "<<value.second<<endl;
   }
}
