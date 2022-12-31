//#define stackPtr() "void *p"__LINE__ = "&p"__LINE__;
//#define getStackPointer #"p"(__LINE__ - 1)

// LIE:
// ~~The `#` operator ALSO converts strings to code! YIPPEE!~~

// TRUTH:
// ..it doesn't, and there is NO way to do so...
// ..perhaps a compiler extension? :D?
// ..perhaps a program I make to do so?! :D?!

// -----------------------------------------------------------

// For now, at least, we have these!:

// DO NOT CALL MORE THAN ONCE WITHIN THE SAME PAIR OF CURLY BRACKETS!
// ALWAYS CALL BEFORE `setStackPtr()`!
#define defineStackPtr() void *stackPtr;

// DO NOT CALL MORE THAN ONCE WITHIN THE SAME PAIR OF CURLY BRACKETS!
// ALWAYS CALL AFTER `setStackPtr()`!
#define setStackPtr() stackPtr = &stackPtr

// DO NOT CALL MORE THAN ONCE WITHIN THE SAME PAIR OF CURLY BRACKETS!
#define recordStackPtr()                                                                           \
  defineStackPtr();                                                                                \
  setStackPtr();

// Utility to print the current stack pointer PROVIDED `recordStackPtr()` had already been called in
// the current frame.
#define printStackPtr() printf("stackptr: `%d`\n", stackPtr)

// The idea here, is that this variable, `stackPtr`, is created
// when the `recordStackPtr` macro is typed.

// `printStackPtr()` is just a utility.

// Note that some of these are "macro functions" and not just variables to defend from possible
// changes in the future. They're also supposed to have semicolons in their call syntax.

// Wish I also had a way to check if `recordStackPtr` had been called,
// through macros. Like, a `#define` defined by a `#define`!
// ..and also a way to `#undef` it, yes...

// Similarly, I could verify if the `stackptr_macro_value` variable had been created or not, and
// that way, we could avoid having to remember to call `recordStackPtr()`!