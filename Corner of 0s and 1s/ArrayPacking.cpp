int arrayPacking(std::vector<int> a) {
    string res;
    for(int i = a.size() - 1; i >= 0; --i){
        res.append(std::bitset<8>(a[i]).to_string());
    }
    return std::bitset<40>(res).to_ulong();
}
