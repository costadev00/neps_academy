#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	while (cin >> n)
	{

		vector<int> vet;
		int x;
		while (n--)
		{
			cin >> x;
			vet.push_back(x);
		}
		int p;
		cin >>
			p;
		while (p--)
		{
			cin >> x;
			auto it = find(vet.begin(), vet.end(), x);
			vet.erase(it);
		}
		for (auto i : vet)
			cout << i << " ";
	}
}
