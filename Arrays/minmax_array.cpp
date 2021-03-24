#include<bits/stdc++.h>
using namespace std;

int minMax(int arr[],int n)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
        
    }
    cout << min << endl;
    cout << max << endl;
    return -1;
}

int main()
{
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    
    return 0;
}