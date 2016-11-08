int number_ones_binary(int i){
    int res = 0;
    string kek = std::bitset<40>(i).to_string();
    for(int i = 0; i < kek.length(); ++i){
        if(kek[i] == '1') ++res;
    }
    return res;
}

int rangeBitCount(int a, int b) {
    int res = 0;
    for(int i = a; i <= b; ++i){
        res += number_ones_binary(i);
    }
    return res;
}