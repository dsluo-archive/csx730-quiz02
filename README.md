# csx730-quiz02

### Getting Started

1. Form into **small groups of two or three** people. These instructions assume that at least one group 
   member is logged into the Nike. 

1. Use Git to clone the repository for this exercise onto Nike into a subdirectory called `csx730-quiz02`:

   ```
   $ git clone https://github.com/cs1730/csx730-quiz02.git
   ```

1. Change into the `csx730-quiz02` directory that was just created and look around. There should be a
   couple different files already present.
   
### Quiz Questions

This quiz is open book, open notes, and asking your instructor questions is allowed. You may
find the assembly notes provided in recent lecture modules on eLC useful. If you use `gcc -S`
as a last resort, you are still expected to fully document the assembly. Your instructor
reserves the right to question you about the high-level functionality of a sequence of instructions
in your submission.

1. Modify `SUBMISSION.md` to include the name, UGA ID number, course number (4730 or 6730) 
   for each group member. Then, sign the piece of paper that your instructor has at the front 
   of the room.

1. Create a `Makefile` with the following targets:
   
   | Target   | Dependencies      | Description |
   |----------|-------------------|-------------|
   | `main`   | `main.o`, `gcd.o` | Link to executable.
   | `main.o` | `main.c`          | Compile and assemble into object file.
   | `gcd.o`  | `gcd.s`           | Assemble into object file.
   
   When compiling `C` code, include the usual options specified by your instructor.
   When assembling assembly, include the `-gstabs+` option.

1. In `gcd.s`, modify `gcd` so that it implements the following C function 
   protoype (also specified in `gcd.h`), from scratch in `x86_64` assembly using AT&T 
   syntax intended for the GNU Assembler:
   
   ```c
   /** Returns the greatet common divisor (GCD) of two integers, @p a and @p b, using Euclid's 
     * recursive algorithm. 
     * @see https://en.wikipedia.org/wiki/Greatest_common_divisor#Using_Euclid's_algorithm
     * @param a  the first integer
     * @param b  the second integer
     * @return   the greatet common divisor
     */
   long gcd(long a, long b); 
   ```
   
   Feel free to add extra labels, as needed, to facilitate jumping. A useful instruction for
   performing comparisons is `cmp`. Also, you may find the `jz` and `jnz` instructions useful
   for jumping to labels when the result of the previous instruction zeroed out and did not
   zero out the destination register, respectively.
   
   For each instruction of assembly, you must provide a comment in the source code describing 
   what the instruction is doing and, when applicable, why.
   
1. Test your code. Test cases have already been provided in the `main.c` for your
   convenience.

1. **Before 3:15 PM**, double check that your group member names are listed in `SUBMISSION.md`
   as well as the piece of paper that your instructor has at the front of the room, then
   submit your quiz attempt using the `submit` command. From the parent directory:
   
   ```
   $ submit csx730-quiz02 csx730
   ```
   
<hr/>

[![License: CC BY-NC-ND 4.0](https://img.shields.io/badge/License-CC%20BY--NC--ND%204.0-lightgrey.svg)](http://creativecommons.org/licenses/by-nc-nd/4.0/)

<small>
Copyright &copy; Michael E. Cotterelland the University of Georgia.
This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/">Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License</a> to students and the public.
The content and opinions expressed on this Web page do not necessarily reflect the views of nor are they endorsed by the University of Georgia or the University System of Georgia.
</small>
