#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

pid_t getpid(void);
int pid;

int waitTen(){
    sleep(10);
    return 1;
}
int main() {
   pid = getpid();
   while(waitTen());
   return 0;
} 
