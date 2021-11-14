#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void spectrum()
{
    vector<int> v={2,-6,9};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

}
int main()
{
    spectrum();
}
