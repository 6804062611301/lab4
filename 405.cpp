#include <stdio.h>

int main(void) {
    char ch;
    int count;

    scanf(" %c %d", &ch, &count);

    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }

    printf("\n");
    return 0;
}

