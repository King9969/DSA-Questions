	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int,vector<int>,greater<int>> temp;
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        temp.push(arr[i]);
	        if(temp.size()>k){
	            temp.pop();
	        }
	    }
	    while(!temp.empty()){
	        ans.push_back(temp.top());
	        temp.pop();
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
