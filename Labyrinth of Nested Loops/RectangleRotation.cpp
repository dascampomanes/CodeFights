bool pointInside(double i, double j, double a, double b){  
    if((i - j + (b/2 * sqrt(2)) > 0) and ((i - j - (b/2 * sqrt(2))) < 0) and ((i + j + (a/2 * sqrt(2))) > 0) and ((i + j - (a/2 * sqrt(2))) < 0)){
        cout << i << " " << j << endl;      
        return true;
    }
    return false;
}

int rectangleRotation(int a, int b) {
    using namespace std;
    int res = 0;
    for(int i = -max(a, b); i <= max(a, b); ++i){
        for(int j = -max(a, b); j <= max(a, b); ++j){
            if(pointInside(i, j, a, b)) ++res;
        }
    }
    return res;
}
