#include<bits/stdc++.h>
using namespace std;
///Sets store unique data in Sorted order

void print(set<string> &st)
{
    for(string value: st){
        cout<<value<<" ";
    }
}
int main()
{
    set<string>st;
    string s;
    for(int i=0;i<5;i++)
    {
        cin>>s;
        st.insert(s); //st.insert("Saha");
    }
    st.insert("hello"); //log(n)

    auto it = st.find("abc"); //log(n)
    if(it!=st.end())
    {
        st.erase(it);
    }

    //st.erase("hello");
    if(it!=st.end())
        cout<<(*it)<<endl;
    else cout<<"No value"<<endl;

    print(st);
}
