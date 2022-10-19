vector<vector<int> > graph(N+1);
        // indexing - 1
        // M -Number of edges
        
        for(int i=0;i<M;i++)
        {
            graph[Edges[i][0]].push_back(Edges[i][1]);
            graph[Edges[i][1]].push_back(Edges[i][0]);
        }