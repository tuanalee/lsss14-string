#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World! 123";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", count);
    return 0;
}
