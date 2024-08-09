//2- Write a program and ask the user to enter a few numbers separated by a hyphen.
//If the user simply presses Enter, without supplying an input, exit immediately;
//otherwise, check to see if there are duplicates. If so, display "Duplicate" on the console.

internal class Program
{
    private static void Main(string[] args)
    {
        var input = Console.ReadLine();
        if (string.IsNullOrWhiteSpace(input))
            return;
        string[] numbers = input.Split("-");
        int[] intNums = new int[numbers.Length];

        for (int i = 0; i < numbers.Length; i++)
        { intNums[i] = int.Parse(numbers[i]); }

        //for (int i = 0; i < intNums.Length; i++)
        //    Console.WriteLine(intNums[i]);

        bool hasDuplicates = false;
        for (int i = 0; i < intNums.Length; i++)
        {
            for (int j = i + 1; j < intNums.Length; j++)
            {
                if (intNums[i] == intNums[j])
                {
                    hasDuplicates = true;
                    break;
                }
            }
            if (hasDuplicates)
                break;
        }

        // Ако има дубликати, изведете съобщение
        if (hasDuplicates)
        {
            Console.WriteLine("Duplicate");
        }

    }
}