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

    int value;
    int maxValue = 0;

    while(fscanf(sourceFile, "%d", &value) != EOF){
        if(value > maxValue){
            maxValue = value;
        }
    }

    printf("The maximum value in the file is: %d\n", maxValue);

    fclose(sourceFile);

    return 0;

}
