#include <stdio.h>

int main() {

    int i;

    for(i = 0; i <= 200; i++) {

        if(i % 2 == 0) {
            printf("%d - Par\n", i);
        }
        else {
            printf("%d - Impar\n", i);
        }

    }

    return 0;
}