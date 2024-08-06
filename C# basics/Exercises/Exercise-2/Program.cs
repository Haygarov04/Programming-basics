using System;
//2- Write a program which takes two numbers from the
//console and displays the maximum of the two.
class Program
{
    public void Main(string[] args)
    {
        string num1 = Console.ReadLine();
        string num2 = Console.ReadLine();

        int numm1 = int.Parse(num1);
        int numm2 = int.Parse(num2);

        if (numm1 > numm2)
        {
            Console.WriteLine(num1);
        }
        else
        {
            Console.WriteLine(numm2);
        }
    }
}