std::string properNounCorrection(std::string noun) {
    if(noun[0] > 'Z') noun[0] -= ('a' - 'A');
    for(int i = 1; i < noun.length(); ++i){
        if(noun[i] < 'a') noun[i] += ('a' - 'A');
    }
    return noun;
}

