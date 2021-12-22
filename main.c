#include <stdio.h>

int main(int argc, char **argv)
{
<<<<<<< HEAD
    printf("Hello world!\n");
=======
    char name[255];

    fgets(name, 255, stdin);
    name[strlen(name)-1] = '\0';/* remove the newline at the end */

    printf("Hello %s!\n", name);
>>>>>>> parent of 618c9c3 (Prompt user for last name as well.)
    return 0;
}
