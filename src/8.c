
void calculate_fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    else {
        return calculate_fibonacci(n-1) + calculate_fibonacci(n-2);
    }
}