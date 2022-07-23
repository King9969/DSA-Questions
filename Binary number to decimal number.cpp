    int binary_to_decimal(string str) {
       int decimal=0, k= 0;
    for (int i = (sizeof(str)-1); i>=0; i--){
       if(str[i] == '1')
           decimal += pow(2,k);
       }
       k++;
    }
