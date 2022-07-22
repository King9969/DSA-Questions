    string convertToRoman(int n) {
        string ones[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hndr[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thnd[4]={"","M","MM","MMM"};
        return thnd[n/1000]+hndr[(n%1000)/100]+tens[(n%100)/10]+ones[(n%10)];

    }
