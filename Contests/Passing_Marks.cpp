#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, Am, Bm, Cm, Tm, A, B, C;

	cin >> T;
	for(int i=0; i<T; i++)
	{
		cin >> Am >> Bm >> Cm >> Tm >> A >> B >> C;
		int t = (A + B + C);
		if((A>=Am) && (B>=Bm) && (C>=Cm) && (t>=Tm))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}