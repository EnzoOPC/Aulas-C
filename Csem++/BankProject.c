#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Account {
    char name[40];
    char email[40];
    char pass[30];
    float money;
    int id;
};

struct Account CreateAccount() {

    struct Account account;

    // Credentials

    printf("\nType your full name: ");
    scanf("%c", account.name);

    printf("\nType your E-mail name: ");
    scanf("%c", account.email);

    printf("\nDefine your password name: ");
    scanf("%c", account.pass);

    // Random ID

    srand((unsigned int)time(NULL));
    int randomNumber = 100000 + rand() % 900000;

    scanf("%d", &account.id);

    return account;

}


int main() {

    char createAccount;  

    printf("Hello, would you like to crete a account in our bank (y/n)? ");
    fflush(stdin);
    scanf("%c", createAccount);

    if (createAccount == 'y' || createAccount == 'Y') {

        printf("\nGreat! Please type your credentials. ");

        struct Account account1 = CreateAccount();

        account1.money = 0;

        pritnf("\nPossible actions: ");

        char action[30];
        printf("\nConsult account information - Depoist - Withdraw - Delete account - Change credentials");
        scanf("%c", action);

        switch (action)
        {
        case "Consult":
            /* code */
            break;
        
        default:
            break;
        }


    } else if (createAccount == 'n' || createAccount == 'N') printf("\nAllright, we will always welcome you here!");

    else printf("\nCommand not recognized.");

}