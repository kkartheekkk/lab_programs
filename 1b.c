#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
// Function to verify if a vehicle registration number is valid 
bool verifyRegistration(char registration[])  
{ 
// Check if the registration number has exactly 10 characters 
if (strlen(registration) != 10)  
{ 
return false; 
} 
// Check if the first two characters are alphabets (e.g., "KA" for Karnataka) 
for (int i = 0; i < 2; i++)  
{ 
} 
if (!isalpha(registration[i]))  
{ 
return false; 
} 
// Check if the next two characters are numbers (e.g., "09" for a specific district) 
for (int i = 2; i < 4; i++)  
{ 
} 
if (!isdigit(registration[i]))  
{ 
return false; 
} 
// Check if the next two characters are alphabets (e.g., "MN" for serial number) 
for (int i = 4; i < 6; i++)  
