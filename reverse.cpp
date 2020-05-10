int Solution::reverse(int A) {

    int rev=0;
    while(A!=0)
    {
        int r = A%10;
        int temp = rev*10 +r;
        if(temp/10!=rev)
        {
            return 0;
        }
        rev=rev*10 +r;
        A=A/10;
    }
    return rev;
}
