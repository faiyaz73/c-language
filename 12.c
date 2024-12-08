// Switch  


// #include<stdio.h>
// int main(){
//   int days;
// printf("Please Enter day number between(1-7) : ");
// scanf("%d",&days);


// switch(days){
//   case 1:
//   printf("Today is monday");
//   break;
//    case 2:
//   printf("Today is tuesday");
// break;
//    case 3:
//   printf("Today is Wednesday");
//   break;
//    case 4:
//   printf("Today is thursday");
//   break;
//    case 5:
//   printf("Today is friday");
//   break;
//    case 6:
//   printf("Today is saturday");
//   break;
//  case 7:
//   printf("Today is sunday");
//   // break;
//   default:
//   printf("Not a correct value");
//   // break;
// }
// printf("\n days complited");
//   return 0;
// }






// #include <stdio.h>

// int main() {
//   char greetings[] = "Hello World!";
//   printf("%s", greetings);
 
//   return 0;
// }





// #include <stdio.h>

// int main() {
//   char greetings[] = "Hello World!";
//   printf("%c", greetings[0]);
 
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char greetings[] = "Hello World!";
//   greetings[0] = 'J';
//   printf("%s", greetings);

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char carName[] = "Volvo";
//   int i;
  
//   for (i = 0; i < 5; ++i) {
//     printf("%c\n", carName[i]);
//   }

//   return 0;
// }



// #include <stdio.h>

// int main() {
//   char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
//   char greetings2[] = "Hello World!";
  
//   printf("%s\n", greetings);
//   printf("%s\n", greetings2);
  
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char message[] = "Good to see you,";
//   char fname[] = "John";

//   printf("%s %s!", message, fname);
 
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str1[] = "Hello";
//   char str2[] = "Hello";
//   char str3[] = "Hi";

//   // Compare str1 and str2, and print the result
//   printf("%d\n", strcmp(str1, str2));
  
//   // Compare str1 and str3, and print the result
//   printf("%d\n", strcmp(str1, str3));
  
//   return 0;
// }





// #include <stdio.h>

// int main() {
//   char txt[] = "We are the so-called \"Vikings\" from the north.";
//   printf("%s", txt);
 
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char str1[20] = "Hello ";
//   char str2[] = "World!";
 
//   // Concatenate str2 to str1 (the result is stored in str1)
//   strcat(str1, str2);
  
//   // Print str1
//   printf("%s", str1);
 
//   return 0;
// }




// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char str1[20] = "Hello ";
//   char str2[] = "World!";
 
//   // Concatenate str2 to str1 (the result is stored in str1)
//   strcat(str1, str2);
  
//   // Print str1
//   printf("%s", str1);
 
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str1[20] = "Hello World!";
//   char str2[20];

//   // Copy str1 to str2
//   strcpy(str2, str1);

//   // Print str2
//   printf("%s", str2);
  
//   return 0;
// }






// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str1[] = "Hello";
//   char str2[] = "Hello";
//   char str3[] = "Hi";

  
//   printf("%d\n", strcmp(str1, str2));
  
  
//   printf("%d\n", strcmp(str1, str3));
  
//   return 0;
// }




// #include <stdio.h>


// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
  
//   struct myStructure s1 = {13, 'B', "Some text"};

  
//   printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

//   return 0;
// }




// #include <stdio.h>
// #include <string.h>

// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];  
// };

// int main() {
//   struct myStructure s1;

//   strcpy(s1.myString, "Some text");

//   printf("My string: %s", s1.myString);

//   return 0;
// }




// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30]; 
// };

// int main() {
//   struct myStructure s1;

  
//   strcpy(s1.myString, "Some text");

  
//   printf("My string: %s", s1.myString);

//   return 0;
// }

// #include <stdio.h>

// struct myStructure {
//   int myNum;
//   char myLetter;
// };

// int main() {
  
//   struct myStructure s1;
//   struct myStructure s2;

  
//   s1.myNum = 13;
//   s1.myLetter = 'B';

//   s2.myNum = 20;
//   s2.myLetter = 'C';

  
//   printf("s1 number: %d\n", s1.myNum);
//   printf("s1 letter: %c\n", s1.myLetter);

//   printf("s2 number: %d\n", s2.myNum);
//   printf("s2 letter: %c\n", s2.myLetter);

//   return 0;
// }


// #include<stdio.h>
// struct mystructure{
//   int mynum;
//   char myletters;

// };

// int main(){
// struct mystructure s1;
// s1.mynum = 13;
// s1.myletters = 'B';

// printf("my number %d" ,s1.mynum);
// printf("my letter %d" ,s1.myletters);
// return 0;
// }



// #include <stdio.h>

// struct Car {
//   char brand[50];
//   char model[50];
//   int year;
// };

// int main() {
//   struct Car car1  = {"BMW", "X5", 1999};
//   struct Car car2  = {"Ford", "Mustang", 1969};
//   struct Car car3  = {"Toyota", "Corolla", 2011};

//   printf("%s %s %d\n", car1.brand, car1.model, car1.year);
//   printf("%s %s %d\n", car2.brand, car2.model, car2.year);
//   printf("%s %s %d\n", car3.brand, car3.model, car3.year);

//   return 0;
// }