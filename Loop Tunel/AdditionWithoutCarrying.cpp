int additionWithoutCarrying(int param1, int param2) {
    int res = 0;
    int mult = 1;
    while(param1 > 0 or param2 > 0){
        res += (((param1 % 10) + (param2 % 10)) %10) * mult;
        mult *= 10;
        param1 /= 10;
        param2 /= 10;      
    }
    return res;
}
