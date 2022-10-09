class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>>res;
        if(nums.size()<3)
        return res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int target=0-nums[i];
            int lo=i+1,hi=nums.size()-1;
            while(lo<hi)
            {
                int sum=nums[lo]+nums[hi];
                if(sum<target)
                lo++;
                else if(sum>target)
                hi--;
                else
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[lo]);
                    temp.push_back(nums[hi]);
                    lo++;
                    hi--;
                    res.push_back(temp);
                    while(lo<=hi and nums[lo]==nums[lo+1])
                    lo++;
                    while(lo<=hi and nums[hi]==nums[hi-1])
                    hi--;
                }
            }

        }
        return res;
    }
    
};
