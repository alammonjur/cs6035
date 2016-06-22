#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char buff[12];
    int pass = 0;
    
    strcpy(buff, argv[1]);
    printf("\n%s", buff);

    if(strcmp(buff, "password"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 3;
    }

    if(pass == 3)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}
