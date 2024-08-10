//4- Write a program and ask the user to enter a few words separated by a space.
//Use the words to create a variable name with PascalCase. For example, if the user types:
//"number of students", display "NumberOfStudents". Make sure that the program is not dependent on the input.
//So, if the user types "NUMBER OF STUDENTS", the program should still display "NumberOfStudents".
using System.Globalization;

Console.WriteLine("Please enter a few words separated by a space:");
string input = Console.ReadLine();
if (input == null)
{ Console.WriteLine("Empty string"); }

string[] words = input.ToLower().Split(" ");

string pascalCaseResult = "";
foreach (var i in words)
{
    // Капитализиране на първата буква и добавяне към резултата
    pascalCaseResult += CultureInfo.CurrentCulture.TextInfo.ToTitleCase(i);
}

// Извеждаме резултата
Console.WriteLine(pascalCaseResult);

