int factorial(int n, int m, int i){
    if(m * i >= n) return m*i;
    return factorial(n, m*i, i+1);
}

int leastFactorial(int n) {
    return factorial(n, 1, 1);
}
