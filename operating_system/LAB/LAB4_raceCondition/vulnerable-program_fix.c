/* vulnerable-program-fix.c */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#define DELAY 500000
int main(int argc, char * argv[]) {
char * fileName = argv[1];
char buffer[60];
int i;
FILE * fileHandler;
/* get user input */
scanf("%50s", buffer );
if (!access(fileName, W_OK)) {
/* Simulating the Delay */7
for (i = 0; i < DELAY; i++) {
int a = i ^ 2;
}
/* Hieu chinh */
/* effective user id - - > real user id value. */
seteuid(getuid());
fileHandler = fopen(fileName, "a+");
fwrite("\n", sizeof(char), 1, fileHandler);
fwrite(buffer, sizeof(char), strlen(buffer),
fileHandler);
fwrite("\n", sizeof(char), 1, fileHandler);
fclose(fileHandler);
}
else {
printf("No permission \n");
}
}
