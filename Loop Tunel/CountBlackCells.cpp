int diagonalTouch(double n, double m){
    if(n > m) return n + (m-1);
    return m + (n-1);
}

int gdcf(int n, int m){
    while(n != m){
        if(n > m) n -= m;
        else m -= n;
    }
    return n;
}

int countBlackCells(int n, int m) {
    int gdc = gdcf(n, m);
    return (gdc * diagonalTouch(n/gdc, m/gdc)) + ((gdc-1) * 2);
}