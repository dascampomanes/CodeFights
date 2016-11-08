int appleBoxesAux(int k){
    if(k == 1) return -1;
    if(k % 2 == 0) return k * k + appleBoxesAux(k-1);
    return -(k * k) + appleBoxesAux(k-1);
}

int appleBoxes(int k) {
    return appleBoxesAux(k);
}
