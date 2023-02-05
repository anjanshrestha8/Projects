/*     Define a structure data type called time-struct containing 
       three members hour, minute and second. Develop a program 
       that would assign values to the individual members and 
       display the time in the form 16:40:51.
*/
#include<stdio.h>
    struct time{
        int hours;
        int minute;
        int second;
    }s;
    int main(){
        printf("Enter the hour from 0 to 23.\n");
        scanf("%d",&s.hours);
        printf("Enter the minutes from 0 to 59.\n");
        scanf("%d",&s.minute);
        printf("Enter the seconds from 0 to 59.\n");
        scanf("%d",&s.second);
        printf("The time you enter is %d:%d:%d",s.hours,s.minute,s.second);
    
return 0;
}