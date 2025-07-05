#include <stdio.h>

int main() {
    int num;
    printf("Enter the number you want to check if it's divisible by 97 or not: ");
    scanf("%d", &num);

    if (num % 97 == 0) {
        printf("It's divisible by 97.\n");
    } else {
        printf("It's not divisible by 97.\n");
    }

    return 0;
}
