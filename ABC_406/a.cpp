#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int n1=A*60+B;
    int n2=C*60+D;
    if(n1>n2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
