int numDivisors(int n){
    if(n == 1) return 1;
    int res = 2;
    for(int i = 2; i <= n/2; ++i){
        if(n % i == 0) ++res;
    }
    return res;
}

std::vector<int> weakNumbers(int n) {
    using namespace std;
    vector<int> res(2);    
    vector<int> div(n+1, 0);
    int maxdiv = 0;
    for(int i = 1; i <= n; ++i){
        div[i] = numDivisors(i);
        if(div[i] > maxdiv) maxdiv = div[i];
    }
    vector<int> divaux(maxdiv+1, 0);
    vector<int> weak(n+1, 0);
    int maxweak = 0;
    int nummaxweak = 0;
    for(int i = 1; i <= n; ++i){
        ++divaux[div[i]];
        for(int j = div[i]+1; j <= maxdiv; ++j){
            weak[i] += divaux[j];
        }
        if(weak[i] > maxweak){
            maxweak = weak[i];
            nummaxweak = 1;
        } 
        else if(weak[i] == maxweak) ++nummaxweak;
    }
    return vector<int> {maxweak, nummaxweak};
}
