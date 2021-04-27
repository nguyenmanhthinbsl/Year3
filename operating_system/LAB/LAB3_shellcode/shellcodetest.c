/*shellcodetest.c*/
#include <stdio.h>
unsigned char code[] = “chèn shellcode vào đây!";
int main(int argc, char **argv)
{
int (*func)();
func = (int (*)()) code;
(int)(*func)();
}
