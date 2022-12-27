ll power(ll x,ll y)
{
    if(y==0)
    return 1;
    if(y==1)
    return x;
    ll ans=power(x,y/2);
    ans=(ans*ans)%mod;
    
    if(y%2==0)
    return ans;
    
    return (ans*x)%mod;
}