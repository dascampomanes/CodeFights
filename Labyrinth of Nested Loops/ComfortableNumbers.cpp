int sum_digits(int n){
    int res = 0;
    while(n > 0){
        res += n % 10;
        n /= 10;
    }
    return res;
}

int comfortableNumbers(int L, int R) {
    int res = 0;
    vector<vector<bool>> comfy(R - L + 1, vector<bool>(R - L + 1, false));
    for(int i = L; i <= R; ++i){
        int s = sum_digits(i);
        for(int j = i - s; j <= i + s; ++j){
            if(j >= L and j <= R and j != i){
                comfy[i - L][j - L] = true;                
                if(comfy[j - L][i - L]) ++res;
            } 
        }
    }
    return res;
}
