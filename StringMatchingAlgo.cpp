// Z -Function

vector<int> Z(string & s)
    {
        int l=0;
        int r=0;
        int n=s.length();
        vector<int> ans(n,0);
        int i=0;
        for( i=1;i<n;i++)
        {
            if(i<r)
            {
                ans[i]=min(r-i,ans[i-l]);
            }

        while(i+ans[i]<n  && s[ans[i]]==s[i+ans[i]])
        {
            ans[i]++;
        }

        if(i+ans[i]>r)
        {
            l=i;
            r=i+ans[i];
        }
        }
        
        return ans;
    }