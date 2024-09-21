#include <stdio.h>

int print_char(char ch, int times) {
    for (int i = 1; i <= times; i++) {
        printf("%c\n", ch);
    }
    return 1;
}

int main() {
    char ch;
    int times;

    printf("Enter the character:\n");
    scanf("%c", &ch);

    printf("How many times you want to enter the character:\n");
    scanf("%d", &times);

    print_char(ch, times);

    return 0;
}
