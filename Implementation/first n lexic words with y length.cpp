#include <bits/stdc++.h>
int cnt=0;
using namespace std;

void printlex(string s)
{
	if(cnt>=9 || s.size()>3)
		return;
	
	if(s!="")
	{
			cout<<s<<"\n" ;
			 cnt++;
	}
		
	printlex(s+'a');
	printlex(s+'b');
	printlex(s+'c');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //max word length is 3 and print first 9 words
    string s;
    printlex(s);
    
    return 0;
}

