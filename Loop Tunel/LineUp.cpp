int lineUp(std::string commands) {
    int res = 0;
    int kek = 0;
    for(int i = 0; i < commands.length(); ++i){
        if(commands[i] == 'L') --kek;
        if(commands[i] == 'R') ++kek;
        if(kek == -2 or kek == 2 or kek == 0){
            kek = 0;
            ++res;
        }
    }
    return res;
}