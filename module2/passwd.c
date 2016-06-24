#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[12];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "password"))
    {
        printf ("\n You Put Wrong Password");
    }
    else
    {
        printf ("\n You Put Correct Password \n");
        //pass = 1;
	return 0;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n But you have done buffer overflow. So your password will be considered as correct even though you put wrong one\n\n");
    }

    return 0;
}
