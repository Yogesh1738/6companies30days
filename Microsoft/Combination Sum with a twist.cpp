// ques link->https://leetcode.com/problems/combination-sum-iii/description/


class Solution {
public:
    void fun(vector<int> &arr,int n,int m,vector<int> temp,vector<vector<int>> &ans)
    {
    if(n==0)
     {
         if(m==0)
      {
       ans.push_back(temp);
        return;
      }
      return;
     }

      fun(arr,n-1,m,temp,ans);
      if(m>=arr[n-1])
      {
       temp.push_back(arr[n-1]);
       fun(arr,n-1,m-arr[n-1],temp,ans);
      }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
     vector<vector<int>> ans;
      vector<int> arr;
      for(int i=1;i<=9;i++)
      {
       arr.push_back(i);
      }
     vector<int> temp;
      fun(arr,arr.size(),n,temp,ans);
      vector<vector<int>> myans;
      for(int i=0;i<ans.size();i++)
      {
       if(ans[i].size()==k)
       {
        myans.push_back(ans[i]);
       }
      }
      return myans;
    }
};
