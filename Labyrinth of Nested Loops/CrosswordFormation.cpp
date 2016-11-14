int crosswordFormation(std::vector<std::string> words) {
    int p[] = {0, 1, 2, 3};
    int res = 0;
    do{
        string w[] = {words[p[0]], words[p[1]], words[p[2]], words[p[3]]};
        for(int i = 0; i < w[0].length(); ++i){
            for(int j = 0; j < w[1].length(); ++j){
                if(w[0][i] == w[1][j]){
                    for(int i2 = i+2; i2 < w[0].length(); ++i2){
                        for(int k = 0; k < w[2].length(); ++k){
                            if(w[0][i2] == w[2][k]){
                                for(int j2 = j+2; j2 < w[1].length(); ++j2){
                                    for(int z = 0; z < w[3].length(); ++z){
                                        if(w[1][j2] == w[3][z]){
                                            if((z + i2 - i) < w[3].size() and (k + j2 - j) < w[2].size()){
                                                if(w[3][z + i2 - i] == w[2][k + j2 - j]){
                                                    ++res;
                                                    if(i == 1 and i2 == 3 and j == 2 and j2 == 7 and k == 0 and z == 1) cout <<  "0";
                                                    if(i == 2 and i2 == 4 and j == 1 and j2 == 4 and k == 0 and z == 3) cout <<  "1";
                                                    if(i == 3 and i2 == 6 and j == 0 and j2 == 5 and k == 1 and z == 3) cout <<  "2";
                                                    if(i == 1 and i2 == 3 and j == 2 and j2 == 7 and k == 0 and z == 1) cout <<  "3";
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }while(next_permutation(p, p+4));        
    return res;
}