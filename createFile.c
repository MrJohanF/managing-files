#include <stdio.h>

int main() {

    FILE *sourceFile;
    char sourceFileName[100];

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "w+");

    if (sourceFile == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fputs("When an apple fell, Newton was disturbed\n", sourceFile);
    fputs("but when he found that all apples fell,\n", sourceFile);
    fputs("it was gravitation and he was satisfied\n", sourceFile);

    printf("File created successfully.\n");

    fclose(sourceFile);

    return 0;
}
