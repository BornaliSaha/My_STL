#include<bits/stdc++.h>
using namespace std;
/**
Given N strings and Q queries. In each query you are given a string print yes if string is present else print no.

N <= 10^6
|S| <= 100
Q <= 10^6
**/

int main()
{
    unordered_set<string>st;
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        st.insert(s);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        if(st.find(str)==st.end())
            cout<<"No\n";
        else cout<<"Yes\n";
    }
}
