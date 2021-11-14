#include<stdio.h>
#include<string.h>

#define ALPHABET_LEN 26
int main() {
    int cout[ALPHABET_LEN] = {0};
    char str[100];
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len;++i) {
        ++cout[str[i] - 'a'];
    }
    for (int i = 0; i <= ALPHABET_LEN; ++i) {
        if(cout[i] > 0)
            printf("%c xuat hien %d lan\n", i + 'a', cout[i]);
    }
}