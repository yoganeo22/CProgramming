#include <stdio.h>

void sortChar(char name[], int size);
void sortNum(int num[], int size);
void printSortChar(char name[], int size);
void printSortNum(int num[], int size);

void main(){
    printf("Example of sorting an array\n");

    // #1 sorting char array
    char name[] = {'F', 'A', 'E', 'C', 'B', 'D'};
    int size = sizeof(name);
    sortChar(name, size);
    printSortChar(name, size);

    // #2 sorting number array
    int num[] = {5, 2, 8, 7, 6, 9, 1, 3, 4};
    size = sizeof(num)/sizeof(num[0]);      // 36/4 bytes = 9
    sortNum(num, size);
    printSortNum(num, size);
}

void sortChar(char name[], int size){
    char temp;
    for(int i=0; i<size - 1; i++){
        for(int j=0; j<size - 1; j++){
            if(name[j] > name[j+1]){
                temp = name[j+1];
                name[j+1] = name[j];
                name[j] = temp;
            }
        }
    }
}

void sortNum(int num[], int size){
    int temp;
    for(int i=0; i<size - 1; i++){
        for(int j=0; j<size - 1; j++){
            if(num[j] > num[j+1]){
                temp = num[j+1];
                num[j+1] = num[j];
                num[j] = temp;
            }
        }
    }
}

void printSortChar(char name[], int size){
    for(int i=0; i<size; i++){
        printf("%c", name[i]);
    }
    printf("\n");
}

void printSortNum(int num[], int size){
    for(int i=0; i<size; i++){
        printf("%d", num[i]);
    }
    printf("\n");
}

// Run: gcc <filename>.c; ./a.exe
// Output:
// Example of sorting an array
// ABCDEF
// 123456789