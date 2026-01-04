#include <stdio.h>

int main(void) {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    while (1) {
        scanf("%d", &score);

        if (score == -1)
            break;

        if (score < 0 || score > 100) {
            printf("%d(Error score)\n", score);
            continue;
        }

        if (score >= 85) {
            printf("%d(A)\n", score);
            countA++;
        } else if (score >= 75) {
            printf("%d(B)\n", score);
            countB++;
        } else if (score >= 68) {
            printf("%d(C)\n", score);
            countC++;
        } else if (score >= 55) {
            printf("%d(D)\n", score);
            countD++;
        } else {
            printf("%d(F)\n", score);
            countF++;
        }
    }

    printf("\nA(%d)\n", countA);
    printf("B(%d)\n", countB);
    printf("C(%d)\n", countC);
    printf("D(%d)\n", countD);
    printf("F(%d)\n", countF);

    return 0;
}

