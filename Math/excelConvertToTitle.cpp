string Solution::convertToTitle(int A) {
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans = "";
    while(A>0)
    {
        A = A-1;
        int r = A%26; 
        ans = str[r] + ans;
        A = A/26;
    }
    
    return ans;
}
