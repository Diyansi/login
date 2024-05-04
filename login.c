#include <stdio.h>
#define max 1000
#include <string.h>
int z = 0;
char ch;
struct name
{
    char name[max],password[max],repassword[max];
    char fname[max],fpassword[max];
    int i,j,n;
}s;

void login()
{
    FILE *f;
    int flag,n;
    f = fopen("Password.txt","r");


        system("cls");
        printf("\t\t*****Account Login*****");
    printf("\n\n\t\tEnter Username : ");
    fflush(stdin);
    gets(s.name);
    printf("\n\n\t\tEnter Password : ");
    fflush(stdin);
    password();

    while((fscanf(f,"%s %s\n",&s.fname,&s.fpassword))!=EOF)
    {


        if ((strcmp(s.name,s.fname)) ==0 && (strcmp(s.password,s.fpassword))==0)
        {

            system("cls");

            flag = 1;
            printf("\t\t\aAccount Login Successfully");
                getch();
                goto exit;
                break;

        }


        else if ((strcmp(s.name,s.fname)) ==0 && (strcmp(s.password,s.fpassword))!=0)
                 {

                        system("cls");
                        printf("\t\t\a!!!Wrong Password Entered Try Again!!!\n\n\n");
                        getch();
                      goto exit;



                 }



    }
                system("cls");
         printf("\t\t\t\a!!!User Not Found!!!\n\n\n");
         getch();
         goto exit;

        exit :
            exit(0);



}

void sign()
{
    FILE *f;
    f = fopen("Password.txt","a+");


    printf("\n\n\t\tEnter Username : ");
    fflush(stdin);
    gets(s.name);
        while((fscanf(f,"%s",s.fname))!=EOF)
        {
            if (strcmp(s.name,s.fname)== 0)
            {
                        system("cls");
                printf("\t\tUser Already Exits TRY Another Name");
                getch();
                   sign();



            }

        }
        pass:
    printf("\n\t\tEnter Password : ");
    fflush(stdin);
    password();

    printf("\n\n\t\tRe Enter The Password : ");
    fflush(stdin);
    repassword();

    if ((strcmp(s.password,s.repassword))==0)
    {
        system("cls");
        fprintf(f,"%s %s\n",s.name,s.password);
            fclose(f);
          printf("\t\tAccount Created Successfully");
          getch();
            exit(0);

    }

    else
    {
        system("cls");
        printf("\t\t\a!!!Password Doesn't Match Try Again!!!\n");
        getch();
        goto pass;


    }

}
password()
{
     while((ch = getch())!= '\r')
    {


             s.password[z] = ch;
          printf("*");
           z++;



    }
        s.password[z] = '\0';

        z = 0;

}
repassword()
{
     while((ch = getch())!= '\r')
    {


             s.repassword[z] = ch;
          printf("*");
           z++;



    }
        s.repassword[z] = '\0';

        z = 0;

}
main()
{
    char choice;


        system("color 02");
    printf("\t\tWELCOME TO HACK HUB. LOGIN FORM");

    printf("\n\n\t\t1.Sign up\n\n\t\t2. Login\n\n\t\tEnter Your Choice : ");
    fflush(stdin);
   scanf("%1c",&choice);
   switch(choice)
   {

       case '1' :  system("cls");
                    sign();
                    break;

       case '2' :   system("cls");
                    login();
                    break;


        default :      system("cls");
               printf("\t\t\a!!!!INVLAID OPTION!!!!\n\n");
                        main();
                        break;


   }


    }
