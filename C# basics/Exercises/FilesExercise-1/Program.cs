internal class Program
{
    private static void Main(string[] args)
    {
        //1- Write a program that reads a text file and displays the number of words.
        var path = @"C:\Users\velis\Desktop\Programing\Programming-basics\C# basics\Exercises\TextEx.txt";
        var allString = File.ReadAllText(path);
        var words = allString.Split(' ');

        Console.WriteLine("There are " + words.Length + " words!");

        //2- Write a program that reads a text file and displays the longest word in the file.
        var longestWord = words[0];
        int longestWordLenght = words[0].Length;
        foreach (var word in words)
        {
            if (longestWordLenght < word.Length)
            {
                longestWord = word;
                longestWordLenght = word.Length;
            }
        }
        Console.WriteLine(longestWord);
    }
}