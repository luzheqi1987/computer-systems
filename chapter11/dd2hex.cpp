#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  unsigned char buf[sizeof(struct in_addr)];
  int p1 = inet_pton(AF_INET, argv[1], buf);
  printf("0x");
  for (int i = 0; i < sizeof(struct in_addr); i++) {
    printf("%02x", buf[i]);
  }
  printf("\n");
  return 0;
}