/* compiler -*- utf-8 -*-  */
#include <string.h> // strcmp
#include <stdio.h> // printf, scanf
/*
          |||||||||||||||
       +-------------------+
       |                   |
       |                   |
       |       CHIP        |
       |                   |
       |                   |
       +-------------------+
          |||||||||||||||
*/
char cmd[];

void chipemulator() {
  printf("copyright (C) 2026 cbestafera 307-cpu");
  printf("write help for see commands");
  printf("escreva help pra ver comandos");
  printf("################################");
  printf("CPU EMULATOR");
  while(1) {
    scanf(">%s", cmd);
  }
if (strcmp("help") == 0) {
    printf("[COMMAND 1]: license");
    printf("[COMMAND 2]: delete");
    printf("[COMMAND 3]: create"):
    printf("[COMMAND 4]: EmptyFile");
}
else if (strcmp("license") == 0) {
    
} 

}
