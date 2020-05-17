#define mod 1000003
long long int power(long long int A, long long int B)
{
    if(A==0) return 0;
    if(B==0) return 1;
    long result;
    if(B%2==0)
    {
        result = power(A,B/2);
        result = (result *result)%mod;
    }
    else{
        result = A%mod;
        result = (result * (power(A, B-1))%mod)%mod;
    }
    return result%mod;
}
int Solution::findRank(string A) {
    int ans=0;
    int m = A.size();
    
    long long int fact[m];
    fact[0]=1;
    for(int i=1;i<m;i++)
    {
        fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
    }
    for(int i=0;i<m;i++)
    {
        int count=0;
        for(int j=i+1;j<m;j++)
        {
            if(A[j]<A[i])
                count++;
        }
        
        map<char, int> m1;
        for(int k=i;k<A.size();k++)
        {
            m1[A[k]]++;
        }
        
        long long int l=1;
        for(auto a:m1)
        {
            l = ((l%mod)*(fact[a.second])%mod)%mod;
        }
        
        
    ans = (ans + (count * ((fact[m-i-1])%mod)* (power(l,mod-2))%mod )%mod)%mod;
    }

    return (ans+1)%mod;
}