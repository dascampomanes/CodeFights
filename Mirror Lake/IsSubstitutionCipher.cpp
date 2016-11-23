bool isSubstitutionCipher(std::string string1, std::string string2) {
    vector<int> cipher(26, -1);
    vector<bool> taken(26, false);
    for(int i = 0; i < string1.length(); ++i){
        int pos1 = string1[i] - 'a';
        int pos2 = string2[i] - 'a';
        cout << pos1 << " " << pos2 << endl;
        if(cipher[pos1] == -1){
            if(taken[pos2] and cipher[pos1] != pos2) return false;
            cipher[pos1] = pos2;
            taken[pos2] = true;
        }
        else{
            if(cipher[pos1] != pos2) return false;
        }
        for(int i = 0; i < 4; ++i) cout << cipher[i] << " ";
        cout << endl;
    }
    return true;
}