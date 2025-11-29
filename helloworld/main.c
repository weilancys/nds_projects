#include <nds.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  consoleDemoInit();
  iprintf("\x1b[32mHello World!\n");
  iprintf("press START to exit.\n\x1b[39m");

  while (pmMainLoop()) {
    swiWaitForVBlank();
    scanKeys();
    int pressed = keysDown();
    if (pressed & KEY_START)
      break;
  }

  return 0;
}
