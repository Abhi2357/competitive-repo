int sol(int n,vector<int> &arr)
    {
        if(arr[n]!=-1)
            return arr[n];
        if(n==1)
        {
            arr[n]=1;
            return 1;
        }
            
        int ans=0;
        for(int i=1;i<=n;i++)
        {     
                if(i==1)
                ans+=sol(n-i,arr);
            else if(i==n)
                ans+=sol(i-1,arr);
            else
            {
                ans+=sol(n-i,arr)*sol(i-1,arr);
            }
        }
        arr[n]=ans;
        return ans;
    }
    int numTrees(int n) {
        
        vector<int> arr(n+1, -1);
        
        return sol(n,arr);
        
    }