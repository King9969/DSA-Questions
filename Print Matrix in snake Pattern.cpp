    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
      vector<int>ans;
      bool s=true;
      for(int i=0;i<matrix.size();i++){
          if(s==true){
              for(int j=0;j<matrix.size();j++)ans.push_back(matrix[i][j]);
              s=!s;
          }
          else if(s==false){
              for(int j=0;j<matrix.size();j++)ans.push_back(matrix[i][matrix.size()-1-j]);
              s=!s;
          }
      }return ans;
    }
