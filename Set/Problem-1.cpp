#include<bits/stdc++.h>
using namespace std;

/**
Given N strings, print unique strings in lexiographical order
N<= 10^5
|S| <= 100000
**/

void print(set<string> &st)
{
    for(string value: st){
        cout<<value<<" ";
    }
}
int main()
{
    set<string>st;
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        st.insert(s);
    }
    print(st);
}
