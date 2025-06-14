#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;
    vector<int> A(N),B(M);
    for(auto&a:A)cin>>a;
    for(int i=0;i<M;i++)B[i]=i+1;
    int cnt=0;
    for(int i=0;i<N;i++)
    {
        for(const auto&b:B)
        {
            if(find(A.begin(),A.end(),b)==A.end())
            {
                cout<<cnt<<endl;
                return 0;
            }
        }
        A.pop_back();
        cnt++;
    }
    cout<<cnt<<endl;
}