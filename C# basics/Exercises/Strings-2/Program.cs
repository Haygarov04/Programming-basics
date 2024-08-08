var fullName = "Velislav Haygarov";
Console.WriteLine("Trim: '{0}'", fullName.Trim());
Console.WriteLine("To Upper: '{0}'", fullName.ToUpper());

var index = fullName.IndexOf(' ');
var firstName = fullName.Substring(0, index);
var lastName = fullName.Substring(index + 1);
Console.WriteLine(firstName);
Console.WriteLine(lastName);

var names = fullName.Split(' ');
Console.WriteLine(names[0]);
Console.WriteLine(names[1]);

//fullName.Replace("Velislav", "Mitko");
Console.WriteLine(fullName.Replace("Velislav", "Mitko"));

string newString = ""; 
if (String.IsNullOrWhiteSpace(newString))
{
    Console.WriteLine("Please enter name");
}

var str = "25";
var age=Convert.ToInt32(str);
Console.WriteLine(age);

float price = 222.95f;
var formattedPrice=price.ToString("C0");
Console.WriteLine(formattedPrice);