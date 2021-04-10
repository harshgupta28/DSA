#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int power(int n,int k)
{
	if (k==0)
		return 1;
	
	int x=power(n,k/2);
	
	if(k%2==0)	
		return x*x;
		
	else
		return x*x*n;	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    if (k>=0)
   		cout<<power(n,k);
	else
	{
		k=-k;
		cout<<1/(double)power(n,k);
	}
    
    return 0;
}

