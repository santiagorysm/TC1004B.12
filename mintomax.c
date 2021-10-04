#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int main(){
    char C, upperC;
    int n;
    do{

    
    read(STDIN_FILENO, &C, 1);
    upperC = toupper(C);
    write(STDOUT_FILENO, &upperC, 1);
    }
    while(n!=0);
    return 0;
}