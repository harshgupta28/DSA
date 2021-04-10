//print subset of set in lexicographical order suing vector by recursion.

#include <bits/stdc++.h>
#define ll long long int
int a[]={1,2,3}, n=sizeof(a)/sizeof(a[0]);
//input set has to be sorted
using namespace std;


void lexicsubset(int i ,vector<int>&temp)
{
	for(auto &r:temp)
		cout<<r<<" ";
	cout<<"\n";
		
	if(i==n) return;
	
	for(int k=i;k<n;k++)
	{
		   temp.push_back(a[k]);
		lexicsubset(k+1,temp);
		   temp.pop_back();
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   vector<int>temp;
    int i=0;
    lexicsubset(i,temp);
    
    return 0;
}
