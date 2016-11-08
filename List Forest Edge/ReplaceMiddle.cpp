std::vector<int> replaceMiddle(std::vector<int> arr) {
    if(arr.size() % 2 != 0) return arr;
    int mid = (arr.size()-1)/2;
    arr[mid] += arr[mid + 1];
    arr.erase(arr.begin() + mid + 1);
    return arr;
}