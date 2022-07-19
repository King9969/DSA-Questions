    int romanToDecimal(string &str) {
    unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int sum = 0;
        if(str.length() == 1)return mp[str[0]];
        for(int i=0; i<str.length(); i++){
            if(i < str.length()-1 && mp[str[i]] < mp[str[i+1]])sum -= mp[str[i]];
            else sum += mp[str[i]]; 
        }
        return sum;
    }
