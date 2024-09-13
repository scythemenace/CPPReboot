/*The header file is where we're going to keep all of the functions prototype
and variable declaration.*/

#ifndef BURRITO_H
#define BURRITO_H

/*
** Why is this(BURRITO_H) line here?
   This is an *include guard*. The purpose of an include guard is to prevent the contents of this header file
   from being included multiple times during the compilation process. If the contents were included more than once,
   it could lead to errors, such as redefinition of classes, functions, or variables.

** How does it work?
   1. The `#ifndef ANKUR_H` checks if the macro `ANKUR_H` has NOT been defined yet.
   2. If `ANKUR_H` is not defined, we then define it with `#define ANKUR_H`.
   3. This ensures that the next time this header is included, the preprocessor knows that the contents have already been added once
      and skips over it, effectively 'guarding' against multiple inclusions.

** Why is ANKUR_H in capital letters?
   By convention, macros used in include guards are written in ALL CAPS. This is a common practice to make it clear that `ANKUR_H`
   is a special macro intended for the preprocessor and not a variable or other identifier used in the code. It helps avoid any
   potential conflicts or confusion with other names.

** What happens in the backend when compiling i.e what is all this "preprocessor" crap?
   When we compile our C++ program, the compilation process happens in several stages:
   - **Preprocessing**: The preprocessor reads each source file (`.cpp`) and replaces `#include` directives with the content
     of the included files (like this header file). Thanks to the include guard, if `Ankur.h` is included multiple times,
     only the first inclusion is considered; the others are ignored.
   - **Compilation**: The compiler converts the preprocessed code into machine code, generating an object file (`.o` or `.obj`).
   - **Linking**: The linker then takes all object files and combines them into a single executable. During this process,
     it resolves references between different parts of the program, such as linking functions declared in one file and
     defined in another.

   By using include guards, we prevent multiple definitions and ensure a clean and error-free linking process.
*/

class Burrito
{
public:
    Burrito();
};

#endif