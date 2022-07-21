    long long int count(int S[], int m, int n) {
        long long matrix[m+1][n+1];
        for(int i=0;i<=n;i++) matrix[0][i]=0;
        for(int i=1;i<=m;i++) matrix[i][0]=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(j>=S[i-1]) matrix[i][j]=matrix[i-1][j]+matrix[i][j-S[i-1]];
                else matrix[i][j]=matrix[i-1][j];
            }
        }
        return matrix[m][n];
    } 
