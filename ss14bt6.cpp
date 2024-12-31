#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[] = "Hello World";
    printf("Chuoi da khai bao: %s\n", str);
    int letter_count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { 
            letter_count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", letter_count);
    return 0;
}
