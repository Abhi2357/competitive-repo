int comb(int n,int r,vector<vector<int> >& dp )
    {
        if(dp[n][r]!=-1)
            return dp[n][r];
        if(r==0 || r==n)
            return 1;
        return dp[n][r]=comb(n-1,r-1,dp)+comb(n-1,r,dp);  
    }
    
    int numTrees(int n) {   
        vector<vector<int> > dp(2*n+1,vector<int>(2*n+1,-1));
        return comb(2*n,n,dp)/(n+1);
        
        
    }