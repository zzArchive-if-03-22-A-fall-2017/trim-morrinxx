/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 void trim	(	const char * 	source, char * 	trimmed_string){
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

         if (!((source[i] == ' ' && source[i + 1] == ' ') || (source[i] == ' ' && source[i + 1] == '\0'))) {
           trimmed_string[trimmed_string_length] = source[i];
           trimmed_string_length++;
         }

       }

     }
   }
}
