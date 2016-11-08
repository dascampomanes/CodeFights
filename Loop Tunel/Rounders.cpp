int rounders(int value) {
    if(value < 5) return value;
    int i = 1;
    while(value > 9){
        if(value % 10 >= 5) value += 10;
        value /= 10;
        i *= 10;
    }
    return i * value;
}