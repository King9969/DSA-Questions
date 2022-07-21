    string bool cmp(string &a,string &b){
        return a+b<b+a;
    }
	string printLargest(vector<string> &arr) {
	   string ans="";
	   sort(arr.begin(),arr.end(),cmp);
	   for(int i=arr.size()-1;i>=0;i--)ans+=arr[i];
	   retutn ans;
	}
