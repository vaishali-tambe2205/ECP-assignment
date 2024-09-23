#include <stdio.h>
#include <ctype.h>

// a. size_t strlen(const char* str);
size_t my_strlen(const char* str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// b. char* strcpy(char *dest, const char *src);
char* my_strcpy(char *dest, const char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++) != '\0');
    return original_dest;
}

// c. char* strcat(char *dest, const char *src);
char* my_strcat(char *dest, const char *src) {
    char *original_dest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while ((*dest++ = *src++) != '\0');
    return original_dest;
}

// d. int strcmp(const char *str1, const char *str2);
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

// e. int stricmp(const char *str1, const char *str2);
int my_stricmp(const char *str1, const char *str2) {
    while (*str1 && (tolower(*str1) == tolower(*str2))) {
        str1++;
        str2++;
    }
    return tolower(*(unsigned char*)str1) - tolower(*(unsigned char*)str2);
}

// f. char* strrev(char* str);
char* my_strrev(char* str) {
    if (!str) return NULL;
    int i = 0;
    int j = my_strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

// g. char* strchr(const char *str, int ch);
char* my_strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

char* my_strstr(const char *str, const char *substr) {
    if (!*substr) return (char*)str;
    
    while (*str) {
        const char *h = str;
        const char *n = substr;
        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }
        if (!*n) return (char*)str;
        str++;
    }
    return NULL;
}

int main() 
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "hello";

    printf("strlen(\"%s\"): %zu\n", str1, my_strlen(str1));

    char dest[50];
    printf("strcpy result: %s\n", my_strcpy(dest, str1));

    printf("strcat result: %s\n", my_strcat(dest, str2));

    printf("strcmp(\"%s\", \"%s\"): %d\n", str1, str2, my_strcmp(str1, str2));
    printf("stricmp(\"%s\", \"%s\"): %d\n", str1, str3, my_stricmp(str1, str3));

    printf("strrev(\"%s\"): %s\n", str1, my_strrev(str1));

    printf("strchr(\"%s\", 'o'): %s\n", str2, my_strchr(str2, 'o'));

    printf("strstr(\"%s\", \"or\"): %s\n", str2, my_strstr(str2, "or"));

    return 0;
}
