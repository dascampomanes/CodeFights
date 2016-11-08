bool isSmooth(std::vector<int> arr) {
    int kek = arr[0];
    if(arr.size() > 2){
        kek = arr[(arr.size()-1) / 2];
        if(arr.size() % 2 == 0) kek += arr[((arr.size()-1) / 2) + 1];
    }
    if(arr[0] == kek and kek == arr[arr.size()-1]) return true;
    return false;
}
