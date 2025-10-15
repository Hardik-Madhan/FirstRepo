# include<stdio.h>
int main()
{

// PRIMARY CODE 

         printf("Hello World") ;
         


//  DATA TYPE & VARIABLES

         int age=17;
         char h='H'; char a='A'; char r='R'; char d='D'; char i='I'; char k='K';
         float hight = 6.1;
         double  weight =64.55;
         printf(   "     my name is %c%c%c%c%c%c\n     my age is %d\n     my hight is %f\n     my weight is %lf\n" ,h,a,r,d,i,k,age,hight,weight );
         
         printf("SOME EXTRA OUT OF BOX JUST FOR KNOWDLEDGE ::\n");
         printf("START->%11.3f<-END\n",hight); 
         /* it will take 11 spaces to print that variable including 3 digit after decimal point
         in this expression the digit is of 5 spaces and 11-5=6 ; 6spacs it will leave before 
          printing yhe entered digit  as in OUTPUT */
         printf("START->%-11.3f<-END\n",hight);
         /* it will take 11 spaces to print that variable including 3 digit after decimal point
         in this expression the digit is of 5 spaces and 11-5=6 ; 6spacs it will leave after 
          printing yhe entered digit  as in OUTPUT */

     //OUTPUT
         /*  my name is HARDIK
         my age is 17
         my hight is 6.100000
        my weight is 64.550000
         SOME EXTRA OUT OF BOX JUST FOR KNOWDLEDGE ::
         START->      6.100<-END
         START->6.100      <-END
        */


//  MODIFIERS
         
// OPERATORS
 // Binary Operator
 // Uniry Operator  ( Increment/Decrement)
    // PRE Increment  (++a)  incriment by 1 & assign

         /*int a=4;
         printf("  %d\n  %d ",++a,a);
         return 0;*/
     // OUTPUT
          /*  5
              5*/


    // POST Increment (a++)  assign  &  increment by 1
      
          /*int C= 5;
            printf("   %d\n   %d\n" , C++ ,C);
            return 0;*/
     //OUTPUT
        /*  5
            6*/


    //PRE Decrementn  (--a) decrease and assign 
         /* int a=4;
           printf("  %d\n  %d ",--a,a);
           return 0;*/
     // OUTPUT
         /*3
           3*/

               
    //POST Decrement  (a--) assign and decrease 
         /* int C= 5;
            printf("   %d\n   %d\n" , C-- ,C);
            return 0; */
     //OUTPUT
         /* 5
            4*/
            
            
 //Ternary operator( expression1 ? expression2 : expression3)
     /* functiong performs as 
      execute fist operation after that
    if fist expression comes out to be True the value of  expression2 is assigned   
      BUT 
     first operation come out to be False then the value of expression3  is asigned  as example  */
        /* int g=6 ,S=5;
           int M=g>S ? g : S;
           int N=g<S ? g : S;
        
           printf("  %d\n",M);
           printf("  %d\n",N);
           return 0;*/
     //OUTPUT
         /*6
           5*/  



             

      

}
