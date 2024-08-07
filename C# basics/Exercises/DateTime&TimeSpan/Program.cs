
//DateTime
var dateTime = new DateTime(2015, 1, 1);
var now=DateTime.Now;
var today=DateTime.Today;

Console.WriteLine(now.Minute);
Console.WriteLine(now.AddDays(2));
Console.WriteLine(now.ToLongDateString());
Console.WriteLine(now.ToShortDateString());
Console.WriteLine(now.ToShortTimeString());

//TimeSpan
var timeSpan= new  TimeSpan(1,2,3);
var timeSpan1= new  TimeSpan(1,0,0);
var timeSpan2= TimeSpan.FromHours(1);

Console.WriteLine(timeSpan);
Console.WriteLine(timeSpan1);
Console.WriteLine(timeSpan2);

var timeSpanNow= new TimeSpan(now.Hour,now.Minute,now.Second);
Console.WriteLine(timeSpanNow);