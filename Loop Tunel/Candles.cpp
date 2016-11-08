int candles(int candlesNumber, int makeNew) {
    int res = candlesNumber;
    int leftoversNumber = 0;
    while (candlesNumber > 0 or leftoversNumber >= makeNew){
        leftoversNumber += candlesNumber % makeNew;
        candlesNumber /= makeNew;
        candlesNumber += leftoversNumber / makeNew;
        leftoversNumber %= makeNew;
        res += candlesNumber;
    }
    return res;
}
