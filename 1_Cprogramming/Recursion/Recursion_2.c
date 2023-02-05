/* WAP to generate Fibonacci Series using recursion. */
/*#include<stdio.h>
int fibo(int);
int main(){
    int i,count,n;
    printf("Enter the number to display fibonacci:");
    scanf("%d",&x);
    printf("Fibonacci series:");
    for(i=1;i<=n;i++){
        printf("%d",fibo(count));
        count++;
    }
    return 0;
}
int fibo(int x){
    if(x==0)
        return 0;
    
    elseif(x==1)
        return 1;
    
    else
        return (fibo(x-1)+fibo(n-2));
    

}
*/

#include<stdio.h>
 
int Fibonacci(int);  // declear
 
int main()
{
   int n, i = 0, c;
 
   printf("How many terms do you want in your fibonacci series?"); 	 
  scanf("%d",&n);   
 
   printf("Fibonacci series\n"); 
 
   for ( c = 1 ; c <= n ; c++ )  
   {
      printf("%d\n", Fibonacci(i)); // call
      i++;  
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2));
}

