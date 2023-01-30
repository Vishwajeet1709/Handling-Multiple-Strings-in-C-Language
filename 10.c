//Menu driven program to create an authentication system
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
int main()
{
    int choice,i;
    char contact_no[10]={"0123456789"},name[15]={"Abcd Xyz"},temp_user_name[20],user_name[20]={"Admin123"},temp_password[20],password[20]={"Admin123@"},temp_email[30],email[30]={"Example1234@gmail.com"},gender='M',DOB[10]={"00/00/0000"};

    while (1)
    {
        printf("\n01) Login\n02) Signup\n03) Update\n04) Forget Password\n05) Exit\n\nEnter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 : //login
                system("cls");
                printf("\n\nWELCOME TO LOGIN SCREEN\n\n");
                printf("\nEnter Your Username : ");
                scanf("%s",&temp_user_name);
                printf("\nEnter Your Password : ");
                scanf("%s",&temp_password);
                if(strcmp(temp_password,password) == 0 && strcmp(temp_user_name,user_name) == 0)
                    {
                        printf("\nLOGIN SUCCESSFUL\n\n");
                    }
                else
                    printf("\nWrong Username & Password, Pleas Try Again Later.\n");
            break;

        case 2 : //Signup
                system("cls");
                printf("\n\nWELCOME TO SIGNUP SCREEN\n\n");
                printf("\nEnter Your Name : ");
                scanf("%s",&name);
                mail1 :
                printf("\nEnter Your Email ID : ");
                scanf("%s",&email);
                if(strchr(email,'@') == NULL)
                {
                    printf("\nEnter a valid email.\n");
                    goto mail1;
                }
                printf("\nEnter your mobile no : ");
                scanf("%s",&contact_no);
                printf("\nEnter Your Username (It Should Be Alpha Numaric) : ");
                scanf("%s",&user_name);
                pass1 :
                printf("\nEnter New PAssword \n(Must contain 8 characters, special characters, numbers, uppercase and lowercase characters) : ");
                scanf("%s",&password);
                printf("\nConferm Password : ");
                scanf("%s",&temp_password);
                if(strcmp(password,temp_password))
                {
                    printf("\nWRONG PASSWORD ENTERED\n");
                    goto pass1;
                }
                printf("\nEnter Your DOB DD/MM/YYYY : ");
                scanf("%s",&DOB);
                printf("\nEnter Your Gender M/F : ");
                scanf("%s",&gender);
                printf("\n\nYOUR DETAILS HAVE BEEN SAVED SUCCESSFULY, PRESS ENTER TO CONTINUE");
                getch();
            break;

        case 3 : //Update
                system("cls");
                printf("\n\nWELCOME TO UPDATE SCREEN\n\n");
                printf("\nEnter Your Username : ");
                scanf("%s",&temp_user_name);
                printf("\nEnter Your Password : ");
                scanf("%s",&temp_password);
                if(strcmp(temp_password,password) == 0 && strcmp(temp_user_name,user_name) == 0)
                    {
                        printf("\nWelcome %s you cane make changes\n\n",name);
                        printf("\nEnter Your Name : ");
                        scanf("%s",&name);
                        printf("\nEnter your mobile no : ");
                        scanf("%s",&contact_no);
                        mail2 :
                        printf("\nEnter Your Email ID : ");
                        scanf("%s",&email);
                        if(strchr(email,'@') == NULL)
                        {
                            printf("\nEnter a valid email.\n");
                            goto mail2;
                        }
                        printf("\nEnter Your DOB DD/MM/YYYY : ");
                        scanf("%s",&DOB);
                        printf("\nEnter Your Gender M/F : ");
                        scanf("%s",&gender);
                        printf("\n\nYOUR DETAILS HAVE BEEN SAVED SUCCESSFULY, PRESS ENTER TO CONTINUE");
                        getch();
                    }
                else
                    printf("\nWrong Username & Password, Pleas Try Again Later.\n");
            break;

        case 4 : //Forget Password
                system("cls");
                printf("\n\nFORGET PASSWORD\n\n");
                mail3 :
                printf("\nEneter Your Email : ");
                scanf("%s",&temp_email);
                if(strcmp(temp_email,email) == 0)
                {
                    pass2 :
                    printf("\nEnter New Password \n(Must contain 8 characters, special characters, numbers, uppercase and lowercase characters) : ");
                    scanf("%s",&password);
                    printf("\nConferm Password : ");
                    scanf("%s",&temp_password);
                    if(strcmp(password,temp_password))
                    {
                        printf("\nPassword did not match, try again.\n");
                        goto pass2;
                    }
                    printf("\nPassword Changed Successfuly\n");
                }
                else
                    {
                        printf("\nWrong Email Enetered, Try Again.\n");
                        goto mail3;
                    }

            break;

        case 5 : //Exit
                printf("\n\n");
                return 0;
            break;

        default:
                system("cls");
                printf("\n\nInvalid choice, enter a valid choice!!\nHit enter to try again...\n");
                getch();
            break;
        }
    }

}
