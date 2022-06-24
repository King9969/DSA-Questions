    bool isRotated(string str1, string str2)
    {
        int f=1,f1=1,n=str1.length();
        for(int i=0;i<n;i++){
            if(str1[(i+2)%n]!=str2[i])f=0;
        }
        for(int i=0;i<n;i++){
            if(str1[i]!=str2[(i+2)%n])f1=0;
        }
        if(f||f1)return true;
        return false;
    }
