using System;

public struct Point
{
    public int X { get; }
    public int Y { get; }

    public Point(int x, int y)
    {
        X = x;
        Y = y;
    }

    public double DistanceTo(Point other)
    {
        int dx = X - other.X;
        int dy = Y - other.Y;
        return Math.Sqrt(dx * dx + dy * dy);
    }

    public override string ToString() => $"({X}, {Y})";
}

class Program
{
    static void Main()
    {
        Point p1 = new Point(0, 0);
        Point p2 = new Point(3, 4);

        Console.WriteLine(p1); // Output: (0, 0)
        Console.WriteLine(p2); // Output: (3, 4)
        Console.WriteLine($"Distance: {p1.DistanceTo(p2)}"); // Output: Distance: 5
    }
}