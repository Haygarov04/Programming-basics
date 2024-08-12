//5- Write a program and ask the user to enter an English word. Count the number of vowels (a, e, o, u, i)
//in the word. So, if the user enters "inadequate", the program should display 6 on the console.
internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Please enter an English word:");
        string word = Console.ReadLine();
        int vowelCount = 0;

        word = word.ToLower();

        foreach (var letter in word)
        {
            if (letter == 'a'|| letter == 'e'|| letter == 'o'|| letter == 'u'|| letter == 'i')
            {
                vowelCount++;
            }
        }
        Console.WriteLine("Number of vowels: " + vowelCount);
    }
}