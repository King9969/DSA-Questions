 for (auto i:str1) c[i-97]++;
    for (auto i:str2) c[i-97]--;
    return abs(c).sum(); 
