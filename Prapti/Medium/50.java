class Solution {
    // public double myPow(double x, int n) {
    //     if (n == 0) {
    //         return 1;
    //     }
    //     if (n < 0) {
    //         return 1 / myPow(x, -n);
    //     }
    //     return x * myPow(x, n - 1);

    public double myPow(double x, int n) {
        long N = n;

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        return halfPow(x, N);
    }

    double halfPow(double x, long n) {
        if (n == 0) return 1;

        double half = halfPow(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
}