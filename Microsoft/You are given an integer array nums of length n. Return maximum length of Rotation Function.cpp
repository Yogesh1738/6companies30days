// queslink->https://leetcode.com/problems/rotate-function/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        //idea is to find out the F(0) & for each next rotation F(k)=F(0)+sum-(vale uf fisrt elemnt in kth roation)*n
        int sum=0,func=0,res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            func+=(nums[i]*i);

        }
        res=max(res,func);
        for(int i=nums.size()-1;i>0;i--){
            func+=(sum-nums[i]*nums.size());
            res=max(res,func);
        }
        return res;

    }
};
