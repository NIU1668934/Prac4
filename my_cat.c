#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>




int main (){
int fd;
int bytes;
char a[50];
char buff[100];


printf("Quin arxiu vols obrir?: ");
scanf("%s", a);

fd=open(a, O_RDONLY);

if (fd==-1){
printf("L'arxiu no existeix\n");
}

else{
bytes=read(fd, buff, 100);
buff[bytes]='\0';
printf("%s\n", buff);
int close( int fd);
}

return 0;
}