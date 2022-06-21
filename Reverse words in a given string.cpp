    string reverseWords(string S) { 
        stack<string>s;
        string temp ="";
        for(int i=0;i<S.length();i++){
            if(S[i]=='.'){
                s.push(temp);
                temp ="";
            } 
            else temp +=S[i];
        }s.push(temp);
        string ans ="";
        ans+=s.top();s.pop();
        while(!s.empty()){
            ans+='.'+s.top();
            s.pop();}
   return ans; } 
