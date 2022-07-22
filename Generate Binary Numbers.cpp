vector<string> generate(int N)
{
	queue<string>q;
	vector<string>ans;
	q.push("1");
	for(int i=0;i<N;i++){
	    ans.push_back(q.front());
	    q.pop();
	    q.push(ans.back()+"0");
	    q.push(ans.back()+"1");
	}return ans;
}
