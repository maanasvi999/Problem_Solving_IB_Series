// Method 1
// using O(n) space
void Solution::arrange(vector<int> &A) {
    int n=A.size();
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=A[A[i]];
    }
    
    for(int i=0;i<n;i++)
    {
        A[i]=temp[i];
    }
}

// Method -2
// without using O(n) space
void Solution::arrange(vector<int> &A) {
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        A[i] = (A[A[i]]%n)*n + A[i];
    }
    
    for(int i=0;i<n;i++)
    {
        A[i]=(A[i]/n);
    }
}
