#include <stdio.h>
#include <string.h>
#include <errno.h>

int main () {
   FILE *fp;

   // There is no exception handling in c, but can use return error code from errno. 
   fp = fopen("file.txt","r");
   if (fp == NULL) {
      printf("Error %d: %s\n", errno, strerror(errno));
   }

   printf("Test Completed");
   return 0;
}

// Run: gcc <filename>.c; ./a.exe
// Output:
// Error 2: No such file or directory
// Test Completed