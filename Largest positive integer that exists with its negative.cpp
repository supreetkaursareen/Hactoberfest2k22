class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
       map<int,int>mp;
        int maxm=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                mp[nums[i]]++;
            }
            else
            {
                if(nums[i]>maxm and mp.find(-nums[i])!=mp.end())
                    maxm=nums[i];
            }
        }
        if(maxm==INT_MIN)
            return -1;
        return maxm;
    }
};
