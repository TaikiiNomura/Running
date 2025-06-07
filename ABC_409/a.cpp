#include<iostream>
using namespace std;
int main()
{
    int N;
    string T,A;
    cin>>N>>T>>A;
    for(int i=0;i<N;i++)
    {
        if(T[i]=='o' && T[i]==A[i])
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}