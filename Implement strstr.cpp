int strstr(string s, string x){
 int i,n;
    n = s.length();
    int m = x.length();
    for(i=0;i<n;i++){
       string req  = s.substr(i,m);
       if(req==x){
           return i;
       }
    }
    return -1;
}
