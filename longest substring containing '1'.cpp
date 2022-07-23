int maxlength( string s)
{
    int ans=0,k=0;
    for(int i=0;i<s.size();i++){
        k++;
        if(s[i]==48)k=0;
        ans=max(ans,k);
    }return ans;
}
