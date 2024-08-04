//byte b = 1;
//int a = b;
//Console.WriteLine(a);

//to copy a to b you nead cast
//int a = 1;
//byte b = (byte)a;
//Console.WriteLine(b);

//int a = 1000;
//byte b = (byte)a;
//Console.WriteLine(b);

try 
{
    var number = "1234";
    byte d = Convert.ToByte(number);
    Console.WriteLine(d);
}
catch(Exception)
{

    Console.WriteLine("The number could not be converted to byte");
    //catching exception while casting
}

try
{
    string isTrue = "True";
    bool s = Convert.ToBoolean(isTrue);
    //casting string to bool
}
catch (Exception)
{

    Console.WriteLine("Could not be converted to boolean");
}

