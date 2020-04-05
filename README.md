
# Build and Running the program locally

On Mac or Linux, there should be a C Compiler built-in named "cc"... 

```
$ cc -ohello hello.c
$ ./hello
```

Or, you can install andn use the popular GNU C Compiler, in which case, the commannd would be `$ gcc` rather than `$ cc`.

**NOTES:**

* The first commannd compiles the file named `hello.c` and produces the executable program named **hello**
* The second commannd runs the **hello** program

**OUTPUT:**

If you enter a character of **A**, then B will be output. If you enter any other character, then that character will be output.

```
$ ./hello
Enter a character asshole: A
You entered: A
character value pointed to by char_ptr: B
```

```
$ ./hello
Enter a character asshole: Y
You entered: Y
character value pointed to by char_ptr: Y
```

