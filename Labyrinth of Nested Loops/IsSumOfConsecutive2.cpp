int isSumOfConsecutive2(int n) {
    int res = 0;
    for(int i = 1; i <= n/2; ++i){
        int j = i;
        int sum = 0;
        while(sum <= n){
            sum += j;
            if(sum == n) ++res;
            ++j;
        }
    }
    return res;
}