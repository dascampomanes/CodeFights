bool comparator (int i,int j) {
    return (i>j); 
}

bool is_mapping_possible(string s, int k){
    vector<int> kappear(10, false);
    vector<int> sappear(26, false);
    for(int i = 0; i < s.length(); ++i){
        ++sappear[s[i] - 'a'];
    }
    while(k > 0){
        ++kappear[k%10];
        k /= 10;
    }
    sort(kappear.begin(), kappear.end(), greater<int>());
    sort(sappear.begin(), sappear.end(), greater<int>());
    for(int i = 0; i < 10; ++i){
        if(kappear[i] != sappear[i]) return false;
        if(kappear[i] == 0) break;
    }
    return true;
}

int constructSquare(std::string s) {
    int min = pow(10, s.length()-1);
    int res = -1;
    for(int k = sqrt(min); k*k < min*10; ++k){
        if(is_mapping_possible(s, k*k)) res = k*k;
    }
    return res;
}