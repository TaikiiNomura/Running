#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,S;cin>>N>>S;
    vector<int> T(N);
    for(auto&t:T)cin>>t;
    if(T[0]>S)
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=1;i<N;i++)
    {
        if(T[i]-T[i-1]>S)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}