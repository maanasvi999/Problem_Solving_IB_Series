vector<int> Solution::plusOne(vector<int> &A) {
    
    vector <int> ans;
    
    int n=A.size();
    int carry=1;
    for(int i=n-1;i>=0;i--)
    {
        int curr=A[i]+carry;
        ans.push_back(curr%10);
        carry=curr/10;
    }
    
    if(carry>0)
    {
        ans.push_back(carry);
    }
    int len=ans.size();
    
    while(true)
    {
        if(ans[len-1]==0){
            len--;
        }
        else{break;}
    }
    
    vector <int> res;
    for(int j=len-1;j>=0;j--)
    {
        res.push_back(ans[j]);
    }
    return res;
}
