#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int MAX_COUNTRY_NAME_LENGTH = 50;

typedef struct CountryTvWatch_struct {
	char countryName[50];
	int tvMinutes;
} CountryTvWatch;

void PrintCountryNames(CountryTvWatch ctryList[], int numCountries)
{
	int i;
	for (i = 0; i < numCountries; ++i) {
		printf(" %s \n ", ctryList[i].countryName);
	}
}

int main(void) {
	// Source: www.statista.com, 2010
	const int NUM_COUNTRIES = 4;

	CountryTvWatch countryList[4];
	char countryToFind[50];
	bool countryFound;
	int i;

	strcpy(countryList[0].countryName, "Brazil");
	countryList[0].tvMinutes = 222;
	strcpy(countryList[1].countryName, "India");
	countryList[1].tvMinutes = 119;
	strcpy(countryList[2].countryName, "U.K.");
	countryList[2].tvMinutes = 242;
	strcpy(countryList[3].countryName, "U.S.A.");
	countryList[3].tvMinutes = 283;

	printf("Enter country name: \n");
	scanf("%s", countryToFind);

	countryFound = false;
	for (i = 0; i < NUM_COUNTRIES && !countryFound; ++i) { // Find country's index
		if (strcmp(countryList[i].countryName, countryToFind) == 0) {
			countryFound = true;
			printf("People in %s watch\n", countryToFind);
			printf("%d minutes of TV daily.\n", countryList[i].tvMinutes);
		}
	}
	if (!countryFound) {
		printf("Country not found, try again.\n");
		printf("Valid countries:\n");
		PrintCountryNames(countryList, NUM_COUNTRIES);
	}

	system("pause");


	return 0;
}
