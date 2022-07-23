        string UncommonChars(string A, string B)
        {
           int a[26]={0},b[26]={0};
           string ans="";
            for(int i=0;i<A.size();i++)a[A[i]-97]++;
            for(int i=0;i<B.size();i++)b[B[i]-97]++;
            for(int i=0;i<26;i++){
                if(a[i]==0&&b[i]>0)ans+=i+97;
                if(a[i]>0&&b[i]==0)ans+=i+97;
            }
            if(ans=="")return "-1";
            return ans;
        }
