#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K,cnt=0;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    // sort(A.begin(),A.end());
    cin>>K;
    for(int i=0;i<N;i++)
    {
        if(A[i]>=K)cnt++;
        // else break;
    }
    cout<<cnt<<endl;
    return 0;
}