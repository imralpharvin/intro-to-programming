#include <stdio.h>

int main(void) {
   char userInput= '?';
   int inputa = 0;
   int inpute = 0;
   int inputi = 0;
   int inputo = 0;
   int inputu = 0;
   int input1 = 0;
   int input2 = 0;
   int input3 = 0;
   int input4 = 0;
   int input5 = 0;

   printf ("Enter a vowel (a,e,i,o,u) or a special character(#,%%,$,^,&):\n");
   scanf (" %c", &userInput);

   while (userInput != '*'){
      switch (userInput) {
         case 'a':
         inputa = inputa + 1;
         break;

         case 'e':
         inpute = inpute + 1;
         break;

         case 'i':
         inputi = inputi + 1;
         break;

         case 'o':
         inputo = inputo + 1;
         break;

         case 'u':
         inputu = inputu + 1;
         break;

         case '#':
         input1 = input1 + 1;
         break;

         case '%':
         input2 = input2 + 1;
         break;

         case '$':
         input3 = input3 + 1;
         break;

         case '^':
         input4 = input4 + 1;
         break;

         case '&':
         input5 = input5 + 1;
         break;

      }

      if (inputa > 0){
         printf("a: %d\n", inputa);
      }

      if (inpute > 0){
         printf("e: %d\n", inputi);
      }

      if (inputi > 0){
         printf("i: %d\n", inputi);
      }

      if (inputo > 0){
         printf("o: %d\n", inputo);
      }

      if (inputu > 0){
      printf("u: %d\n", inputu);
      }

      if (input1 > 0){
      printf("#: %d\n", input1);
      }

      if (input2 > 0){
      printf("%%: %d\n", input2);
      }

      if (input3 > 0){
      printf("$: %d\n", input3);
      }

      if (input4 > 0){
      printf("^: %d\n", input4);
      }

      if (input5 > 0){
      printf("&: %d\n", input5);
      }

      printf("Enter the next letter or press * to quit:\n");
      scanf(" %c", &userInput);

   }
   printf("Goodbye\n");
   return 0;
}