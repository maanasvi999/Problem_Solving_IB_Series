int Solution::cpFact(int A, int B) {
    int val= __gcd(A,B);
    if(val ==1)
        return A;
    else
    {
        while(val!=1)
        {
            val = __gcd(A,B);
            A=A/val;
        }
        return A;
    }
}
