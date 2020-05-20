int Solution::maxSubArray(const vector<int> &A) {
    
    int sum=A[0],best=A[0];
    int n=A.size();
    for(int i=1;i<n;i++)
    {
        sum=max(A[i],sum+A[i]);
        best=max(sum,best);
    }
    return best;
}
