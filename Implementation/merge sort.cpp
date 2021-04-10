#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int aux[8];
merge()
{
	
}

void mergesort(int *arr ,int i, int j)
{
	if(i==j)
		return;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n=8;
    int arr[]={8,7,6,5,4,3,2,1};
    
    mergesort(*arr,0,n-1);
    for(int i=0;i<n;i++)
    	cout<<arr[i]<<" ";
    
    return 0;
}

