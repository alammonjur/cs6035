#include <stdio.h>
#include <string.h>


int passwd_check() {
     printf ("\n You have reached the location of Root privileges \n");
    return 0;
}

int main(int argc, char *argv[])
{
    char buff[12];
    int pass = 0;
    
    strcpy(buff, argv[1]);

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
        printf ("\n Root privileges is somewhere else ! \n");
    }

    return 0;
}
