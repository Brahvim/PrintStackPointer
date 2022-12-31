# PrintStackPointer
<ins>Yes: https://stackoverflow.com/a/20059713/13951505.<ins>

Yes:
```c
int espVal = 0;

// ...yeah, I have no knowledge of x86 or *any* 'flavor' of Assembly at all, but I'll do this!:

__asm__ {
  // Of course this is compiler-dependant!:
  mov [esp + 8], esp
  // ^^^ Move the value of the `esp` to `espVal`,
  // assuming that the first variable in the function
  // is placed by the compiler, right after the return address.
  //
  // (See [https://stackoverflow.com/questions/15563427/
  // function-prologue-and-epilogue-removed-by-gcc-optimization].
  // This may not be a good assumption since the compiler
  // might optimize according to its findings, but,
  // ...it's an assumption!).
}
```

**READ:** https://gcc.gnu.org/onlinedocs/gccint/Function-Entry.html
