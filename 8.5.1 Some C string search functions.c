// 8.5.1: Some C string search functions.
  
  // Given:
char orgName[100] = "The Dept. of Redundancy Dept."; 
char newText[100]; 
char* subString = NULL;


// strchr()	strchr(sourceStr, searchChar)
// Returns NULL if searchChar does not exist in sourceStr. Else, returns pointer to first occurrence.
   if (strchr(orgName, 'D') != NULL) {   // 'D' exists in orgName?
   subString = strchr(orgName, 'D');  // Points to first 'D'
   strcpy(newText, subString);        // newText now "Dept. of Redundancy Dept."
}  
if (strchr(orgName, 'Z') != NULL) {   // 'Z' exists in orgName?
   ... // Doesn't exist, branch not taken
}


//strrchr()	strrchr(sourceStr, searchChar)
// Returns NULL if searchChar does not exist in sourceStr. Else, returns pointer to LAST occurrence (searches in reverse, hence middle 'r' in name).

if (strrchr(orgName, 'D') != NULL) {   // 'D' exists in orgName?
   subString = strrchr(orgName, 'D');  // Points to last 'D'
   strcpy(newText, subString);         // newText now "Dept."
}

// strstr()	strstr(str1, str2)
// Returns NULL if str2 does not exist in str1. Else, returns a char pointer pointing to first occurrence of string str2 within string str1.
 
subString = strstr(orgName, "Dept"); // Points to first 'D'
if (subString != NULL) {
   strcpy(newText, subString);       // newText now "Dept. of Redundancy Dept."
}
  
