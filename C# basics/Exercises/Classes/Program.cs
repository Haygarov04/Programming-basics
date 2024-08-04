using System;
public class Person
{
    public string Name;

    public void WhatsYourName()
    {
        Console.WriteLine("What is your name");
        Name=Console.ReadLine();
    }
    public void Introduce()
    {
        Console.WriteLine("My name is " + Name);
    }
}

public class Calculator
{
    public int a;
    public int b;

    public void Sum(int a, int b)
    { Console.WriteLine(a + b); }
}

class Program
{
    static void Main(string[] args)
    {
        Person John = new Person();
        //John.Name = "John";
        John.WhatsYourName();
        John.Introduce();

        //Calculator calc = new Calculator();
        //calc.Sum(3, 4);  Example
    }
}