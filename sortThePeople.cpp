class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        map<int,string> mp;
        int n= names.size();
        for(int i=0;i<n;i++)
        {
            mp[heights[i]]=names[i];
        }
        for(auto a:mp)
        {
            ans.push_back(a.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
