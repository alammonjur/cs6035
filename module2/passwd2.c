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
        printf ("\n You Put Wrong Password. You need to overflow the buffer to get correct password. See EADME (problem3) ho to overflow the buffer with exact value hex(03) in our case:\n");
    }
    else
    {
        printf ("\n You Put Wrong Password \n");
        pass = 3;
        return 0;
    }

    if(pass == 3)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Great!! You have done it. So your password will be considered as correct even though you put wrong one \n\n");

    return 0;
    }
}
