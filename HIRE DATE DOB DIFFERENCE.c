/* Momir Jovanovic
* HIRE DATE DOB TODAYS DATE ELIGIBILITY
* DATE: 05/31/2021
* SUBMIT CODE FOR CLAIMED SCENARIO
* ASSIGNMENT Due 05/23/2021 
* COP 2220C - 33940
* Professor: Jerry Reed
A company has very strict age limits for future employees. The company needs to find employees that will fit this age requirement
before or on the date of hire. The recruiter wants an easy way to calculate how old the applicant is, 
if they meet the required age, and how long until they do meet the required age. Create a program that:

1. Asks for a applicants DOB (month, day, and year)

2. Asks for a hiring date

3. Asks for an age requirement

4. Checks if the applicant fulfills the age requirement

5. If the applicant does not meet the age requirement, check to see how many days until they do

6. See if they will meet the age requirement by the date of hiring

7. Output whether the applicant is valid currently, valid by the time of hiring (include the amount of days until their birthday), or if they are not valid at all
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int presentDay, presentMonth, presentYear;
	int dobDay, dobMonth, dobYear;
	int hireDay, hireMonth, hireYear;
	int difDays, difMonth, difYear;
	int minAgeReq = 0;
	int minDaysReq = 0; // 18 years * 365 days = 6570 days


	difDays = 0;
	difMonth = 0;

	// ASKING FOR DOB AND DATE OF HIRE

	printf("Enter DOB:  day, month, year (press Enter after each input)\n");
	scanf("%d%d%d", &dobDay, &dobMonth, &dobYear);

	printf("Enter Hire date :  day, month, year (press Enter after each input) \n");
	scanf("%d%d%d", &hireDay, &hireMonth, &hireYear);

	printf("Enter Todays date : day, month, year (press Enter after each input)\n");
	scanf("%d%d%d", &presentDay, &presentMonth, &presentYear);

	printf("Enter minimum Age Requirement in Years (press Enter after input)\n");
	scanf("%d", &minAgeReq);
	printf("\n Minimum Age Requirement in Days is: %d\n", minAgeReq*365);

	printf("Difference from Hire date and DOB : %d Years %d Months %d Days \n", hireYear - dobYear, hireMonth - dobMonth, hireDay - dobDay);
	
	difMonth = hireMonth - dobMonth;
	difDays = dobDay + (difMonth * 30) + ((hireYear - dobYear) * 365);
	minDaysReq = minAgeReq * 365;

	printf("Difference from Hire date and DOB in Days is: %d \n", difDays);

	 if (difDays >= minDaysReq ) {
		 printf("Person is eligible for hire Age is Greater than min Req Age: %d Years\n", minAgeReq);
	 }
	

		else if ( difDays < minDaysReq) {
		 printf("Person is not old enough, less than min Req Age: %d Years\n", minAgeReq);
		 printf("Differenece in Days to Req Age: %d days\n", minDaysReq-difDays);
		}

	system("pause");

	return 0;
}