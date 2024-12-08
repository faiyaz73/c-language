// if-else ladder 


// #include<stdio.h>
// int main(){
//   int age;
//   printf("Enter Your Age :  ");
//   scanf("%d",&age);


// if(age < 18){
//   printf("you eligible :\n" );
// }else if(age > 70){
//   printf("you are a senior , you can not apply anymore\n");
// }else{
//   printf("You are eligible for a licenses\n");
// }

//   printf("your age is %d",age);
//   return 0;

// }




// #include<stdio.h>
// int main(){
//   int marks;

// printf("Enter your marks :  ");
// scanf("%d",&marks);


// if(marks > 90){
//   printf("top");

// }else if(marks < 90 && marks >=80){
//   printf("Average students");

// }else if(marks <80 && marks >= 70){
//   printf(" first devisions");
// }else{
//   printf("fail");
// }



// return 0;

// }




#include<stdio.h>
int main(){
  int num;

printf("Enter your any numbers :  ");
scanf("%d",&num);



if(num % 3==0  && num % 12 ==0){
  printf(" divisible by 3 numbers ");
}else{
  printf(" not a divisible  :  ");
}
return 0;

}