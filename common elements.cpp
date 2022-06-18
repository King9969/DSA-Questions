 vector<int>s;
           unordered_map<int,int> m1,m2,m3;
           for(int i=0;i<n1;i++) m1[A[i]]++;
           for(int i=0;i<n2;i++) m2[B[i]]++;
           for(int i=0;i<n3;i++) m3[C[i]]++;
           for(int i=0;i<n1;i++){
               if(m1[A[i]]>0 && m2[A[i]]>0 && m3[A[i]]>0){
                   s.push_back(A[i]);
                   m1[A[i]]=0;}}
           return s;
