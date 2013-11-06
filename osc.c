#include <stdio.h>

int main(int argc, char** argv) {
    int i = 0;
    char wave[129];
    for(int j = 0; j < 128; j++) {
        wave[j] = ' ';
    }
    
    wave[128] = 0;
    
    while (!feof(stdin)) {
        wave[64] = '|';
        wave[32] = '[';
        wave[96] = ']';
        unsigned char c;
        i++;
        scanf("%c", &c);
        
        printf("\n");
        
        int rv = (c/2);
        int initial = c;
        wave[rv] = '%';

        printf("[%s] ", wave);
        wave[rv] = ' ';
        if (rv > 96 || rv < 32) {
            printf("\033[01;31m%d\033[00m RED", rv);
        } else {
            printf("%d", initial);
        }
    }

    return 0;
}
