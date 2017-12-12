/*----------------------------------------------------------,
 *				HTBLA-Leonding / Klasse: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			M. Pölzl
 * Due Date:		December 12, 2017
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 void trim	(	const char * 	source, char * 	trimmed_string){                             //Der Gültigkeitsbereich ist durch source und trimmed_string festgelegt, wodurch nur der Pointer auf ein char array mitgegeben werden darf
   int trimmed_string_length = 0;
   int string_begun = 0;

   if (strlen(source) <= 0) {
     trimmed_string[0] = source[0];
   }
   else{

     for (int i = 0; i < strlen(source); i++) {

       if(source[i] != ' '){
         string_begun = 1;
       }

       if(string_begun == 1){

         if (copy_char(source, i)) {
           trimmed_string[trimmed_string_length] = source[i];
           trimmed_string_length++;
         }

       }

     }
   }
}
bool copy_char(const char* source, int i){
  if(!((source[i] == ' ' && source[i + 1] == ' ') || (source[i] == ' ' && source[i + 1] == '\0'))){
    return true;
  }
  return false;
}
