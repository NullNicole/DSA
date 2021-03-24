#include<bits/stdc++.h>
using namespace std;
int main()
{   
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    int n,i;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    int p=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            swap(a[i],a[p]);
            p++;
        }
    }
    for(i=0;i<n;i++)
        cout << a[i] << ' ';
    return 0;
}