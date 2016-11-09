int pagesNumberingWithInk(int current, int numberOfDigits) {
    numberOfDigits -= floor(log10(current)+1);
    while(numberOfDigits >= floor(log10(current)+1)){
        numberOfDigits -= floor(log10(current)+1);
        ++current;
    }
    return current;
}
