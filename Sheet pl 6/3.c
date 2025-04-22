
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void Calc_etc(float NumsOfMiles, float Fuel_consumption, float *Fuel_Consumption_per_mile)
{
	if (NumsOfMiles == 0)
		*Fuel_Consumption_per_mile = 0;
	*Fuel_Consumption_per_mile = Fuel_consumption / NumsOfMiles;
}
int main()
{
	float NumsOfMiles = 0, Fuel_consumption = 0, Fuel_Consumption_per_mile = 0;
	printf("Enter The Number of The Miles :");
	scanf("%f", &NumsOfMiles);
	printf("\nEnter The Number of The Fuel :");
	scanf("%f", &Fuel_consumption);
	Calc_etc(NumsOfMiles, Fuel_consumption, &Fuel_Consumption_per_mile);
	printf("%.2f", Fuel_Consumption_per_mile);
}