#include<bits/stdc++.h>
using namespace std;

/*
Given N strings and Q queries.
In each query you are given a string
print frequency of that string

N<=10^6
|S|<=100
Q <= 10^6
*/

int main()
{
   unordered_map<string,int>m;
   int n;
   cin>>n;
   string s;
   while(n--)
   {
       cin>>s;
       m[s]++;
   }
   int q;
   cin>>q;
   while(q--)
   {
       string s;
       cin>>s;
       cout<<m[s]<<endl;
   }

   m.clear();
}
