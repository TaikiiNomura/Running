#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	N--;
	vector<int> D(N);
	for(int i=0; i<N; i++)cin >> D[i];
	for(int i=0; i<N; i++)
	{
		int ans = 0;
		for(int j=i; j<N; j++)
		{
			ans += D[j];
			cout << ans << (j==N-1 ? '\n' : ' ');
		}
	}
	return 0;
}
