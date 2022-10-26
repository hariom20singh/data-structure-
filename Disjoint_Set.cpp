#include <bits/stdc++.h>
using namespace std;

class DisjSet {
	int *rank, *parent, n;

public:

	DisjSet(int n){
		rank = new int[n];
		parent = new int[n];
		this->n = n;
		makeSet();
	}

	void makeSet(){
		for (int i = 0; i < n; i++) {
			parent[i] = i;
			rank[i]=0;
		}
	}

	int findPar(int x){
		
		if (parent[x] == x){
			return x;
		}

		return parent[x]=findPar(parent[x]);//path compression
	}

	// Do union of two sets represented
	// by x and y.
	void Union(int x, int y)
	{
		// Find current sets of x and y
		int xset = findPar(x);
		int yset = findPar(y);

		// If they are already in same set
		if (xset == yset)
			return;

		// Put smaller ranked item under
		// bigger ranked item if ranks are
		// different
		if (rank[xset] < rank[yset]) {
			parent[xset] = yset;
		}
		else if (rank[xset] > rank[yset]) {
			parent[yset] = xset;
		}

		// If ranks are same, then increment
		// rank.
		else {
			parent[yset] = xset;
			rank[xset] = rank[xset] + 1;
		}
	}
};

// Driver Code
int main()
{

	// Function Call
	DisjSet obj(5);
	obj.Union(0, 2);
	obj.Union(4, 2);
	obj.Union(3, 1);

	if (obj.findPar(4) == obj.findPar(0))
		cout << "Belong to diff\n";
	else
		cout << "No\n";
	if (obj.findPar(1) == obj.findPar(0))
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}
