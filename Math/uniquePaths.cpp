//Method - 1 Recursion 
int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1) return 1;
    return uniquePaths(A-1, B) + uniquePaths(A,B-1);
}

// Method 2 DP

int Solution::uniquePaths(int A, int B) {
    int arr[A][B];
    for(int i=0; i<A; i++)
    {
       arr[i][0] = 1;
    }
    
    for(int j=0;j<B;j++)
    {
        arr[0][j] = 1;
    }
    
    for(int i=1; i<A; i++)
    {
        for(int j=1;j<B;j++)
        {
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    return arr[A-1][B-1];
}

// Method - 3 using formula
//	Form = (m-1)*(n-1)!/ (m-1)!*(n-1)!	
