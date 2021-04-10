#include <bits/stdc++.h>
#define ll long long int
int n=4;
int arr[4]={1,2,3,4};
using namespace std;

void subset(int i ,int temp[],int size )
{
	if(i==n)
	{
		{
			cout<<"{";
			for(int j=0;j<size;j++)
			{
				cout<<temp[j];
				if(j!=size-1) cout<<",";
			}
			cout<<"}"<<"\n";
			return;
		}
	}
	subset(i+1,temp,size);
	temp[size]=arr[i];
	subset(i+1,temp,size+1)	;
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int temp[n];
    int i=0,size=0;
    subset(i,temp,size);
    
    return 0;
}
