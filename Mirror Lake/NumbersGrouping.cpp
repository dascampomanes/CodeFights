int numbersGrouping(std::vector<int> a) {
    int res = a.size();
    sort(a.begin(), a.end());
    vector<bool> groups(100000, false);
    for(int i = 0; i < a.size(); ++i){
        groups[(a[i]-1)/10000] = true;
    }
    for(int i = 0; i < 100000; ++i) if(groups[i]) ++res;
    return res;
}
