#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]) {
    if(argc > 2) {
        printf("Wrong number of arguments!");
        return 1;
    }
    char *fileName;
    fileName = argv[1];
    FILE *fi;
    fi = fopen(fileName, "r");
    if(fi == NULL)
    {
        printf("Can't open File!");
        return 1;
    }
    int bufferLength = 255, i = 1;
    char buffer[bufferLength];
    while(fgets(buffer, bufferLength, fi)) {
        printf("%d %s\n", i++, buffer);
    }
}