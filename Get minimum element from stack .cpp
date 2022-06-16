 int minEle;
    stack<int> s;
    public:
    int m;

       int getMin(){if(s.empty()){return -1;} return m;}
       int pop(){if(s.empty()){return -1;}
       int t=s.top();s.pop();
       if(t<=0){int r=m;m=m-t;return r;}
       return t;}
       void push(int x){if(s.empty()){m=x;s.push(x);}
           else if(x<=m){s.push(x-m);m=x;}
       else s.push(x);
       }
