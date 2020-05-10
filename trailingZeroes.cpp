int Solution::trailingZeroes(int A) {
    
    int count=0, i=5;
    while(A/i>=1)
    {
        count+= A/i;
        i*=5;
    }
    return count;
}
