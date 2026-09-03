# Lab-Guess-a-number-game

## Algorithm 

1. I start the program which include the libraries that I used in the code for the guess number game. 
    - 'studi.h' is used for the printf() and scanf(). 
    - 'stdlib.h' is used for the rand() and srand for the functions. 
    - 'time.h' is used for the time(NULL) because it help to create a different random number. 

2. Define used for the true as a value of 1 and false value of 0. These values will be used to keepGoing to control when guessing loop starts and stops. 

3. Main() function which it will begins the program. 

4. the chararcter array is called userName with 20 character in which this is used to store the name of the player. 

5. Create an integar variable which cakked 'guess'. this variable will store the number entered by the player. 

6. Create an integar variable 'turn' and this will set it equal to 0. This variable keeps track of how many guesses the player makes. 

7. printf() will ask the player for player name. 

8. scanf() read the player name and store it in userName. 

9. printf() statment welcome the play when player enter the name that was entered by the player. 

10. srand(time(NULL)) set up the random number generator. which using the help the program to choose a different number when the game is played again. 

11. use rand() %100+1 is to generate a randome number from 1 to 100. which store this number in an integer variable called correct. The correct number stays hidden from the player. 

12. keepgoing create an integar vaiable and it set it to true because as long as keepGoing is true and the game will continue asking the player for gusse the different number. 

13. whiel(keepgoing) loop. this loop will continue running unless player gusses the correct number. 

14. inside the while loop, it use printf() to show the current turn number and ask the player to enter a game.

15. use scanf() to read the number entered bu the player and store it in the guess variable. 

16. turns++ after each guess.This will add 1 to the turn counter every time the player enters a number. 

17. 'if' statement if compare guess with the correct number. For example if the guess is greater than correct it will print "Too high". 

18. 'else if' statement to check if guess is less than correct. If it is then it will print "TOO low". 

19. 'else' is when the guess is not too high or low. This means the player guessed the correct number. 

20. when player gets the correct number it will print "you got it!" and change 'keepGoing' from true to false. 

21. 'keepGoing' is now false, the while loop stops and the program start next part. 

22. printf() is to display the total number of turns the player took to guess the correct number. 

23. return 0 is to finish the main() function and end the program.  


