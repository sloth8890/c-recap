# Introduction
This repository is for studying COMP2017 mateirals. 
Outcome for this unit is written on below.

1. apply code quality strategies appropriate for C, including preprocessor techniques, and use of common idioms

2. use Unix commands and system calls (including usage of flags etc) from online manual system

3. demonstrate the approach and concepts of Unix, including its tools philosophy, processes (including pipes and redirection), the file system, and the shell

4. compose correct, clean code in C that allocates, deallocates and manages memory

5. construct correctly implement standard linked list data structures. Higher performance could involve slightly more complicated structures such as binary search trees

6. assess code execution using debugging tools

7. apply a thorough automated testing regime using tools such as make, diff, scripts to present the outcomes, and a tool to manage regression testing. Higher performance could involve ability to construct such a regime

8. read and write code that correctly uses the main standard library functions, especially for I/O, file handling, and string handling. Higher performance could involve elegant use of these functions, particularly avoiding idioms which are extremely inefficient.

9. evaluate common memory-related errors (such as memory leaks, dangling pointers) and how to avoid these. Higher performance could involve detecting errors in example code, and fixing them using debuggers

10. construct, debug, and evaluate parallel or concurrent programs.

11. Understand and identify security vulnerabilities in memory usage patterns.

# Debugging Tools

## Valgrind
```(bash)
valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./executable exampleParam1
```
ref https://stackoverflow.com/questions/5134891/how-do-i-use-valgrind-to-find-memory-leaks