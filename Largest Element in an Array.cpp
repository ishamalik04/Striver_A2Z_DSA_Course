#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
   /*Brite force
    sort(arr.begin(),arr.end());
    return arr[n-1];

    Time complexity-O(NlogN)
    Space Complexity-O(1)

    */
    /*Optimal

    Time complexity -O(N)
    Space Complexity -O(1)

    */
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}
