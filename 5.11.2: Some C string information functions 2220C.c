strchr()   
  /* strchr(sourceStr, searchChar) 
  Returns NULL if searchChar does not exist in sourceStr. 
  (Else, returns address of first occurrence, discussed elsewhere). NULL is defined in the string.h library.
  */
  if (strchr(orgName, 'U') != NULL) { // 'U' exists in orgName?
   ...  // 'U' exists in "United Nations", branch taken
}  
if (strchr(orgName, 'u') != NULL) { // 'u' exists in orgName?
   ...  // 'u' doesn't exist (case matters), branch not taken
}
  
// NEXT strlen()
strlen()
  
  /*size_t strlen(sourceStr)

Returns number of characters in sourceStr up to, but not including, first null character. size_t is integer type.
*/
  x = strlen(orgName);    // Assigns 14 to x 
x = strlen(userText);   // Assigns 6 to x
x = strlen(targetText); // Error: targetText may lack null char


//strcmp()
strcmp()
  
  /*
  int strcmp(str1, str2)

Returns 0 if str1 and str2 are equal, non-zero if they differ.
*/
  if (strcmp(orgName, "United Nations") == 0) {
   ... // Equal, branch taken
}
if (strcmp(orgName, userText) != 0) {
   ... // Not equal, branch not taken
}
