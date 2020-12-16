#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
pid_t getpid(void);
pid_t getppid(void);

int system(const char *command);
int pid;

int main() {
   char command[256];
   pid = getpid();
   printf("PID: %d\n", pid);
   printf("command: cat /proc/%d/maps\n", pid);
   sprintf(command, "cat /proc/%d/maps", pid);
   system(command); 
   return 0;
} 
