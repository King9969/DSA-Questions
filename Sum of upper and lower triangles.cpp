    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int u=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)u+=matrix[i][j];
        }ans.push_back(u);
        u=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)u+=matrix[j][i];
        }ans.push_back(u);
        return ans;
    }
