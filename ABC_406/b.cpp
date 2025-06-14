#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;
    long long ans=1,y=1;
    cin>>N>>K;
    for(int i=0;i<K;i++)y*=10;
    y--;
    for(;N--;)
    {
        long long a;
        cin>>a;
        if(ans>y/a)ans=1;
        else ans*=a;
    }
    cout<<ans<<endl;
    return 0;
}