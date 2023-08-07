#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	/* Brute Force

	   Time Complexity: O(nlogn)
	   Space Complexity: O(n)

	set<int> st;
	for(int i=0;i<n;i++)
	{
		st.insert(arr[i]);
	}
	int index=0;
	int size=st.size();
	return size;*/

	/* Optimal Approach
	   Time Complexity: O(N)
	   Space Complexity: O(1)
	*/
	int i=0;
	for(int j=1;j<n;j++)
	{
		if(arr[i]!=arr[j])
		{
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}
