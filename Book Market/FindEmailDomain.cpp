std::string findEmailDomain(std::string address) {
    int i = address.size()-1;
    while(address[i] != '@'){
        --i;
    }
    return address.substr(i+1);
}


