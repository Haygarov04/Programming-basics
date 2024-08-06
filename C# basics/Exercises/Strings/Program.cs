string firstname="Mitko";
string lastname="Hristov";

//string name = firstname + " " + lastname;
string name=string.Format("{0} {1}", firstname, lastname);
Console.WriteLine(name);

var names=new string[3] { "john","Jack","jim"};
var formattedNames =string.Join(", ", names);

Console.WriteLine(formattedNames);