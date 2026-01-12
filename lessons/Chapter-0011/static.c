   /* objective: practice static variables in functions */
   #include <stdio.h>

   int sum (int num) {
       /* declare a static variable total and add num to it each time the function is called */
       static int total = 0;
       total += num;
       return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }