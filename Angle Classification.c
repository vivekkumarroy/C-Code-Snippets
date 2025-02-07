
 /*    A boy is playing with a clock, and initially, the clock points at 12:00. He rotates the hour hand by a given angle, x degrees. Your task is to classify the resulting angle formed between the hour hand and the minute hand based on the following rules:

Acute Angle: An angle less than 90 degrees.
Right Angle: An angle exactly equal to 90 degrees.
Obtuse Angle: An angle between 90 degrees and 180 degrees.
Straight Angle: An angle exactly equal to 180 degrees.
Reflex Angle: An angle greater than 180 degrees but less than 360 degrees.
Full Rotation: An angle exactly equal to 360 degrees.
Write a program to determine the type of angle formed between the hour hand and minute hand.

Note:

The minute hand does not move when the hour hand is rotated. Only the hour hand rotation is considered.
The boy may rotate the hour hand more than 1 rotation.
If the boy decides not to rotate the hour hand at all, then assume the result as Acute Angle.
Input Format

A single integer representing the angle x

Constraints

0 ≤ x ≤ 10^6

Output Format

Print the classification of the angle in terms of Acute Angle, Right Angle, Obtuse Angle, Straight Angle, Reflex Angle, or Full Rotation.

Sample Input 0
90

Sample Output 0
Right Angle

Sample Input 1
45

Sample Output 1
Acute Angle

Sample Input 2
150

Sample Output 2
Obtuse Angle

Sample Input 3
270

Sample Output 3
Reflex Angle

Sample Input 4
360

Sample Output 4
Full Rotation

Sample Input 5
400

Sample Output 5
Acute Angle      */



#include <stdio.h>
int main() {
   int x;
    scanf("%d",&x);
         int a=x%360;
    
        if(x>=0&&x<90){
        printf("Acute Angle\n");
    }
        else if(x==90){
        printf("Right Angle\n");
    }
        else if(x>90&&x<180){
        printf("Obtuse Angle\n");
    }
        else if(x==180){
        printf("Straight Angle\n");
    }
        else if(x>180&&x<360){
        printf("Reflex Angle\n");
    }
    
    else if(a==0){
        printf("Full Rotation\n");
    }
     else if(a>=0&&a<90){
        printf("Acute Angle\n");
    }
        else if(a==90){
        printf("Right Angle\n");
    }
        else if(a>90&&a<180){
        printf("Obtuse Angle\n");
    }
        else if(a==180){
        printf("Straight Angle\n");
    }
        else if(a>180&&a<360){
        printf("Reflex Angle\n");
    }
    
   
    return 0;
}
