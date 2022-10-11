class Solution {
public:
    void helper(vector<int>&dis,vector<vector<int>>&adj,int src,int n)
    {
         queue<int>q;
         dis[src]=0;
        q.push(src);
        vector<int>vis(n,0);
        vis[src]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for (auto it: adj[node])
            {
                if (dis[node]+1<dis[it] && !vis[it])
                {
                    dis[it]=dis[node]+1;
                q.push(it);
                vis[it]=1;
                }
            }
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) 
    {
        int n=edges.size();
        vector<vector<int>>adj(n);
        for (int i=0;i<edges.size();i++)
        {
            if (edges[i]!=-1)
           adj[i].push_back(edges[i]);
        }
        vector<int>dis1(n,INT_MAX);
        vector<int>dis2(n,INT_MAX);
        helper(dis1,adj,node1,n);
        helper(dis2,adj,node2,n);
        int ans=INT_MAX;
        int ansind=-1;
        for (int i=0;i<n;i++)
        {
            if (dis1[i]==INT_MAX || dis2[i]==INT_MAX) continue;
            int cur=0;
            cur=max(dis1[i],dis2[i]); 
            if (cur<ans)
            {
                ans=cur;
                ansind=i;
            }
        }
        return ansind;
    }
};

