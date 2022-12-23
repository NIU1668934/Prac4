#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>




int main (){
int fd;
int desc;
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
desc=open("copia.fi", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU );
int close( int fd);
write(desc, buff, 100);
int close( int desc);
}

return 0;
}