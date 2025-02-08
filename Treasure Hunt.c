/*   Your task is to design a game where the player embarks on an adventurous treasure hunt. The game features an adventurer tasked with navigating a perilous treasure hunt in a mysterious labyrinth. The labyrinth is filled with traps, riddles, and challenges that will test his wit and bravery. The goal is to find the ultimate treasure hidden in one of the secret chambers. The objective is to simulate the treasure hunt journey and generate responses based on the player's decisions.

The game should display corresponding messages in new line for each action the player takes.

Game Description:

Starting Point: You begin at the entrance of the labyrinth. You must choose between three paths:
1: The Left Path (leads to a swamp).
2: The Middle Path (leads to a maze).
3: The Right Path (leads to an underground vault).
Left Path (Swamp):
You encounter a swamp. Your choices are:
1: Attempt to cross the swamp on foot.
Risk: Hidden quicksand which ends the game.
2: Search for a bridge to cross safely.
If you search for a bridge:
1: You find a sturdy bridge (safe crossing) and proceed to the final room.
2: The bridge collapses, and you fall into the swamp (lose the game).
Middle Path (Maze):
You enter a labyrinth filled with dead ends. To find the exit, you must solve a puzzle:
Puzzle: "I am a three-digit number. My second digit is four times bigger than the third digit, my first digit is three less than the second digit, and the sum of my digits is 15. What number am I?"
If you solve the puzzle correctly, you can proceed to the final room.
If incorrect, you trigger a trap and lose.
Right Path (Underground Vault):
You find a locked vault guarded by a puzzle.
Puzzle: "What number comes next in the sequence: 2, 6, 12, 20, __?"
A wrong answer triggers an alarm, and you are caught (game over).
If you solve the puzzle, you open the vault to find key to the final room.
Final Room:
Each successful path leads to a final treasure room.
There are three chests:
1: Take the Golden Chest (contains a deadly trap and ends the game).
2: Take the Silver Chest (an empty chest, player loses gaining nothing).
3: Take the Bronze Chest (contains the ultimate treasure, player wins the game).
Input Format

The first input is an integer representing the chosen path at the labyrinth entrance:
1 for the Left Path.
2 for the Middle Path.
3 for the Right Path.
Based on the chosen path:
For Left Path:
A second input, an integer, represents the action in the swamp:
1 to attempt crossing on foot.
2 to search for a bridge.
If 2, a third input is required:
1 if the bridge is sturdy.
2 if the bridge collapses.
For Middle Path:
A second input is the player's answer to the puzzle.
For Right Path:
A second input is the player's answer to the sequence puzzle.
After reaching the final room, a final input is required:
1 to choose the Golden Chest.
2 to choose the Silver Chest.
3 to choose the Bronze Chest.
Constraints

Path Choice:
Input must be 1, 2, or 3.
Action Choice:
Left Path: 1 or 2.
Middle Path: A valid 3-digit number.
Right Path: A valid single number.
Treasure Chest:
Input must be 1, 2, or 3.
Output Format

The game should print one message per decision, followed by the final outcome:

For the Entrance:
"Player chooses the [Left/Middle/Right] path."
For Left Path (Swamp):
If 1: "Poor choice, Game Over!"
If 2: "Player found a bridge.", and
1: "Player crosses the bridge safely"
2: "Poor luck, Game Over!"
For Middle Path (Maze):
If the puzzle is correct: "Player solved the puzzle."
If the puzzle is incorrect: "Foolish player, Game Over!"
For Right Path (Vault):
If the puzzle is correct: "Player solved the puzzle."
If the puzzle is incorrect: "Foolish player, Game Over!"
For the Final Room:
If 1: "All that glitters is not gold, Game Over!"
If 2: "All your efforts were for nothing, Game Over!"
If 3: "Congratulations!! You won the treasure."

Sample Input 0
1
2
1
3

Sample Output 0
Player chooses the Left path.
Player found a bridge.
Player crosses the bridge safely.
Congratulations!! You won the treasure.

Sample Input 1
1
1
3

Sample Output 1
Player chooses the Left path.
Poor choice, Game Over!

Sample Input 2
1
2
2
3

Sample Output 2
Player chooses the Left path.
Player found a bridge.
Poor luck, Game Over!

Sample Input 3
1
2
1
3

Sample Output 3
Player chooses the Left path.
Player found a bridge.
Player crosses the bridge safely.
Congratulations!! You won the treasure.

Sample Input 4
1
2
1
1

Sample Output 4
Player chooses the Left path.
Player found a bridge.
Player crosses the bridge safely.
All that glitters is not gold, Game Over!

Sample Input 5
1
2
1
2

Sample Output 5
Player chooses the Left path.
Player found a bridge.
Player crosses the bridge safely.
All your efforts were for nothing, Game Over!    */





#include <stdio.h>

int main() {

    int a;
    int x;
    scanf("%d %d  ",&a ,&x);
    if(a==1){
        printf("Player chooses the Left path.\n");
        if(x==2){
         printf("Player found a bridge.\n");
            int pull,box;
            scanf("%d %d",&pull,&box);
            if(pull==1){
                printf("Player crosses the bridge safely.\n");
                if(box==3){
                    printf("Congratulations!! You won the treasure.\n");
                }
                else if(box==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(box==2){
                        printf("All your efforts were for nothing, Game Over!\n");         
                    }
           }
          else if(pull==2){
              printf("Poor luck, Game Over!\n");
          }  
      }
        else if(x==1){
            printf("Poor choice, Game Over!\n");
        }
    }
    
   else if(a==2){
       printf("Player chooses the Middle path.\n");
       if(x==582){
           printf("Player solved the puzzle.\n");
           int box;
           scanf("%d",&box);
           
           if(box==3){
                    printf("Congratulations!! You won the treasure.\n");
                }
                else if(box==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(box==2){
                        printf("All your efforts were for nothing, Game Over!\n");         
                    }
           
       }
       
       else if(x!=582){
           printf("Foolish player, Game Over!\n");
       }
       
   }
    
   else if(a==3){
       printf("Player chooses the Right path.\n");
       if(x==30){
           printf("Player solved the puzzle.\n");
           
           int box;
           scanf("%d",&box);
           
           if(box==3){
                    printf("Congratulations!! You won the treasure.\n");
                }
                else if(box==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(box==2){
                        printf("All your efforts were for nothing, Game Over!\n");         
                    }
           
       }
       else if(x!=30){
           printf("Foolish player, Game Over!\n");
       }
       
   } 
    
    return 0;
}

