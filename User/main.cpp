#include <iostream>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    putenv("PROC_TO_KILL=firefox");
    if(fork() == 0)
        execv("./../../Killer/cmake-build-debug/Killer",argv);
}
