int obtainSquareDigits(int value){
    int res = 0;
    while(value > 0){
        res += pow(value%10, 2);
        value /= 10;
    }
    return res;
}

int squareDigitsSequence(int a0) {
    using namespace std;
    set<int> s;
    s.insert(a0);
    int next = obtainSquareDigits(a0);
    int res = 2;
    while(s.find(next) == s.end()){
        s.insert(next);
        next = obtainSquareDigits(next);
        ++res;
    }
    return res;
}
