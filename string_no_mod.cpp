ll solve(string &s,ll p)
{
    ll ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans=ans*10 +(s[i]-'0');
        ans=ans%p;
    }
    return ans;
    
}