var numbers = new[] {3,7,9,2,14,6 };

Console.WriteLine(numbers.Length);//the length is 6

var index=Array.IndexOf(numbers, 9); //9 is the third element so index is 2

//Clear

Array.Clear(numbers, 0, 2);

foreach(var n in numbers)
{ Console.WriteLine(n); }

//Copy
int[] copyarray= new int[3];
Array.Copy(numbers,copyarray,3);

//Sort
Array.Sort(numbers);

foreach(int n in numbers)
{ Console.WriteLine(n); }

//LISTS
var listNumbers=new List<int>() {1,2,3,4 };
listNumbers.Add(1);
listNumbers.AddRange(new int[3] {5,6,7});

foreach(int n in listNumbers)
{ Console.WriteLine(n); }   

//Find index
listNumbers.IndexOf(6);

//Count
listNumbers.Count();