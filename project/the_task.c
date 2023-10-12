#include <stdio.h>
#include <string.h>
struct Registration
{
    char firstName[15];
    char lastName[15];
    char Email[20];
    char password[15];
};

struct Login
{
    char password[15];
    char Email[20];
};

int main()
{
    struct Registration R;
    struct Login L;
    printf("\n                 REGISTRATION\n");

    printf("Enter FirstName :");
    gets(R.firstName);
    printf("Enter LastName :");
    gets(R.lastName);
    printf("Enter Email :");
    gets(R.Email);
    printf("Enter PassWord :");
    gets(R.password);

    printf("\n");
    printf("                   LOGIN\n");
    printf("Enter Your Email :");
    gets(L.Email);
    printf("Enter Your PassWord :");
    gets(L.password);

    if (strcmp(R.Email, L.Email) == 0 && strcmp(R.password, L.password) == 0)
    {
        printf(" Logged in Successfully!");
    }
    else
    {
        printf("Failed login");
    }
}