int Solution::isPalindrome(int A) {
    string temp1 = to_string(A), temp2 = to_string(A);
    
    reverse(temp1.begin(), temp1.end());
    if(temp2!=temp1)
        return 0;
    return 1;

}
