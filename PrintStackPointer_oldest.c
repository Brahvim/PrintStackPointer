#include "StackPointerGetter_30Dec2022.h"
#include <stdio.h>

//#define beginStackPtrGetter() { void
//#define endStackPtrGetter() }
//#define getStackPointer(x) \
//{ void *p; }

void *printStackPointer();

int main(int argc, char const *argv[]) {
  // Finally! The macros I wanted :D
  setStackPtr();
  printf("%p", stackPtr);

  // void *p; // This name can be used here,
  // {
  //   void *p = &p; // ..and here, without conflict!
  //   printStackPointer();
  // }

  /*
  // <Linus Sebastian (LinusTechTips) "I don't know what I am doing" meme goes here>:
  __asm__ {
    section .data:
      global doMyWorkPlease
    section .text:
      doMyWorkPlease:
        push
        mov eax, 1
        mov ebx, 2
        pop
  }
  */

  getchar();
  return 0;
}

// [https://stackoverflow.com/questions/20059673/print-out-value-of-stack-pointer]
void *printStackPointer() {
  void *p = &p;

  printf("stackptr: `%p`\n", p); // Part of a test to see if it's correct!
  return p;
}

void *getStackPointerFxn() {
  void *p = &p;
  return p;
}