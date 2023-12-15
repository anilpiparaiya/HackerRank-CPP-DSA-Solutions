int maximizingXor(int l, int r) {
    int value = l ^ r, result = 1;
    while (value) {
        value = value >> 1;
        result = result << 1;
    }
    return result - 1;
}
