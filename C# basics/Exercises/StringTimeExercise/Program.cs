//3- Write a program and ask the user to enter a time value in the 24-hour time format (e.g. 19:00).
//A valid time should be between 00:00 and 23:59. If the time is valid, display "Ok"; otherwise, display
//"Invalid Time". If the user doesn't provide any values, consider it as invalid time.

using System;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Please enter a time in 24-hour format (e.g., 19:00):");
        string input = Console.ReadLine();

        if (string.IsNullOrWhiteSpace(input))
        {
            Console.WriteLine("Invalid Time");
            return;
        }

        TimeSpan time;
        bool isValidTime = TimeSpan.TryParse(input, out time);

        if (isValidTime && time >= TimeSpan.FromHours(0) && time < TimeSpan.FromDays(1))
        {
            Console.WriteLine("Ok");
        }
        else
        {
            Console.WriteLine("Invalid Time");
        }
    }
}