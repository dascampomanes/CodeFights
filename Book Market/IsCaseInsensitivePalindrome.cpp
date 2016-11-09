bool isCaseInsensitivePalindrome(std::string inputString) {
    for(int i = 0; i < inputString.size()/2; ++i){
        int pos = inputString.size()-1-i;
        if(inputString[i] < 'a') inputString[i] += ('a' - 'A');
        if(inputString[pos] < 'a') inputString[pos] += ('a' - 'A');
        if(inputString[i] != inputString[pos]) return false;
    }
    return true;
}


