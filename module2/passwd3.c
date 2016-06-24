#include <stdio.h>
#include <string.h>


int passwd_check() {
     printf ("\n Great!! You have done it. So your password will be considered as correct even though you put wrong one one \n\n");
    return 0;
}

int main(int argc, char *argv[])
{
    char buff[12];
    int pass = 0;
    
    strcpy(buff, argv[1]);

    if(strcmp(buff, "password"))
    {
        printf ("\n You Put Wrong Password. You need to overflow the buffer and overwrite the return address with the address of passwd_check function to obtain the correct password, read the README and find out how to get it:\n");
    }
    else
    {
        printf ("\n Correct Password \n");
    }

    return 0;
}
