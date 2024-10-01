#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1

struct account
{
    int cid;
    char name[20];
    char account_type[20];
    float balance;
    char address[20];
};

int count = 0, i;

void display(struct account obj[]);

int main()
{
    struct account obj[10];

    int option, cid;
    char account_type[20];
    char address[20];
    char name[20];
    float amount;

    printf("1. Deposite\n");
    printf("2. Withdrawl\n");
    printf("3. Create account\n");
    printf("4. Account holder with low balance below Rs.100 \n");
    printf("5. Exit\n");

    while (TRUE)
    {
        printf("\n Enter an option:");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter a cid:");
            scanf("%d", &cid);
            printf("Enter a name :");
            scanf("%s", &name);
            printf("Enter a address:");
            scanf("%s", &address);
            printf("Enter a account_type of user:");
            scanf("%s", &account_type);
            for (i = 0; i < count; i++)
                if ((obj[i].cid == cid) && (strcmp(obj[i].name, name) == 0) && (strcmp(obj[i].address, address) == 0) && (strcmp(obj[i].account_type, account_type) == 0))
                {
                    printf("Enter amount to deposit:");
                    scanf("%f", &amount);
                    obj[i].balance = obj[i].balance + amount;
                    break;
                }
            if (i == count)
                printf("\n No match data found");
            break;

        case 2:
            printf("Enter a cid:");
            scanf("%d", &cid);
            printf("Enter a name :");
            scanf("%s", &name);
            printf("Enter a address:");
            scanf("%s", &address);
            printf("Enter a account_type of user:");
            scanf("%s", &account_type);
            for (i = 0; i < count; i++)
            {
                if ((obj[i].cid == cid) && (strcmp(obj[i].name, name) == 0) && (strcmp(obj[i].address, address) == 0) && (strcmp(obj[i].account_type, account_type) == 0))
                {
                    printf("Enter Withdrawal amount:");
                    scanf("%f", &amount);
                    if ((obj[i].balance - amount) >= 0)
                    {
                        obj[i].balance -= amount;
                    }
                    else
                        printf("\n The balance is insufficient");
                    break;
                }
            }
            if (i == count)
                printf("\n No match found");
            break;

        case 3:
            printf("Enter a cid:");
            scanf("%d", &obj[count].cid);
            printf("Enter a name :");
            scanf("%s", &obj[count].name);
            printf("Enter a address:");
            scanf("%s", &obj[count].address);
            printf("Enter a account_type of user:");
            scanf("%s", &obj[count].account_type);
            printf("Enter balance:");
            scanf("%f", &obj[count].balance);
            count++;
            break;

        case 4:
            display(obj);
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\n Wrong choice! Please try again");
            break;
        }
    }

    return 0;
}

void display(struct account obj[])
{
    printf("\n Account holders with balance below Rs. 100: \n");
    for (i = 0; i < count; i++)
    {
        if (obj[i].balance < 1000)
        {
            printf("\n cid: %d", obj[i].cid);
            printf("\n name: %s", obj[i].name);
            printf("\n address: %s", obj[i].address);
            printf("\n account_type: %s", obj[i].account_type);
        }
    }
}

