 int x=0,y=0;
        if(a.length()!=b.length()){return false;}
        else{for(int i=0;i<a.length();i++){
            x=x+int(a[i]);
            y=y+int(b[i]);
        }
    }  if(x==y){return true;}
        else {return false;}
    }
