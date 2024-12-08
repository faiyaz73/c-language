// goto statement 

// #include<stdio.h>
//  int main(){
//  int  num;              
//  input_num:                    // label for goto
//   printf("Please Enter your number :  ");
//   scanf(" %d",&num);


//   if (num != 10){
//     goto input_num;
//   }


//   return 0;
// }






// C program to print right half pyramid pattern of star 
#include <stdio.h> 

int main() 
{ 
	char rows = 'A'; 

	// first loop for printing rows 
	for ( i = 0; i < rows; i++) { 

		// second loop for printing character in each rows 
		for (j = 0; j <= i; j++) { 
			printf(rows); 
      
		} 
		printf("\n"); 
	} 
	return 0; 
}
