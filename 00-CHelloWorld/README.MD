In this folder we have two files where 
1. hello.c : Is a file programmed in lenguage C where It produces a message that says "hello world".
2. output.txt : Is a text with the compiler output of hello.c program.
How to use:
1) First of all You need to have installed any source code editor that supports c language. You can install visual studio code or,in my case, installed Git Bash. For use c in visual studio check this link: https://code.visualstudio.com/docs/cpp/config-mingw.
  I installed visual studio code with Mingw64 and I installed git bash because for me It is a comfortable console for programming. 
2) Secondly download hello.c and output.txt.The latter is optional because we can create this manually.
3) Then open visual studio code and just put hello.c inside the source code editor. after that view Up Right of the screen, here are a start simbol and just click this and start debug c with gcc.exe. 
4) If everything is fine you will see a message that saying "Hello, World" in your screen. 
5) If you want to save the answer of the program you need to put the following commands: ./hello in the location of the program, this command executes hello.exe, that  is the message of the program hello.c. then use this command: ./hello > output.exe, this command generates an output from the programm, in this case, "Hello, world". PS: < = input, > = output.
Note: In this program we are using a version of the C11 compiler so that we have the same version just put the next command in the console: gcc hello.c -std=gnu11 -o hello
