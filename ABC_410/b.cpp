#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,Q; cin>>N>>Q;
    vector<int> A(Q),B(110,0); for(auto&a:A)cin>>a;
    for(int i=0;i<Q;i++)
    {
        if(i!=0)cout<<' ';
        if(A[i]==0)
        {
            int val=B[1];
            for(int j=1;j<=N;j++)val=min(val,B[j]);
            for(int j=1;j<=N;j++)
            {
                if(B[j]==val)
                {
                    cout<<j;
                    B[j]++;
                    break;
                }
            }
        }
        else
        {
            B[A[i]]++;
            cout<<A[i];
        }
    }cout<<endl;
    return 0;
}