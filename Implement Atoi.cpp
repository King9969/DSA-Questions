    int atoi(string str) {
        int ans=0,flag=0;
        for(int i=0;i<str.length();i++){
          int c=str[i]-'0';
          if(c>=0&&c<=9)ans=ans*10+c;
          else if(c<0)flag++;
          else return-1;
        }if(flag==1)return ans*-1;
        else if(flag>1) return -1;
        return ans;
    }
