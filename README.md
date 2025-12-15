# C Programming
Uber repo for C programming language examples and courses

References:
- Udemy Course (bought): https://www.udemy.com/course/c-programming-for-beginners
- C PROGRAMMING LANGUAGE A Step By Step Guide To Learn C Programming In 7 Days Darrel L. Graham Amazon Kindle Edition (bought)
- C Programming Tutorial for Beginners: https://www.programiz.com/c-programming
- C Programming Language Wikipedia: https://en.wikipedia.org/wiki/C_(programming_language)

---

# Getting Started with Coding 
## Check Compiler Version:
gcc --version     

## Write a source file
helloworld.c
```
#include <stdio.h>

int main()
{
    int age = 23;
    printf("Hello World\n");
    return age;
}
```

## Compile
- creates a helloworld.out exe

` gcc helloworld.c -o helloworld.out `


## Execute
` ./helloworld.out `

# Debug in VS Code
- Choose 'C/C++: gcc build active file'
- SEE https://code.visualstudio.com/docs/cpp/launch-json-reference