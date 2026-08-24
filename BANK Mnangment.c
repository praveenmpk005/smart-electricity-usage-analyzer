#include <stdio.h>

struct Account {
    char name[20];
    int accno;
    float balance;
};

void deposit(struct Account *a) {
    float x;
    printf("Enter amount: ");
    scanf("%f", &x);
    if (x > 0) a->balance += x;
    else printf("Invalid amount\n");
}

void withdraw(struct Account *a) {
    float x;
    printf("Enter amount: ");
    scanf("%f", &x);

    if (x > 0 && x <= a->balance)
        a->balance -= x;
    else
        printf("Invalid or insufficient balance\n");
}

int main() {
    struct Account a;
    int ch;
    float x;

    printf("Name: ");
    scanf("%s", a.name);
    printf("Account No: ");
    scanf("%d", &a.accno);
    printf("Initial Balance: ");
    scanf("%f", &a.balance);

    do {
        printf("\n1.Balance\n2.Deposit\n3.Withdraw");
        printf("\n4.Transfer\n5.Details\n6.Exit");
        printf("\nChoice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("Balance = %.2f\n", a.balance);
                break;

            case 2:
                deposit(&a);
                break;

            case 3:
                withdraw(&a);
                break;

            case 4:
                printf("Transfer amount: ");
                scanf("%f", &x);
                if (x > 0 && x <= a.balance)
                    a.balance -= x;
                else
                    printf("Invalid or insufficient balance\n");
                break;

            case 5:
                printf("Name: %s\nAccount: %d\nBalance: %.2f\n",
                       a.name, a.accno, a.balance);
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(ch != 6);

    return 0;
}
