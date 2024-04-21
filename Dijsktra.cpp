

// give distance vector to source to all node (shortest path)



vector <long long> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        
        
        vector<long long> dist(V,1e16);
        
        // priority_queue<pair<long long,int> ,vector<pair<long long,int> >, greater<pair<long long,int> >> q;
        
        set<pair<long long,int> >q;
        dist[S]=0;
        q.insert({0,S});
        
        while(!q.empty())
        {
                auto it=*(q.begin());
            int node=it.second;
            long long dis=it.first;
            q.erase(it);
                
                for(auto it:adj[node])
                {
                    
                    long long adjNode=it[0];
                    long long edgW=it[1];
                    
                    if(dis +edgW < dist[adjNode])
                    {
                        
                        if(dist[adjNode]!=1e16)
                        {
                            q.erase({dist[adjNode],adjNode});
                        }
                        dist[adjNode]=dis+edgW;
                        q.insert({dist[adjNode],adjNode});
                    }
                }
                
        }
        return dist;
        
        
    }