using System.Text;

var builder=new StringBuilder(); 
builder.Append('-',10);
builder.AppendLine();
builder.Append("Header");
builder.AppendLine();
builder.Append('-', 10);
//Console.WriteLine(builder);

builder.Replace('-', '.');
builder.Remove(0, 10);
builder.Insert(0, new string('-',10));

Console.WriteLine(builder);
