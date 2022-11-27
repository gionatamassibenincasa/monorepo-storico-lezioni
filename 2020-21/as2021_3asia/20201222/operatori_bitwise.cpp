#include <cstdio>

int main() {
  unsigned char
    sette  =  7, //< 00000111
    nove   =  9, //< 00001001
    undici = 11, //< 00001011
    sedici = 16, //< 00010000
    r;

  printf("%d & %d = %d\n", 7, 9, 7 & 9);
  printf("%d & %d = %d\n", 7, 11, 7 & 11);
  printf("%d & %d = %d\n", 7, 16, 7 & 16);

  printf("%d | %d = %d\n", 7, 9, 7 | 9);
  printf("%d | %d = %d\n", 7, 11, 7 | 11);
  printf("%d | %d = %d\n", 7, 16, 7 | 16);

  printf("%d ^ %d = %d\n", 7, 9, 7 ^ 9);
  printf("%d ^ %d = %d\n", 7, 11, 7 ^ 11);
  printf("%d ^ %d = %d\n", 7, 16, 7 ^ 16);

  printf("~%d = %d\n", sette, r = ~sette);
  printf("~%d = %d\n", nove, r = ~nove);
  printf("~%d = %d\n", 16, r = ~sedici);

  printf("%d >> %d = %d\n", sedici, 1, sedici >> 1);
  printf("%d >> %d = %d\n", sedici, 2, sedici >> 2);
  printf("%d >> %d = %d\n", sedici, 3, sedici >> 3);
  printf("%d >> %d = %d\n", sedici, 4, sedici >> 4);
  printf("%d >> %d = %d\n", sedici, 5, sedici >> 5);

  printf("%d << %d = %d\n", sedici, 1, sedici << 1);
  printf("%d << %d = %d\n", sedici, 2, sedici << 2);
  printf("%d << %d = %d\n", sedici, 3, sedici << 3);
  printf("%d << %d = %d\n", sedici, 4, sedici << 4);
  printf("%d << %d = %d\n", sedici, 5, r = sedici << 5);

  return 0;
}
