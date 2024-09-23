#include <stdio.h>
#include <string.h>

int romanToDecimal(const char *roman) {
    int result = 0;
    int i = 0;
    int len = strlen(roman);

    while (i < len) {
        if (i + 1 < len && roman[i] == 'I' && roman[i + 1] == 'V') {
            result += 4;
            i += 2;
        } else if (i + 1 < len && roman[i] == 'I' && roman[i + 1] == 'X') {
            result += 9;
            i += 2;
        } else if (i + 1 < len && roman[i] == 'X' && roman[i + 1] == 'L') {
            result += 40;
            i += 2;
        } else if (i + 1 < len && roman[i] == 'X' && roman[i + 1] == 'C') {
            result += 90;
            i += 2;
        } else if (i + 1 < len && roman[i] == 'C' && roman[i + 1] == 'D') {
            result += 400;
            i += 2;
        } else if (i + 1 < len && roman[i] == 'C' && roman[i + 1] == 'M') {
            result += 900;
            i += 2;
        } else {
            if (roman[i] == 'I') {
                result += 1;
            } else if (roman[i] == 'V') {
                result += 5;
            } else if (roman[i] == 'X') {
                result += 10;
            } else if (roman[i] == 'L') {
                result += 50;
            } else if (roman[i] == 'C') {
                result += 100;
            } else if (roman[i] == 'D') {
                result += 500;
            } else if (roman[i] == 'M') {
                result += 1000;
            }
            i++;
        }
    }

    return result;
}

void decimalToRoman(int number, char *roman) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;

    while (number > 0) {
        while (number >= values[i]) {
            strcat(roman, symbols[i]);
            number -= values[i];
        }
        i++;
    }
}

int main() {
    char roman[20];
    int number;

    printf("Enter a Roman numeral: ");
    fgets(roman, 20, stdin);
    roman[strcspn(roman, "\n")] = '\0';

    number = romanToDecimal(roman);
    printf("The decimal equivalent is: %d\n", number);

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    decimalToRoman(number, roman);
    printf("The Roman equivalent is: %s\n", roman);

    return 0;
}
