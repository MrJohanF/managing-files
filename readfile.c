#include <stdio.h>

int main(){

    FILE *sourceFile;
    char sourceFileName[100];

    printf("Enter the source file name: ");

    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        printf("%c", ch);
    }

    fclose(sourceFile);

    return 0;

}

