/*    You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.

Sample Input 0
3 1 4 7 5 4 2 9 5 4
3 5
7 4
1 5

Sample Output 0
3 6 4 2 5 4 2 3 5 4

Sample Input 1
9 8 7 6 5 4 3 2 1 0
0 3
4 1
8 2

Sample Output 1
2 8 7 6 6 4 3 2 3 0      */


#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,p,q,r,s,x,y;
    
scanf("%d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    
scanf("%d %d",&p,&q);
scanf("%d %d",&r,&s);
scanf("%d %d",&x,&y);
 
if((a>=0 && a<=9) && (b>=0 && b<=9) && (c>=0 && c<=9) && (d>=0 && d<=9) && (e>=0 && e<=9) && (f>=0 && f<=9) && (g>=0 && g<=9) && (h>=0 && h<=9) && (i>=0 && i<=9) && (j>=0 && j<=9)){
        
        if (p==0){
            a= (a+q)%10;
        }
        else if(p==1){
             b= (b+q)%10;
        }
         else if(p==2){
             c= (c+q)%10;
        }
         else if(p==3){
             d= (d+q)%10;
        }
         else if(p==4){
             e= (e+q)%10;
        }
         else if(p==5){
             f= (f+q)%10;
        }
         else if(p==6){
             g= (g+q)%10;
        }
         else if(p==7){
             h= (h+q)%10;
        }
         else if(p==8){
             i= (i+q)%10;
        }
         else if(p==9){
             j= (j+q)%10;
         }        
}
 if((a>=0 && a<=9) && (b>=0 && b<=9) && (c>=0 && c<=9) && (d>=0 && d<=9) && (e>=0 && e<=9) && (f>=0 && f<=9) && (g>=0 && g<=9) && (h>=0 && h<=9) && (i>=0 && i<=9) && (j>=0 && j<=9)){
               
 if (r==0){
            a= (a+s)%10;
        }
        else if(r==1){
             b= (b+s)%10;
        }
         else if(r==2){
             c= (c+s)%10;
        }
         else if(r==3){
             d= (d+s)%10;
        }
         else if(r==4){
             e= (e+s)%10;
        }
         else if(r==5){
             f= (f+s)%10;
        }
         else if(r==6){
             g= (g+s)%10;
        }
         else if(r==7){
             h= (h+s)%10;
        }
         else if(r==8){
             i= (i+s)%10;
        }
         else if(r==9){
             j= (j+s)%10;
        }
 }
    if((a>=0 && a<=9) && (b>=0 && b<=9) && (c>=0 && c<=9) && (d>=0 && d<=9) && (e>=0 && e<=9) && (f>=0 && f<=9) && (g>=0 && g<=9) && (h>=0 && h<=9) && (i>=0 && i<=9) && (j>=0 && j<=9)){
        
if (x==0){
            a= (a+y)%10;
        }
        else if(x==1){
             b= (b+y)%10;
        }
         else if(x==2){
             c= (c+y)%10;
        }
         else if(x==3){
             d= (d+y)%10;
        }
         else if(x==4){
             e= (e+y)%10;
        }
         else if(x==5){
             f= (f+y)%10;
        }
         else if(x==6){
             g= (g+y)%10;
        }
         else if(x==7){
             h= (h+y)%10;
        }
         else if(x==8){
             i= (i+y)%10;
        }
         else if(x==9){
             j= (j+y)%10;
         }
    
}
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
    
}