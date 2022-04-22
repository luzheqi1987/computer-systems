#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char str[INET_ADDRSTRLEN];
  char buffer[20];
  int l;
  sprintf(buffer, "%s", argv[1]);
  sscanf(buffer, "%x", &l);
  int rl = htonl(l);
  const char *pp1 = inet_ntop(AF_INET, &rl, str, INET_ADDRSTRLEN);
  printf("%s\n", str);
  return 0;
}