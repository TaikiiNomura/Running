#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;i++)cin>>V[i];
    sort(V.rbegin(),V.rend());
    // for(int i=0;i<N;i++)cout<<V[i]<<endl;
    for(int i=N-1;0<=i;i--)
    {
        if(i+1<=V[i])
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}