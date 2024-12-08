// Truthy vs falsy  

// flasy 0 and null are considered false  


#include<stdio.h>
int main(){
  int age;
  printf("Enter Your Age :  ");
  scanf("%d",&age);


if(age >=18){
  printf("you eligible :\n" );
  printf("this persion is vote" );
}if(NULL){
  printf("This is a never going to be printed : ");
}
  printf("my  age is %d",age);
  return 0;

}