int secondlargest(vector<int>&a,int n)
{
    int largest=a[0];
    int slargest=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest)
        {
            slargest=a[i];
        }
    }
    return slargest;
}
int secondsmallest(vector<int>&a,int n)
{
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]>smallest && a[i]<ssmallest)
        {
            ssmallest=a[i];
        }
    }
    return ssmallest;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    /*  Brute Force

        Time Compelxity - O(NlogN)+O(N)
        Space Complexity -O(1)

       sort(a.begin(),a.end());
       int largest=a[n-1];
       int secondlargest;
       for(int i=n-2;i>=0;i--)
       {
           if(a[i]!=largest)
           {
              secondlargest=a[i];
              break;
           }
       }
       int smallest=a[0];
       int secondsmallest;
       for(int i=1;i<n;i++)
       {
           if(a[i]!=smallest)
           {
              secondsmallest=a[i];
              break;
           }
       }
       vector<int>ans;
       ans.push_back(secondlargest);
       ans.push_back(secondsmallest);
       return ans;*/

       /* Optimal approach

           Time Complexity: O(N)
           Space Complexity: O(1)
       */
      int slargest=secondlargest(a,n);
      int ssmallest=secondsmallest(a,n);
      vector<int>ans;
      ans.push_back(slargest);
      ans.push_back(ssmallest);
      return ans;
}
