#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll TC;
	ll M, S;
	cin >> TC;
	while(TC--)
	{
		cin >> M >> S;
		cout << M/S << endl;
	}

	return 0;
}