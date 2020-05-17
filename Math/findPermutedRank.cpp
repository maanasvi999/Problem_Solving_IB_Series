#define mod 1000003

int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return (n*fact(n-1)) % 1000003;
}

int Solution::findRank(string A) {
    
    int ans=0;
    int m = A.size();
    for(int i=0;i<m;i++)
    {
        int count=0;
        for(int j=i+1;j<m;j++)
        {
            if(A[j]<A[i])
                count++;
        }
    ans = (ans + (fact(m-i-1) * count)% 1000003)% 1000003;
    }

    return (ans+1) % 1000003;
}
