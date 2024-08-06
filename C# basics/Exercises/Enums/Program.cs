enum DayOfWeek
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
}

class Program
{
    static void Main()
    {
        // Example of using the enum
        DayOfWeek today = DayOfWeek.Wednesday;

        // Display the name of the day
        Console.WriteLine($"Today is {today}.");

        // You can also get the numeric value of the day
        Console.WriteLine($"The numeric value of today is {(int)today}.");

        // Example of converting a number to DayOfWeek
        int dayNumber = 5; // Thursday
        if (Enum.IsDefined(typeof(DayOfWeek), dayNumber))
        {
            DayOfWeek day = (DayOfWeek)dayNumber;
            Console.WriteLine($"The number {dayNumber} corresponds to {day}.");
        }
        else
        {
            Console.WriteLine("Invalid number for a day of the week.");
        }
    }
}