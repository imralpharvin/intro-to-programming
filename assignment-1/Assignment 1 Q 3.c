   int varOne = 0;
   int varTwo = 0;
   double varThree = 0.0;
   char varFour = '?';
   char varFive = '?';

   varThree = 28.6;

   printf ("Enter a number:\n");
   scanf ("%d", &varOne);

   printf ("Enter a character:\n");
   scanf (" %c", &varFour);

   printf ("%d %d %lf %c %c\n", varOne, varTwo, varThree, varFour, varFive);

   varTwo = varFour;
   varFive = varOne;

   printf("%d %d %lf %c %c\n", varOne, varTwo, varThree, varFour, varFive);