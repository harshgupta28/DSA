// print all permutations of string .

#include <bits/stdc++.h>
#define lli long long int
using namespace std;
/*
lli cnt = 0;

bool fun(string s)
{
	lli one = 0, zero = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] == '0')
			zero++;
		else
			one++;
		if (zero > one)
			return false;
	}
	return true;
}

void rightr(int i, int j, string &s)
{
	char c = s[j];
	for (int k = j - 1; k >= i; k--)
		s[k + 1] = s[k];
	s[i] = c;
}

void leftr(int i, int j, string &s)
{
	char c = s[i];
	for (int k = i + 1; k <= j; k++)
		s[k - 1] = s[k];
	s[j] = c;
}

void permutation(int i, string s)
{
	if (i == s.size() - 1)
	{
		if (fun(s))
			cnt++;
		return;
	}

	for (int j = i; j < s.size(); j++)
	{
		//swap(s[i],s[j]); we can use swap on both sides also instead of rotation .
		rightr(i, j, s);
		permutation(i + 1, s);
		leftr(i, j, s);
		//swap(s[i],sj]);
	}
}
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i = 0, x, y;
	cin >> x >> y;
	string s;
	for (int i = 0; i < x; i++)
		s[i] += '0';
	for (int i = 0; i < y; i++)
		s[i] += '1';
	cout << s;
	//permutation(i, s);
	//cout << cnt << endl;

	return 0;
}
