#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<vector<char>> S(N,vector<char>(N)),T(N,vector<char>(N)),U;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>S[i][j];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>T[i][j];
    // 回転してTといくつ違うか数える
    int ans=1e9;
    for(int loop=0;loop<4;loop++)
    {
        // check
        int cnt=loop; // 回転操作分を足したのがスタート
        for(int i=0;i<N;i++)for(int j=0;j<N;j++)if(S[i][j]!=T[i][j])cnt++;
        ans=min(ans,cnt);
        // rotate
        U=S;
        for(int i=0;i<N;i++)for(int j=0;j<N;j++)
        {
            S[i][j]=U[N-j-1][i];
        }
    }
    cout<<ans<<endl;
    return 0;
}