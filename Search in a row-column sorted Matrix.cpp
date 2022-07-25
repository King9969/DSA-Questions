    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
       int row = n-1, col = 0;
       while(row>=0 && col < m) {
           if(matrix[row][col]==x) return true;
           else if(matrix[row][col]>x) row--;
           else col++;
       }
       return false;
    }
