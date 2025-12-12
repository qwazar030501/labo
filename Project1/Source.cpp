#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* CreateNewStringP(char* s1);

void main() {
    char s1[100];
    printf("s1=");
    fgets(s1, sizeof(s1), stdin);

    char* s2 = CreateNewStringP(s1);
    printf("s1=%s\n", s1);
    printf("s2=%s\n", s2);

    free(s2);
}
char* CreateNewStringP(char* s1) {
    int count_lower = 0;
    int len = 0;
    char* ptr = s1;
    while (*ptr != '\0') {
        if (islower(*ptr) && isalpha(*ptr)) {
            count_lower++;
        }
        len++;
        ptr++;
    }
    int new_len = len + count_lower;
    char* new_str = (char*)malloc((new_len + 1) * sizeof(char));
    char* dest = new_str;
    for (int i = 0; i < count_lower; i++) {
        *dest++ = '&';
    }
    ptr = s1;
    while (*ptr != '\0') {
        *dest++ = *ptr++;
    }
    *dest = '\0';
    return new_str;
}
