//4- Write a program that picks a random number between 1 and 10. Give the user 4 chances to guess the number.
//If the user guesses the number, display “You won"; otherwise, display “You lost". (To make sure the program
//is behaving correctly, you can display the secret number on the console first.)

Random random = new Random();
int randomNumber = random.Next(1, 11);
Console.WriteLine("Try to guess the number between 1-10,you have 4 chances");

for(int i = 0; i < 4; i++) 
{
int input=int.Parse(Console.ReadLine());
    if(input == randomNumber )
    {
        Console.WriteLine("You won");
    }
}
Console.WriteLine("You lost!\n"+"The number is: "+randomNumber);