    int inSequence(int A, int B, int C){
        if(C==0)return A==B;
        if(A==B)return 1;
        if((A-B)%C==0)return B>A^C<0;
        else return 0;
    }
