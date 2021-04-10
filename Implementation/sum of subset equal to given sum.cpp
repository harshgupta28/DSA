// count of subset which has sum equal to given sum .

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int a[]={2,3,4,1,5,6},n=6;

int getsum(int sum,int i)
{
	if(i==n)
	{
		if (sum==0)
			return 1;
		return 0;
	}
	
	int x= getsum(sum-a[i],i+1);
	int y= getsum(sum,i+1);
	return x+y;
}

/* another method
int cnt=0;

int getsum(int sum,int i)
{
	if(i==n)
	{
		if (sum==0)
			cnt++ ;
			
		return 0;  
	}
	
	getsum(sum-a[i],i+1);
	getsum(sum,i+1);
	return cnt;
}

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<< getsum(9,0);
    
    return 0;
}


