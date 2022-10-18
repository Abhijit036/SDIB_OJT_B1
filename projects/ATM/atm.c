#include <stdio.h>
int ATM_Transaction();
int anotherTransaction,amountToWidthdraw,amountToDeposit,pin;
double balance = 1000;
int  main()
{
  printf("Welcome to world's Poorest bank \n");
  printf(" Enter your pin: \n");
  scanf("%d",&pin);
    if(pin != 1234)
   {
       printf("your pin is wrong,Try again");
   }
   else
    {
      ATM_Transaction(); 
    }
}
int ATM_Transaction()
{
  int choice;
  printf("Choose the following options!\n\n");
  printf("1. Balance Enquiry \n");
  printf("2. Cash Withdraw\n");
  printf("3. Deposit Cash\n");
  printf("4. Exit \n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1: 
    printf("Your bank balance is: %f", balance);
    printf("\n\nDo you want to perform another transaction?\nPress 1 to proceed and 2 to exit\n\n"); // request for another transaction
    scanf("%d",&anotherTransaction);
    if(anotherTransaction == 1)
      {
        ATM_Transaction();
      }
     break;
    case 2:
    printf("Please enter amount to withdraw: ");
    scanf("%d", &amountToWidthdraw);
    if(amountToWidthdraw <= balance)
    {
     printf("Pls collect your cash\n");
     balance=balance-amountToWidthdraw;//
     printf("Your available balance is %lf\n",balance);
     printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n");
     scanf("%d", &anotherTransaction);
       if(anotherTransaction == 1)
        {
             ATM_Transaction(); 
        }
    }
     else
    {
       printf("Sorry in-sufficient funds in your account");
       printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n");
       scanf("%d", &anotherTransaction);
       if(anotherTransaction == 1)
        {
             ATM_Transaction();
        }
    }
    break;
    case 3:
    printf("Please enter amount to deposit: ");
    scanf("%d", &amountToDeposit);
    balance = amountToDeposit + balance; 
    printf("Thank you for depositing, your new balance is: %f", balance);
    printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");// request for another transaction
    scanf("%d", &anotherTransaction);
    if(anotherTransaction == 1)
     {
        ATM_Transaction(); 
     }
    break;
    default:
     printf("Thanks for Using ATM services, See you soon");
  }
}