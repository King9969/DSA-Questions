    int binary_to_decimal(string str) {
       int decimal=0, k= 0;
    for (int i = str.length()-1; i>=0; i--){
       if(str[i] == 49)decimal += pow(2,k);
       k++;
       }
       return decimal;
    }
