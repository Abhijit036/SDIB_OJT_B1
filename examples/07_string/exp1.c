#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
 char str[] = "$GPRMC,105954.000,A,3150.6731,N,11711.9399,E,0.00,96.10,250313,,,A*53";
 char* Message_ID = strtok(str,",");
 char* Time = strtok(NULL,",");
 char* Data_Valid = strtok(NULL,",");
 char* Raw_Latitude = strtok(NULL,",");
 char* N_S = strtok(NULL,",");
 char* Raw_Longitude = strtok(NULL,",");
 char* E_W = strtok(NULL,",");
 char* Speed = strtok(NULL,",");
 char* COG = strtok(NULL,",");
 char* Date = strtok(NULL,",");
 char* Magnetic_Variation = strtok(NULL,",");
 char* M_E_W = strtok(NULL,",");
 char* Positioning_Mode = strtok(NULL,",");

 double Latitude = atof(Raw_Latitude);
 double Longitude = atof(Raw_Longitude);

  printf("The Message ID is : %s\n", Message_ID);
  printf("The Time is : %s\n", Time);
  printf("The data valid is : %s\n", Data_Valid);
  printf("The Latitude is : %f\n", Latitude);
  printf("The N_S is : %s\n", N_S);
  printf("The Longitude is : %f\n", Longitude);
  printf("The E_W is : %s\n", E_W);
  printf("The Speed is : %s\n", Speed);
  printf("The COG is : %s\n", COG);
  printf("The Date is : %s\n", Date);
  printf("The Magnetic_Variation is : %s\n", Magnetic_Variation);
  printf("The M_E_W is : %s\n", M_E_W);
  printf("The Positioning_Mode is : %s\n", Positioning_Mode);

    return 0;
}