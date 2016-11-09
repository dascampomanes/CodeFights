std::string htmlEndTagByStartTag(std::string startTag) {
    int i = 0;
    while(startTag[i] != ' ' and startTag[i] != '>') ++i;
    return "</" + startTag.substr(1, i-1) + ">";
}

