# C - Dynamic Library
Steps:
1. All c-source files `.c` will need to be complied into object files `.o`.
* `gcc -c -fPIC *.c`

-c option is used to tell the compiler not to link the object files yet

-fPIC option is used to make the library position independent

2. The object files need to be placed into a single shared library
* `gcc *o -shared -o lib+library_name+.so` in this case **libdynamic.so** *for lib+dynamic+.so*.

3. Add the shared library to the environment variable
* `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`

4. To compile out main.c file with the library file we use:
* `gcc -L source.c -llibrary_name -o outputFile`

** Note: **
* we can use **nm -D library.so** to check if the library was created.
* **ldd outputFile** is used to see the libraries being used in the final object file.
