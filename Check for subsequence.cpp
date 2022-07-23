    bool isSubSequence(string A, string B) 
    {
        int j,i=0;
       while(i<A.length()){
           j=B.find(A[i]);
           if(j==-1)return 0;
           B= B.substr(j+1);
           i++;
       }
       return 1;
    }
