bool increaseNumberRoundness(int n) {
    int index = 0;
    int found = 0;
    while(n > 0){
        if(found == 0 and n % 10 != 0) ++found;
        else if(found == 1 and n % 10 == 0) ++found;
        n /= 10;
    }
    return found == 2;
}
