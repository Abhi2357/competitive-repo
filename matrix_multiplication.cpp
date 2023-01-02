
// 2d multiplly 1 d
vector<ll> mult(vector<vector<ll> > & vec1,vector<ll> &vec2,ll mod)
{
    ll n=vec1.size();
    vector<ll> ans(n,0);
    
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ans[i]=(ans[i]%mod+(vec1[i][j]*vec2[j])%mod)%mod;
        }
        
    }
    
    return ans;
    
}


// 2d multiply 2d
vector<vector<ll> > mult2(vector<vector<ll> > & vec1,vector<vector<ll> > & vec2,ll mod)
{
    ll n=vec1.size();
    
    vector<vector<ll> > ans(n,vector<ll> (n,0));
    
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            for(ll k=0;k<n;k++)
            {
                ans[i][j]=(ans[i][j]%mod+(vec1[i][k]*vec2[k][j])%mod)%mod; 
            }
        }
        
    }
    return ans;
}