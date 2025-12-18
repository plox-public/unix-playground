# stack-overflow

This challenge is a basic stack based overflow crackme. Stack protections
have been removed. The input buffer can only hold 40 bytes. However the
program will let you write 120 bytes.

# build/compile

```bash
make
make test
```

Running `make` will build this challenge. using `make test` executes the
python script that has a solution to exploit this program.

# dependencies

There should be none! If your system is missing packages, 
this software is written in ANSI C, uses python3
for basic exploit testing, gcc and make for compilation.
