//1- Write a program and ask the user to enter a few numbers separated by a hyphen.
//Work out if the numbers are consecutive. For example, if the input is "5-6-7-8-9"
//or "20-19-18-17-16", display a message: "Consecutive"; otherwise, display "Not Consecutive".

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Enter numbers that are consecutive like: \"5-6-7-8-9\"");
        var consecutiveNumbers = Console.ReadLine();

        string[] newNumbers = consecutiveNumbers.Split('-');

        // Създайте масив от цели числа и конвертирайте стринговете в числа
        int[] intNewNumbers = new int[newNumbers.Length];
        for (int i = 0; i < newNumbers.Length; i++)
        {
            intNewNumbers[i] = int.Parse(newNumbers[i]);
        }

        // Проверете дали числата са последователни
        bool areConsecutive = true;
        for (int i = 0; i < intNewNumbers.Length - 1; i++)
        {
            if (intNewNumbers[i + 1] - intNewNumbers[i] != 1)
            {
                areConsecutive = false;
                break;
            }
        }

        // Изведете резултата
        if (areConsecutive)
        {
            Console.WriteLine("The numbers are consecutive.");
        }
        else
        {
            Console.WriteLine("The numbers are not consecutive.");
        }
    }
}