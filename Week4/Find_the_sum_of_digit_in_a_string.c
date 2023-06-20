#include <stdio.h>
int main() {
    int size;
    char *str;
    int i, len, sum = 0; 
    scanf("%d", &size); 
    str = (char*)malloc(sizeof(char) * (size + 1)); 
    scanf(" %[^\n]", str); 
    len = strlen(str);
    printf("The digits present in the string is ");
    for (i = 0; i < len; i++) {
        if (isdigit(str[i])) { 
            printf("%c", str[i]); 
            sum += (str[i] - '0'); 
        }
    }
    printf("\nThe sum of digits is %d", sum);
    free(str); 
    return 0;
}