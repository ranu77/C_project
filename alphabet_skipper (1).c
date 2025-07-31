#include <stdio.h>

int main() {
    char ch = 'a';

    do {
        printf("%c", ch);
        ch += 4;
        if (ch <= 'z') {
            printf(", ");
        }
    } while (ch <= 'z');

    return 0;
}
