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
		ll n, x; cin >> n >> x;
		set<ll> st;
		for(ll i=0; i<n; i++){
			ll type; cin >> type;
			st.insert(type);
		}
		ll cnt = st.size();
		cout << min(n-x, cnt) << '\n';

	}

	return 0;
}