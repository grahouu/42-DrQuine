/*
	Comment
*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define PROGRAM_STR char* str="/*%c	Comment%c*/%c#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#define PROGRAM_STR char* str=%c%s%c;%c#define OPEN int fd = open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);if (fd == -1){return (1);}%c#define FT int main(void){PROGRAM_STR OPEN dprintf(fd,str,10,10,10,10,10,10,34,str,34,10,34,34,10,10,10);}%cFT%c";
#define OPEN int fd = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);if (fd == -1){return (1);}
#define FT int main(void){PROGRAM_STR OPEN dprintf(fd,str,10,10,10,10,10,10,34,str,34,10,34,34,10,10,10);}
FT
