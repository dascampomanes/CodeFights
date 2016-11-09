int pagesNumberingWithInk(int current, int numberOfDigits) {
    while(numberOfDigits >= floor(log10(current)+1)){
        int portion = pow(10, floor(log10(current)+1)) - current;
        if(portion * floor(log10(current)+1) <= numberOfDigits){
            numberOfDigits -= portion * floor(log10(current)+1)           ;
            current = pow(10, floor(log10(current)+1));
        }
        else{
            current += (numberOfDigits / (floor(log10(current)+1))) - 1;
            break;
        }
    }
    return current;
}