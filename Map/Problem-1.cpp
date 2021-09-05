#include<bits/stdc++.h>
using namespace std;

/*
Given N strings, print unique strings
in lexiographical order with their frequency
N<=10^5
|S|<=100
*/

int main()
{
   map<string,int>m;
   int n;
   cin>>n;
   string s;
   while(n--)
   {
       cin>>s;
       m[s]++;
   }
   for(auto &pr:m)
       cout<<pr.first<<" "<<pr.second<<endl;

   m.clear();
}
