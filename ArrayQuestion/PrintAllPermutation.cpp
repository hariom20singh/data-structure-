/*
permutation - ordered sequence of any array or string

*/
#include <bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr, int i, int index)
{
	int temp = arr[index];
	arr[index] = arr[i];
	arr[i] = temp;
}
void recurrPermutation(vector<int> &nums, int index,
					   vector<vector<int>> &ans)
{

	if (index == nums.size())
	{
		ans.push_back(nums);
		return;
	}
	for (int i = index; i < nums.size(); i++)
	{
		swap(nums, i, index);
		recurrPermutation(nums, index + 1, ans);
		swap(nums, i, index);
	}
}
void computePermutation(vector<int> &arr)
{
	vector<vector<int>> ans;
	recurrPermutation(arr, 0, ans);
	for (int i = 0; i < ans.size(); i++)
	{
		vector<int> temp(ans[i]);
		cout << i << "th Permutation: ";
		for (auto ele : temp)
		{
			cout << ele << " ";
		}
		cout << endl;
	}
}
int main()
{
	vector<int> arr = {1, 2, 3};
	computePermutation(arr);
	return 0;
}
