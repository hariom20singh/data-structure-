#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		int t = k;
		t -= a[i];
		int s = i + 1;
		int e = n - 1;
		while (s < e)
		{
			if (a[s] + a[e] == t)
			{
				cout << a[i] << " " << a[s] << " " << a[e] << "\n";
				s++;
			}
			else if (a[s] + a[e] > t)
			{
				e--;
			}
			else
			{
				s++;
			}
		}
	}
	return 0;
}