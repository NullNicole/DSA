#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll TC;
	cin >> TC;
	while(TC--)
	{
		ll n, A, B, sar, anu;
		sar = 0; anu = 0;
		
		cin >> n >> A >> B;

		for (int i = 0; i < n; ++i)
		{
			string S;
			cin >> S;
			if((S[0]=='E')||(S[0]=='Q')||(S[0]=='U')||(S[0]=='I')||(S[0]=='N')||(S[0]=='O')||(S[0]=='X'))
				sar += A;
			else
				anu += B;
		}
		if(sar>anu)
			cout << "SARTHAK" << endl;
		if(anu>sar)
			cout << "ANURADHA" << endl;
		if(sar == anu)
			cout << "DRAW" << endl;
	}

	return 0;
}