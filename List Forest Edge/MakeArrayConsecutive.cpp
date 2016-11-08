int makeArrayConsecutive2(std::vector<int> sequence) {
    std::sort(sequence.begin(), sequence.end());
    return sequence[sequence.size()-1] - sequence[0] - sequence.size() + 1;
}