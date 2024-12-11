#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    int inWord = 0;

    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            inWord = 0; 
        } else {
            if (inWord == 0) {
                count++; 
                inWord = 1;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
