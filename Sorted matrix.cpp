    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int>a;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)a.push_back(Mat[i][j]);
        }
        sort(a.begin(),a.end());
        int k=0;
            for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)Mat[i][j]=a[k++];
        }return Mat;
    }
