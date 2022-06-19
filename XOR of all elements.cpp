    vector<int> getXor(vector<int> A, int N)
    {   int a;
        for(int i=0;i<N;i++) a^=A[i];
        for(int i=0;i<N;i++)A[i]=a^A[i];
        return A;
    }
