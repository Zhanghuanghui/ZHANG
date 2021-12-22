#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
<<<<<<< HEAD
<<<<<<< HEAD
    printf("Hello world!\n");
=======
    char name[255];

    fgets(name, 255, stdin);
    name[strlen(name)-1] = '\0';/* remove the newline at the end */

    printf("Hello %s!\n", name);
>>>>>>> parent of 618c9c3 (Prompt user for last name as well.)
=======
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0';/* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last);/* buffer overflow?what's that?*/

    printf("Hello %s %s!\n", first, last);
>>>>>>> c6f59f730743d9991c71ade3c2c3913f1a6022ca
    return 0;
}

