#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int system(const char *command);

int main() {
   const char *command = "cat /proc/zoneinfo | grep -v 'nr' | grep -v 'per' | grep -v 'working' |grep -E 'pages free|Node' -A 5 ";
   system(command); 
   return 0;
} 
