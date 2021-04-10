#include <bits/stdc++.h>
#define ll long long int
int arr[] = {1, 2, 3}, n = sizeof(arr) / sizeof(arr[0]);
using namespace std;

// time complexity is O(n*(2^n))

void subset(int i, vector<int> &temp)
{
	if (i == n)
	{
		cout << "{";
		for (int j = 0; j < temp.size(); j++)
		{
			cout << temp[j];
			if (j != temp.size() - 1)
				cout << ",";
		}
		cout << "}"
			 << "\n";
		return;
	}

	subset(i + 1, temp);
	temp.push_back(arr[i]);
	subset(i + 1, temp);
	temp.pop_back();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> temp;
	int i = 0;
	subset(i, temp);

	return 0;
}
