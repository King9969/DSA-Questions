	string firstAlphabet(string S)
	{
	    string ans="";
	    ans+=(S[0]);
	    for(int i=1;i<S.length();i++)if(S[i]==' ')ans+=S[i+1];
	    return ans;
	}
