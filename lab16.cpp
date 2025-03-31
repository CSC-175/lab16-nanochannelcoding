int gcf(int A, int B) {
    if (B == 0) {
        return A;
    }
    return gcf(B, A % B);
}
