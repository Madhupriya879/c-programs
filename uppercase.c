#include <stdio.h>

int main() {
    char str[1001];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i]);
        }
        i++;
    }