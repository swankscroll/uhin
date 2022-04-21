#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0';

    printf("Hello %s!\n", first);
    return 0;
}

