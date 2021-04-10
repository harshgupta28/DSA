#include <bits/stdc++.h>
#define ll long long int
int n=10;
int a[10]={54,89,4,23,58,21,65,5,42,47};
using namespace std;

int maxm(int i,int j)
{
	if(i==j)
		return a[i];
		
	int mid=(i+j)/2;
	int x= maxm(i,mid);
	int y= maxm(mid+1,j);
	return max(x,y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i=0,j=n-1;
    cout<<maxm(i,j);
    
    return 0;
}
