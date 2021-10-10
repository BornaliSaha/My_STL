#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    s.push(2);
    s.push(10);
    s.push(11);
    s.push(8);
    s.push(0);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    queue<string>q;
    q.push("saha");
    q.push("bornali");
    q.push("mita");
    q.push("nnn");
    q.push("lll");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
