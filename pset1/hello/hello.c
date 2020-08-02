#include <stdio.h>
#include <cs50.h>


int main(void)
{\n

    string name = get_string("What is your name?\n");

   // string name= get_string("What is your name, huh? \n");
    printf("hello, %s\n", name);
}
