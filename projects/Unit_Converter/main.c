#include <stdio.h>

int main() 
{
  char c;
  int TempC,F,C,FToC, CToF;
  int CurrC,UtoE,UtoJ,UtoI;
  int massC,Ounce,Gram;
  float USDtoEURO,USDtoJPY,USDtoINR;
  float OToP,GToP;
  printf("list of conversation to choose from: \n");
  printf("Temp(T),Curr(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&c);
  
  if(c == 'T'){
      printf("list of conversations to choose: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&TempC);
      if(TempC == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&F);
          FToC =  ((F-32) * (5.0/9.0));
          printf("Celcius: %d",FToC);
      }
      else if(TempC == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&C);
        CToF = ((9.0/5.0)*C + 32);
        printf("Fahrenheit: %d",CToF);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(c == 'C') {
      printf("list of conversations to choose : \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to INR. \n");
      scanf("%d",&CurrC);
      if(CurrC == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&UtoE);
          USDtoEURO = UtoE * 0.87;
          printf("Euro: %.2f",USDtoEURO); 
      }
      else if(CurrC == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&UtoJ);
          USDtoJPY =UtoJ * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(CurrC == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&UtoI);
        USDtoINR = UtoI * 80;
        printf("INR: %.2f",USDtoINR);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(c == 'M'){
      printf("list of conversations to choose: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massC);
      if(massC == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&Ounce);
          OToP = Ounce * 0.0625;
          printf("Pounds: %.2f",OToP);
      }
      else if(massC == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&Gram);
          GToP = Gram * 0.00220462;
          printf("Pounds: %.2f",GToP);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}