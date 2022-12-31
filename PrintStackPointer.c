#include <stdio.h>

#define get_stack_ptr(p_varName)                                                                   \
  void *p_varName;                                                                                 \
  p_varName = &p_varName;

// Convention note: `lower_snake_case` for "function macros", otherwise, `UPPER_SNAKE_CASE`.
// (`camelCase` for functions, hahaha!...)

int main(int p_argCount, char const *p_argValues[]) {
  get_stack_ptr(stackPtr);
  printf("Stack pointer: `%d`!\n", stackPtr);
  return 0;
}
