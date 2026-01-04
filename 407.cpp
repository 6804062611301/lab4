#include <stdio.h>

int main(void) {
    char ch;
    int cols, rows;

    scanf(" %c %d %d", &ch, &cols, &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

