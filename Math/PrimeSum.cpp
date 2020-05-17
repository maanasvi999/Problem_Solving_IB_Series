bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    
    vector<int> ans;
    ans.reserve(2);
    for(int i=2;i<A;i++)
    {
        if(isPrime(i) && isPrime(A-i))
        {
            ans.push_back(i);
            ans.push_back(A-i);
            break;
        }
    }
    return ans;
}
