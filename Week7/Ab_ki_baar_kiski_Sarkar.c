#include <stdio.h>
int findLargestParty(int party[], int H) {
    int maxParty = -1;
    int maxCount = 0;
    int count[10001] = {0};
    for (int i = 0; i < H; i++) {
        count[party[i]]++;
        if (count[party[i]] > maxCount) {
            maxCount = count[party[i]];
            maxParty = party[i];
        }
    }
    if (maxCount > H / 2)
        return maxParty;
    else
        return -1; 
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int H;
        scanf("%d", &H);
        int party[H];
        for (int i = 0; i < H; i++) {
            scanf("%d", &party[i]);
        }
        int largestParty = findLargestParty(party, H);
        if (largestParty != -1)
            printf("%d\n", largestParty);
        else
            printf("void\n");
    }
    return 0;
}