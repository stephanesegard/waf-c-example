#include <stdio.h>

#include "liba/liba.h"
#include "libb/libb.h"

void libb_hello() {
  fprintf(stdout, "%s\n", "about to say hello from liba...");
  liba_hello();
  fprintf(stdout, "%s\n", "about to say hello from liba... [done]");

  fprintf(stdout, "%s\n", "hello from libb");
}

void libb_goodbye() {
  fprintf(stdout, "%s\n", "about to say goodbye from liba...");
  liba_goodbye();
  fprintf(stdout, "%s\n", "about to say goodbye from liba... [done]");

  fprintf(stdout, "%s\n", "Goodbye from libb");
}

void libb_happy() {
  fprintf(stdout, "%s\n", "about to say goodbye from liba...");
  liba_goodbye();
  fprintf(stdout, "%s\n", "about to say goodbye from liba... [done]");

  fprintf(stdout, "%s\n", "Goodbye from libb");
}

/* EOF */
