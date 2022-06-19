	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max=-1;
	    int j=m-1;
	    for(int i=0;i<n;i++){
	        while (j>=0&&arr[i][j]==1){
	            j--;
	            max=i;
	        }
	    }return max;
	}
