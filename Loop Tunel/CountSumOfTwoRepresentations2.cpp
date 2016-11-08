void counthahaha(int &res, int n, int l, int r){
    if(l*2 <= n and n-l <= r) ++res;
    if((l+1)*2 <= n) counthahaha(res, n, l+1, r);
}

int countSumOfTwoRepresentations2(int n, int l, int r) {
    int res = 0;
    counthahaha(res, n, l, r);
    return res;
}
