#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    set<int> A;
    for(;N--;)
    {
        int a;cin>>a;
        A.insert(a);
    }
    cout<<A.size()<<endl;
    int n=0;
    for(auto&a:A)
    {
        cout<<a;
        if(n==A.size()-1)
        {
            cout<<endl;
            return 0;
        }
        else
        {
            cout<<' ';
            n++;
        }
        
    }
    return 0;
}