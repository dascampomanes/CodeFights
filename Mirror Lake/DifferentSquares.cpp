int differentSquares(std::vector<std::vector<int>> matrix) {
    int res = 0;
    set<int> s;
    for(int i = 0; i < matrix.size()-1; ++i){
        for(int j = 0; j < matrix[0].size() - 1; ++j){
            int num = (matrix[i][j] * 1000) + (matrix[i][j+1] * 100) + (matrix[i+1][j] * 10) + (matrix[i+1][j+1]);
            if(s.find(num) == s.end()) ++res;
            s.insert(num);
        }
    }
    return res;
}
