int magicalWell(int a, int b, int n) {
    if(n > 0) return a * b + magicalWell(a+1, b+1, n-1);
    return 0;
}
