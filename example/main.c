#include <stdio.h>

int main() { int l = 5; int C = 0; int ARRAY[l];

    printf("\nInput the array values\n");
    for (int a = 0; a<l; a++) {

        printf("Enter number %d:", a + 1);
        scanf("%d", &ARRAY[a]);
        fflush(stdin);
    }
    for (int a = 1; a<l; a++) {
        for (int a = 0; a<l; a++) {int b = a + 1;
            if(b<l) {
                if (ARRAY[a] > ARRAY[b]) {
                    C = ARRAY[a];
                    ARRAY[a] = ARRAY[b];
                    ARRAY[b] = C;
                }

            }
        }
    }
    for (int a = 0; a<l; a++) {
        printf("%d\n", ARRAY[a]);
    }

    return 0;
}
