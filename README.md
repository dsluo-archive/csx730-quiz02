# csx730-quiz02

## Questions

In your notes, clearly answer the following questions. These instructions assume that you are 
logged into the Nike server. 

**NOTE:** If a step requires you to enter in a command, please provide in your notes the full 
command that you typed to make the related action happen. If context is necessary (e.g., the 
command depends on your present working directory), then please note that context as well.

### Getting Started

1. Form into small groups of two or three people. 

1. Use Git to clone the repository for this exercise onto Nike into a subdirectory called `csx730-quiz02`:

   ```
   $ git clone --depth 1 https://github.com/cs1730/csx730-quiz02.git
   ```

1. Change into the `csx730-quiz02` directory that was just created and look around. There should be a
   couoke different files already present.
   
### Quiz Questions

1. In `gcd.s` write a function called `gcd` that implements the following C function 
   protoype, from scratch in `x86_64` assembly using AT&T syntax intended for the GNU Assembler:
   
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
   
<hr/>

[![License: CC BY-NC-ND 4.0](https://img.shields.io/badge/License-CC%20BY--NC--ND%204.0-lightgrey.svg)](http://creativecommons.org/licenses/by-nc-nd/4.0/)

<small>
Copyright &copy; Michael E. Cotterelland the University of Georgia.
This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/">Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License</a> to students and the public.
The content and opinions expressed on this Web page do not necessarily reflect the views of nor are they endorsed by the University of Georgia or the University System of Georgia.
</small>
