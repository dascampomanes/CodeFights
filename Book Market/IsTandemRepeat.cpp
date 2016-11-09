bool isTandemRepeat(std::string inputString) {
    return inputString.substr(0, (inputString.length() / 2)) == inputString.substr((inputString.length() / 2));
}


