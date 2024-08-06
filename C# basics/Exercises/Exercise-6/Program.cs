//2- Write a program and continuously ask the user to enter a number or "ok" to exit.
//Calculate the sum of all the previously entered numbers and display it on the console.

internal class Program
{
    private static void Main(string[] args)
    {
        string input = "";
        int times = -1;
        do
        {
            Console.WriteLine("Please enter number or ok(for exit)");
            input =Console.ReadLine();
            times++;
        }while (input!="ok");

        Console.WriteLine(times);
    }
}