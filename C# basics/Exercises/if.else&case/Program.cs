int number = 15;

if (number > 10)
{
    Console.WriteLine("Числото е по-голямо от 10.");
}
else if (number == 10)
{
    Console.WriteLine("Числото е равно на 10.");
}
else
{
    Console.WriteLine("Числото е по-малко от 10.");
}


int dayOfWeek = 3;

switch (dayOfWeek)
{
    case 1:
        Console.WriteLine("Понеделник");
        break;
    case 2:
        Console.WriteLine("Вторник");
        break;
    case 3:
        Console.WriteLine("Сряда");
        break;
    case 4:
        Console.WriteLine("Четвъртък");
        break;
    case 5:
        Console.WriteLine("Петък");
        break;
    case 6:
        Console.WriteLine("Събота");
        break;
    case 7:
        Console.WriteLine("Неделя");
        break;
    default:
        Console.WriteLine("Невалиден ден");
        break;
}