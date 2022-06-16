    stack<char>m;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{'||s[i]=='('||s[i]=='['){m.push(s[i]);}
    
    else { if(!m.empty()){
            if((s[i]==')'&& m.top()=='(')||(s[i]=='}'&& m.top()=='{')||(s[i]==']'&& m.top()=='[')){m.pop();}
            else{return false;}
        }
        else {return false;}
    }
    }
    if(m.empty())return true;
    else return false;
