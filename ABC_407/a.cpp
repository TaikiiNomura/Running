#include<bits/stdc++.h>
using namespace std;
/**
 * A/Bに最も近いのは　A/B+1/2以下の最大の整数
 */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B;cin>>A>>B;
    // cout<<(2*A+B)/(2*B)<<endl;
    cout<<round(static_cast<double>(A)/B)<<endl;
    return 0;
}