	    s.erase(remove(s.begin(), s.end(), ' '), s.end());
	    s.erase(remove(s.begin(), s.end(), ','), s.end());
	    s.erase(remove(s.begin(), s.end(), '.'), s.end());
	     s.erase(remove(s.begin(), s.end(), ';'), s.end());
	    int l=0,h=s.length()-1;
	    for(l;l<(h/2)+1;l++){
	        if(s[l]!=s[h-l])return false;
	    }
return true;
	}
