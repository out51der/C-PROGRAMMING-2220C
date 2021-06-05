/* Momir Jovanovic
* SCRAMBLED EGGS
* DATE: 05/31/2021
* SUBMIT CODE FOR YOUR SCENARIO
* ASSIGNMENT Due 05/23/2021 
* COP 2220C - 33940
* Professor: Jerry Reed
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char ingredients[5][10];
	char spices[5][10];
	int numPeople;
	int eggsPerPerson;
	int eggsLeft;
	int eggCalories = 78; // one large egg around 50g average 78 calories
	int eggTotalCalories = 0;
	time_t t;

	/* Intializes random number generator */
	srand((unsigned)time(&t));
	

	printf("How many persons are having breakfast per day?: ");
	scanf("%d", &numPeople);
	printf("How many EGGS do you want to use per person?: ");
	scanf("%d", &eggsPerPerson);
	printf("\n");           
	
	// basic calculations

	eggTotalCalories = eggsPerPerson * eggCalories;

	printf("\n Enter 5 additional ingredients to pair with your eggs: \n");
	printf("(Press ENTER after each input)\n");

	// taking user input and storing it in the array ingredients ingridients input 5 times

	for (int i = 0; i < 5; ++i)
	{
		scanf("%s", &ingredients[i]);
	}
	 
	  // Spice inputs 5 times 

	printf("\n Input five spices Eggs Recipe:\n ");
	printf("Press ENTER after each input)\n");

	  // taking user input and storing it in the array spices

	for (int i = 0; i < 5; ++i)
	{
		scanf("%s", &spices[i]);
	}

	for (int j = 0; j < 7; ++j) //loop for 7 days of the week 
	{

		printf("\n\n Randomized Egg recipies for Day # %d: \n", j+1);

		// printing menus per person entered and random ingredients and random spices

		for (int i = 0; i < numPeople; ++i) //loop for egg recipies
		{
			printf("\n Person nr# %d will have %d eggs with %s spiced up with %s \n", i + 1, eggsPerPerson, ingredients[rand() % 5], spices[rand() % 5]);
			printf(" Total Calories per person : %d \n", eggTotalCalories);
		
		}

	}

	printf("\n");
	
	system("pause");
	
	return 0;
}