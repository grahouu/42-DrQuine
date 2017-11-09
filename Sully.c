int i = 5;
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(void){
char *env=getenv("_");
if (!strstr(env, "./Sully_")) { i++; }
char buff[1000];
sprintf(buff,"Sully_%d.c",i-1);
int fd = open(buff, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR); if (fd == -1){return (1);}
char *str = "int i = %d;%c#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <string.h>%cint main(void){%cchar *env=getenv(%c_%c);%cif (!strstr(env, %c./Sully_%c)) { i++; }%cchar buff[1000];%csprintf(buff,%cSully_%%d.c%c,i-1);%cint fd = open(buff, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR); if (fd == -1){return (1);}%cchar *str = %c%s%c;%cdprintf(fd,str,i-1,10,10,10,10,10,10,10,34,34,10,34,34,10,10,34,34,10,10,34,str,34,10,10,34,34,10,10,34,34,10,10,10);%csprintf(buff,%cclang -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d%c,i-1,i-1);%csystem(buff);%cif (i > 1){sprintf(buff,%c./Sully_%%d%c,i-1);system(buff);}%creturn (0);%c}%c";
dprintf(fd,str,i-1,10,10,10,10,10,10,10,34,34,10,34,34,10,10,34,34,10,10,34,str,34,10,10,34,34,10,10,34,34,10,10,10);
sprintf(buff,"clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d",i-1,i-1);
system(buff);
if (i > 1){sprintf(buff,"./Sully_%d",i-1);system(buff);}
return (0);
}
