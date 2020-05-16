int Solution::hammingDistance(const vector<int> &A) {
    vector<int> temp(32,0);
    const int mod= 1000000007;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        int num = A[i];
        int j=0;
        while(num>0)
        {
            temp[j]+= (num&1);
            j++;
            num=num>>1;
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        ans=(ans + (2*temp[i] * (A.size()-temp[i])))%mod;
    }
    return ans;
}
