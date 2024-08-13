#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;

    // Specify the source file name
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Specify the destination file name
    printf("Enter the destination file name: ");
    scanf("%s", destFileName);

    // Open the destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error creating destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
