bool isPower(int n) {
    int i = 2;
    while(i * i <= n){
        for(int m = i; m <= n; m *= i){
            if(m == n) return true;
        } 
        ++i;
    }
    return n == 1;
}