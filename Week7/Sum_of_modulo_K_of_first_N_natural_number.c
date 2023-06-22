#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    int K[T], N[T];
    for (int i = 0; i < T; i++) {
        scanf("%d%d", &K[i], &N[i]);
    }
    for (int i = 0; i < T; i++) {
        int sum = 0;
        for (int  j= 1; j <= N[i]; j++) {
            sum += j % K[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}