#include<bits/stdc++.h>
using namespace std;
int main()
{   
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    int c0,c1,c2;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            c0++;
        else if(a[i]==1)
            c1++;
        else
            c2++;
    }
    for(i=0;i<c0;i++)
        a[i]=0;
    for(i=c0;i<c0+c1;i++)
        a[i]=1;
    for(i=(c0+c1-1);i<c2;i++)
        a[i]=2;

    for(i=0;i<n;i++)
        cout<<a[i] << " ";
    return 0;

}