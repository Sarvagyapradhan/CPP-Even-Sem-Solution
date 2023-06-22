#include <stdio.h>
int digit_sum(long long number) {
    int digits[20],j= 0;
        while (number > 0) {
        digits[j] = number % 10;
        number /= 10;
        j++;
    }
   int sum_odd = 0;
    for (int i = j - 1; i >= 0; i -= 2) {
        sum_odd += digits[i];
    }
    return sum_odd;
}
int main() {
    int T;
    long long N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%lld", &N); 
        int sum = digit_sum(N); 
        printf("%d\n", sum);
    }
    return 0;
}