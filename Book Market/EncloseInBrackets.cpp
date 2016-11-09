std::string encloseInBrackets(std::string inputString) {
    inputString.insert(inputString.begin(), '(');
    inputString += ')';
    return inputString;
}

