//Question A
int factorial (int n) {

  int i, ret = 1;

  i=2;
  while(i<=n) {
     ret  =  ret * i;
     i++;
  }
  return ret;

}

//Question B

#include <stdlib.h>
double rand_double(){
   /* generate random number in [0,1) */
   double ret = (double) rand();
   return ret/((double)RAND_MAX+1);
}
int sample_geometric_rv(double p){
   double q;
   int n = 0;

   q = rand_double();
   n = n + 1;  //Do-while loop executes the loop once even if the condition is wrong
   while(q >= p){
      q = rand_double();
      n++;
   }
   return n;
 }