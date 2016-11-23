int createAnagram(std::string s, std::string t) {
    vector<int> appear(26, 0);
    vector<int> appear2(26, 0);
    for(int i = 0; i < s.length(); ++i){
        ++appear[s[i] - 'A'];
        ++appear2[t[i] - 'A'];
    }
    int res = 0;
    for(int i = 0; i < 26; ++i){
        res += max(0, appear2[i] - appear[i]);
    }
    return res;
}