//3- Write a program and ask the user to enter the width and height of an image.
//Then tell if the image is landscape or portrait.
using System;


public struct Image
{
    public double Height;
    public double Width;

    public Image(double height, double width)
    {
        Height = height;
        Width = width;
    }
    public void input()
    {
        Console.Write("Enter height: ");
        Height = double.Parse(Console.ReadLine());
        Console.Write("Enter width: ");
        Width = double.Parse(Console.ReadLine());
    }
    public void isPortraitOrLandscape()
    {
        if (Height > Width)
        {
            Console.WriteLine("The image is Landscape");
        }
        else
        {
            Console.WriteLine("The image is Portrait");
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        //string x=Console.ReadLine();
        //string y=Console.ReadLine();
        //double height = double.Parse(Console.ReadLine());
        //double width = double.Parse(Console.ReadLine());

        Image image = new Image();
        image.input();

        image.isPortraitOrLandscape();
    }
}