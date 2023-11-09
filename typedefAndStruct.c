#include <stdio.h>
#include <string.h>

typedef struct Player
{
    char name[12];
    int age;
}Person;

void main(){

    Person player1;
    Person player2 = {"John", 30};

    strcpy(player1.name, "Brian");
    player1.age = 21;

    printf("%s is %d years old", player1.name, player1.age);
}

// Run: gcc <filename>.c; ./a.exe
// Output:
// Brian is 21 years old. 