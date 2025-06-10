#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K,ans=1;cin>>N>>K;
    for(;N--;)
    {
        int a;cin>>a;
        ans*=a;
        if(to_string(ans).size()>K)ans=1;
    }
    cout<<ans<<endl;
    return 0;
}