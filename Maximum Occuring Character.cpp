    char getMaxOccuringChar(string str)
    {
       int arr[26]={0};
       for(int i=0;i<str.length();i++)arr[str[i]-'a']++;
       int max=0,res;
       for(int i=0;i<26;i++){
           if(arr[i]>max){res=i;max=arr[i];}
       }int ch=res+'a';
       return ch;
    }
