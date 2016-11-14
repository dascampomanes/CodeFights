bool isMAC48Address(std::string inputString) {
    if(inputString.length() % 3 != 2) return false;
    for(int i = 0; i < inputString.length() and i/3 < 6; i += 3){
        if(inputString[i] < '0' or inputString[i] > '9' and inputString[i] < 'A' or inputString[i] > 'F') return false;
        if(inputString[i+1] < '0' and inputString[i+1] > '9' and inputString[i+1] < 'A' and inputString[i+1] > 'F') return false;
        if(i < inputString.length() - 3) if(inputString[i+2] != '-') return false;
    }
    return true;
}
