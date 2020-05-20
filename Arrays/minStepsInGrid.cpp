int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps=0;
    int n=A.size();
    for(int i=1;i<n;i++)
    {
        int X=abs(A[i]-A[i-1]);
        int Y=abs(B[i]-B[i-1]);
        steps+=abs(X-Y)+min(X,Y);
    }
    return steps;
}
