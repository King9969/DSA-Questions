    int closestNumber(int N , int M) {
    int q=N/M, n1=M*q, n2=M*(q+1);
	  if(N*M<0) n2=(M*(q-1));
	  return abs(N-n2) > abs(N-n1) ? n1 : n2;
    }
