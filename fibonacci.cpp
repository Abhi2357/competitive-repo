long long int mod=1e9+7;
//   long long int p=1005;
  long long dp[1005];
  long long fib(long long n)
  {
      if(n==1)
            return 1;
      if(n==0)
            return 0;
            
            if(dp[n]!=-1)
            return dp[n];
            
        long long k = (n & 1)? (n+1)/2 : n/2;
        
        if(n%2==0)
        {
            return dp[n]=(fib(k)*(fib(k) +2*fib(k-1)))%mod;
        }
        else
        {
            return dp[n]=(fib(k)*fib(k)+fib(k-1)*fib(k-1) )%mod;
        }
  }
  
  
    long long int nthFibonacci(long long int n){
        // code here
        memset(dp,-1,sizeof(dp));
        return fib(n);
        // return ans%mod;
    }