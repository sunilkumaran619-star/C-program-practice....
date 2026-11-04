#include<stdio.h>

    int main(void) {
        int deposit, withdraw;
        int balance = 20000;
        char option;
    
        while (1) {
            printf("\n\nHOW CAN I HELP YOU?");
            printf("\n1. Deposit money");
            printf("\n2. Withdraw money");
            printf("\n3. Check balance");
            printf("\n4. Exit");
            printf("\nSelect a number: ");
    
            if (scanf(" %c", &option) != 1) {
                return 1;
            }
    
            switch (option) {
                case '1':
                    printf("Enter amount: ");
                    if (scanf("%d", &deposit) != 1 || deposit <= 0) {
                        printf("Enter a valid positive amount.\n");
                        return 1;
                    }
                    balance += deposit;
                    printf("Your balance is %d\n", balance);
                    break;
    
                case '2':
                    printf("Enter amount: ");
                    if (scanf("%d", &withdraw) != 1 || withdraw <= 0) {
                        printf("Enter a valid positive amount.\n");
                        return 1;
                    }
                    if (withdraw <= balance) {
                        balance -= withdraw;
                        printf("Your balance is %d\n", balance);
                    } else {
                        printf("Insufficient balance.\n");
                    }
                    break;
    
                case '3':
                    printf("Your balance is %d\n", balance);
                    break;
    
                case '4':
                    return 0;
    
                default:
                    printf("Invalid option. Try again.\n");
            }
        }
    }
       
       