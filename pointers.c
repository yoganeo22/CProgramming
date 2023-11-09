#include <stdio.h>

void main(){
    int age = 21;
    int *pAge = &age; //&age = address of variable age
                      //*pAge = value inside address of variable age

    printf("address of age: %p\n", &age);
    printf("pAge: %p\n", pAge);
    printf("value *pAge: %d\n", *pAge);
}

// Run: gcc <filename>.c; ./a.exe
// Output:
// address of age: 000000A06B5FFC74
// pAge: 000000A06B5FFC74
// value *pAge: 21