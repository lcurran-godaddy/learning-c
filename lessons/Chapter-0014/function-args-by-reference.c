/* objective: practice passing function arguments by reference */
#include <stdio.h>

typedef struct {
  char * name;
  int age;
} person;

/* function to increment age by reference */
void birthday(person * p){
    /* increment the age of the person pointed to by p */
    p->age += 1;
};

/* write your function here */

int main() {
  person john;
  john.name = "John";
  john.age = 27;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}