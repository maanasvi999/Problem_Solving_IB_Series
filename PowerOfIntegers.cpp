int Solution::isPower(int A) {
    if(A==0) return 0;
    
    for(int i=1;i*i<=A;i++)
    {
        int p = log(A)/log(i);
        if (A == pow(i,p))
        {
            return true;
        }
    }
    
    return false;
}
