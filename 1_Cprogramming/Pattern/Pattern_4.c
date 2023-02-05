
/*N
  NE
  NEP
  NEPA
  NEPAL*/

  #include<stdio.h>
  int main()
  {
      int i=0,j=0;
      char a[5]="NEPAL";
      for(i=0;i<5;i++){
          for(j=0;j<=i;j++){
              printf("%c",a[j]);
          }
          printf("\n");
      }
  }

