#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int R,X;cin>>R>>X;
    bool P=false;
    if(X==1)
    {
        if(1600<=R && R<3000)P=true;
    }
    else
    {
        if(1200<=R && R<2400)P=true;
    }
    if(P)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}