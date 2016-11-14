bool isUnstablePair(std::string filename1, std::string filename2) {
    bool first = filename1 < filename2;
    transform(filename1.begin(), filename1.end(), filename1.begin(), ::toupper);
    transform(filename2.begin(), filename2.end(), filename2.begin(), ::toupper);
    if(first != filename1 < filename2) return true;
    transform(filename1.begin(), filename1.end(), filename1.begin(), ::tolower);
    transform(filename2.begin(), filename2.end(), filename2.begin(), ::tolower);
    if(first != filename1 < filename2) return true;    
    return false;
}