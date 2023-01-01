vector<vector<int>> pascal(n+1);
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                    pascal[i].push_back(1);
                else if(j==i)
                    pascal[i].push_back(1);
                else
                {
                    pascal[i].push_back((pascal[i-1][j-1]%mod+pascal[i-1][j]%mod)%mod);
                }
            }
              
        }

        // find nCr easily 