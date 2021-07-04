#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "vector_employee.h"

// Add an employee
void AddEmployee(vector *employees) {
   Employee theEmployee;
   
   printf("\nEnter the name to add: \n");
   fgets(theEmployee.name, 50, stdin);
   theEmployee.name[strlen(theEmployee.name) - 1] = '\0'; // Remove trailing newline
   
   printf("Enter %s's department: \n", theEmployee.name);
   fgets(theEmployee.department, 50, stdin);
   theEmployee.department[strlen(theEmployee.department) - 1] = '\0'; // Remove trailing newline
   
   printf("Enter %s's title: \n", theEmployee.name);
   fgets(theEmployee.title, 50, stdin);
   theEmployee.title[strlen(theEmployee.title) - 1] = '\0'; // Remove trailing newline
   
   vector_push_back(employees, theEmployee);
   
   printf("%s's information has been added.\n", theEmployee.name);
}

// Delete an employee
void DeleteEmployee(vector *employees) {
   int nElements;
   int element;
   
   nElements = vector_size(employees);
   if (nElements > 0) {
      printf("Enter entry # to delete (0-%d), or -1 to skip deletion: \n", (nElements - 1));
      scanf("%d", &element);
      if (element >= 0) {
         vector_erase(employees, element);
         printf("Entry #%d deleted.\n", element);
      }
   }
   else {
      printf("\nThere are no entries to delete.\n");
   }
}


// List all employees
void ListEmployees(vector *employees) {
   int nElements;
   int i;
   
   nElements = vector_size(employees);
   if (nElements > 0) {
      printf("\n");
      for (i = 0; i < nElements; ++i) {
         printf("%d) Name: %s", i, (*vector_at(employees, i)).name);
         printf(",\tDepartment: %s", (*vector_at(employees, i)).department);
         printf(",\tTitle: %s\n", (*vector_at(employees, i)).title);
      }
   }
   else {
      printf("\nThere are no employees to list.\n");
   }
}

// Get the action the user wants to perform
char GetAction(const char* prompt) {
   char answer[50];
   char firstChar;

   firstChar = '?';
   
   printf("\n%s\n", prompt);
   fgets(answer, 50, stdin);
   while (strlen(answer) == 1) {
      fgets(answer, 50, stdin);
   }
   firstChar = toupper(answer[0]);
   
   return firstChar;
}

int main(void) {
   const char EXIT_CODE = 'X';
   const char PROMPT_ACTION[50] = "Add, Delete, List or eXit (a,d,l,x): ";
   vector employees;
   
   vector_create(&employees, 0);  // Create empty vector for employees
   char userAction;
   
   // Loop until the user enters the exit code.
   userAction = GetAction(PROMPT_ACTION);
   
   while (userAction != EXIT_CODE) {
      switch (userAction) {
         case 'A': AddEmployee(&employees);
            break;
         case 'D': DeleteEmployee(&employees);
            break;
         case 'L': ListEmployees(&employees);
            break;
         default : // Do nothing
            break;
      }
      
      userAction = GetAction(PROMPT_ACTION);
   }
   
   return 0;
}
