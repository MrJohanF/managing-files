#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numbers = NULL; // Pointer to the first element of the array
    int count = 0;
    int input;
    int size = 0;


    printf("Enter numbers (type -9999 to stop):\n");

    while(1){
        scanf("%d", &input);

        if(input == -9999){
            break;
        }

        // If the array is full, resize it
        if(count == size){
            size += 10;
            numbers = (int *)realloc(numbers, size * sizeof(int));

            if(numbers == NULL){
                printf("Memory allocation failed\n");
                return 1;
            }
        }

        numbers[count] = input;
        count++;
    }



    FILE *fp;
    char sourceFile[100];

    printf("Please enter the name of the file you want to write to: ");
    scanf("%s", sourceFile);

    fp = fopen(sourceFile, "w+");

    if (fp != NULL) {
        for (int i = 0; i < count; i++) {
            fprintf(fp, "%d", numbers[i]);
            if(i == count - 1){
                fprintf(fp, "\n");
            } else {
                fprintf(fp, " ");
            }
        }
    fclose(fp);
    }

    
}