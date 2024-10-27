#include<stdio.h>

int main() {

float temperature, convertedTemp;

int choice;

printf("Program To Convert Temperature\n");
printf("Select the conversion: ");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to Celsius\n");
printf("What do you want to enter (1 or 2): ");
scanf("%d", &choice);

if (choice == 1) {

printf("Enter temperature (Celsius):");
scanf("%f", &temperature);

convertedTemp = temperature*9/5 + 32;

printf("%2f Celsius is equal to %2f Fahrenheit\n", temperature, convertedTemp);

} else if (choice == 2) {

printf("Enter Temperature in Fahrenheit:");
scanf("%f", &temperature);

convertedTemp = (temperature - 32) * (5.00/9);

printf("%2f Fahrenheit is equal to %2f Celsius\n", temperature, convertedTemp);

} else {

printf("Invalid choice. Run the program again and select either 1 or 2. \n");

}

return 0;

}
