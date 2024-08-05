string firstname="Mitko";
string lastname="Hristov";

//string name = firstname + " " + lastname;
string name=string.Format("{0} {1}", firstname, lastname);

Console.WriteLine(name);
//will be continued