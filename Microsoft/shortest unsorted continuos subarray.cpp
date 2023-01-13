class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
      vector<int> temp;
      temp=nums;
      sort(temp.begin(),temp.end());
      int n=nums.size();
      int i,j;
      i=0,j=n-1;
      while(i<n && temp[i]==nums[i])
      {
        i++;
      }
      while(j>=0 && temp[j]==nums[j])
      {
       j--;
      }
      if(i>j)
      {
       return 0;
      }
      else
      {
       return j-i+1;
      }
    }
};
