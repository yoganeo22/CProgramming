#include <stdio.h>
#include <stdlib.h>

void writeToFile();
void readFromFile();

int main(){
    FILE *pF;

    writeToFile(pF);
    readFromFile(pF);

    return 0;
}

void writeToFile(FILE *pF){
    pF = fopen("test.txt", "w");    // w=write, r=read. a=append
    fprintf(pF, "Testing by writing to file");

    fclose(pF);
}

void readFromFile(FILE *pF){
    pF = fopen("test.txt", "r");    // w=write, r=read. a=append
    char buffer[255];

    if(pF == NULL)
    {
        printf("Error %d: %s\n", errno, strerror(errno));
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);
}

// Run: gcc <filename>.c; ./a.exe
// Output:
// Testing by writing to file