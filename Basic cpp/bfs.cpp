  #include<bits/stdc++.h>
  using namespace std;
  
  class Solution{
    public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(int i, vector<int> &ans, vector<int> &vis, vector<int> adj[])
    {
        queue<int> q;
        
        q.push(i);
        vis[i]=1;
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node])
            {
                if(vis[it]==0)
                {
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans, vis(V+1, 0);
        
        bfs(0, ans, vis, adj);
        
        return ans;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}