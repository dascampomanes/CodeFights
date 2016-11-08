int mirrorBits(int a) {
    string kek = std::bitset<40>(a).to_string();
    kek = kek.substr(kek.find('1'));
    std::reverse(kek.begin(), kek.end());
    return std::bitset<40>(kek).to_ulong();
}
