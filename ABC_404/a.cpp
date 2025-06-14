#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    for(int i=0;i<26;i++)
    {
        char c='a'+i;
        // cout<<c<<endl;
        for(int j=0;j<S.size();j++)
        {
            if(c==S[j])break;
            if(j==S.size()-1)
            {
                cout<<c<<endl;
                return 0;
            }
        }
    }
}