#include "StackPointerGetter_30Dec2022.h"
#include <stdio.h>
#include <string.h>

#define msg_write(p_message) puts(p_message "\n");

// [UPDATE: 30 December 2022] THIS ACTUALLY WORKS!:
// #define make_hello_world(p_var) char *p_var = "Hello, World!\n"; // I hate VSCode comments :sob:

// In `main()`:
/*
 make_hello_world(x);
 puts(x);
*/

int main() {
  recordStackPtr();
  printStackPtr();

  {
    recordStackPtr();

    msg_write("\tOoooh! Another stack frame!");
    // puts("\t");
    printStackPtr();
    msg_write("\tThis frame ends!");
  }

  printStackPtr();

  /*
  {
    indent_stack_frame();
    puts_stackf_indent("A new stack frame has appeared!");
    recordStackPtr();
    do_stackf_indent();
    printStackPtr();
  }

  puts_stackf_indent();
  */

  getchar();
}

// DON'T MIND ME LOL:
/*
struct stack_frame_indents {
  int indents;
} stack_frame_singleton = {0};

#define indent_stack_frame() stack_frame_singleton.indents++;
#define stack_frame_indents stack_frame_singleton.indents

void puts_stackf_indent(char *p_message) {
  char *str;
  str = calloc(stack_frame_indents + strlen(p_message), sizeof(char));

  for (int i = 0; i < stack_frame_indents; i++)
    str[i] = '\t';

  str = strcat(str, p_message);

  puts(str);
}

void do_stackf_indent() {
  for (int i = 0; i < stack_frame_indents; i++)
    puts('\t');
}
*/