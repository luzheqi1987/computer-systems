#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  unsigned char buf[sizeof(struct in_addr)];
  char str[INET_ADDRSTRLEN];

  unsigned char org1[4] = {0x0, 0x0, 0x0, 0x0};
  const char *pp1 = inet_ntop(AF_INET, org1, str, INET_ADDRSTRLEN);
  printf("%s\n", str);

  unsigned char org2[4] = {0xff, 0xff, 0xff, 0xff};
  const char *pp2 = inet_ntop(AF_INET, org2, str, INET_ADDRSTRLEN);
  printf("%s\n", str);

  unsigned char org3[4] = {0x7f, 0x0, 0x0, 0x1};
  const char *pp3 = inet_ntop(AF_INET, org3, str, INET_ADDRSTRLEN);
  printf("%s\n", str);

  int p1 = inet_pton(AF_INET, "255.188.160.121", buf);
  for (int i = 0; i < sizeof(struct in_addr); i++) {
    printf("%02x", buf[i]);
  }
  printf("\n");
  p1 = inet_pton(AF_INET, "64.12.149.13", buf);
  for (int i = 0; i < sizeof(struct in_addr); i++) {
    printf("%02x", buf[i]);
  }
  printf("\n");
  p1 = inet_pton(AF_INET, "205.188.146.23", buf);
  for (int i = 0; i < sizeof(struct in_addr); i++) {
    printf("%02x", buf[i]);
  }
  printf("\n");
  p1 = inet_pton(AF_INET, "255.255.255.255", buf);
  for (int i = 0; i < sizeof(struct in_addr); i++) {
    printf("%02x", buf[i]);
  }
  printf("\n");
  return 0;
}