#include <stdio.h>

// A Program for displaying Celsius Values with their respective farenheit values.
int main(int argc, char *argv[]) {
	
	float farenheit, celsius;
	int lower, upper, rateOfIncrease;
	
	lower = 0; // The lowest farenheit values in the table.
	upper = 100; // The highest farenheit value in the table.
	rateOfIncrease = 10; // The rate at which values increase in the table.
	
	// Assign the intitial celsius value to the starting value of our table.
	celsius = lower;
	while (celsius <= upper)
	{
		farenheit = celsius * (5.0/9.0) + 32;		
		// The dcimal point denotes the number of decimal places to be displayed. the whole number is how many spaces the value must occupy (3 and 6).
		printf("%3.0f %6.1f\n", celsius, farenheit);
		celsius += rateOfIncrease;
	}
}