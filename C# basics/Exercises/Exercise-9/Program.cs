//5- Write a program and ask the user to enter a series of numbers separated by comma.
//Find the maximum of the numbers and display it on the console. For example, if the user enters
//“5, 3, 8, 1, 4", the program should display 8.

using System;
using System.Linq;

class Program
{
    static void Main()
    {
        Console.Write("Enter a series of numbers separated by commas: ");
        string input = Console.ReadLine();

        string[] numberStrings = input.Split(',');
        int[] numbers = numberStrings.Select(s => int.Parse(s.Trim())).ToArray();
        int maxNumber = numbers.Max();
        Console.WriteLine($"The maximum number is: {maxNumber}");
    }
}