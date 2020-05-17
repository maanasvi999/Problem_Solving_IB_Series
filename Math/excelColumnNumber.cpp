int Solution::titleToNumber(string A) {
    
    int ans =0;
    
    int j=0, k=1;
    for(int i=A.size()-1; i>=0 ;i--)
    {
        ans = ans + (A[i] - 'A' + 1)*k;
        k*=26;
    }
    return ans;
}
