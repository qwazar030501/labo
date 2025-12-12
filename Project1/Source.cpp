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

