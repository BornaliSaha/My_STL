#include<bits/stdc++.h>
using namespace std;
void print(multiset<string>&s)
{
    for(string value: s)
    {
        cout<<value<<" ";
    }
}
int main()
{
    multiset<string>s;
    s.insert("saha");   //O(lon(o))
    s.insert("abc");
    s.insert("borna");
    s.insert("dina");
    s.insert("saha");

    auto it = s.find("saha");  //O(lon(o))
    if(it!= s.end())
    {
        s.erase(it);
    }
    //s.erase("saha");
    print(s);
}
