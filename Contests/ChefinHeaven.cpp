#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll TC;
	ll l, W, L;

	string s; 
	cin >> TC;
	while(TC--)
	{
		cin >> l >> s;
		W = 0; L = 0;
		int flag = 0;
		for (int i = 0; i < l; ++i)
		{
			if(s[i] == '0')
				L++;
			else
				W++;

			if(W>=L)
			{
				flag = 1;
				break;
			}
				
		}
		if( flag == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}