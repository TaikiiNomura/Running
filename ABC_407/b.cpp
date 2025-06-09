#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int X,Y,cnt=0;
    cin>>X>>Y;
    for(int i=1;i<7;i++)for(int j=1;j<7;j++)if(i+j>=X||abs(i-j)>=Y)cnt++;
    if(cnt==0)
    {
        cout<<0<<endl;
        return 0;
    }
    // cout<<cnt<<endl;
    cout<<fixed<<setprecision(9)<<static_cast<double>(cnt)/36<<endl;
    return 0;
}