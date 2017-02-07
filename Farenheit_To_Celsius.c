#include <stdio.h>

// A Program for displaying Farehneit values with their respective Celcius Values.
int main(int argc, char *argv[]) {
	
	float farenheit, celsius;
	int lower, upper, rateOfIncrease;
	
	lower = 0; // The lowest farenheit values in the table.
	upper = 300; // The highest farenheit value in the table.
	rateOfIncrease = 20; // The rate at which values increase in the table.
	
	// Assign the intitial farenheit value to the starting value of our table.
	farenheit = lower;
	while (farenheit <= upper)
	{
		celsius = (5.0/9.0) * (farenheit - 32);
		// The dcimal point denotes the number of decimal places to be displayed. the whole number is how many spaces the value must occupy (3 and 6).
		printf("%3.0f %6.1f\n", farenheit, celsius);
		farenheit += rateOfIncrease;
	}
}