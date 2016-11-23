int stringsConstruction(std::string A, std::string B) {
    vector<int> times(26);
    vector<int> times2(26);
    for(int i = 0; i < A.length(); ++i){
        ++times[A[i] - 'a'];
    }
    cout << endl;
    for(int i = 0; i < B.length(); ++i){
        ++times2[B[i] - 'a'];
    }
    int min = -1;
    for(int i = 0; i < times.size(); ++i){
        if(times[i] > 0){
            if(min == -1 or times2[i] / times[i] < min) min = times2[i] / times[i];
        }
    }
    return min;
}