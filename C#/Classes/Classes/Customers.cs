// namespace LessonBTK;
//
// public interface IPerson
// {
//     decimal IdNumber { get; set; }
//     string FirstName { get; set; }
// }
// public class Customers: IPerson
// {
//     public string FirstName { get; set; }
//     public string LastName { get; set; }
//     public string Derpartment { get; set; }
//     public int Age { get; set; }
//     public decimal IdNumber { get; set; }
//     public string Address { get; set; }
// }
//
// public class Students : IPerson
// {
//     public decimal IdNumber { get; set; }
//     public string FirstName { get; set; }
//     public string LastName { get; set; }
//     public char Class { get; set; }
//     public int Age { get; set; }
//     public int Notes { get; set; }
// }
//
// public class ManagePerson
// {
//     public void printDataOfPerson(IPerson person)
//     {
//         string Dates = $"Name : {person.FirstName} ID : {person.IdNumber}";
//         Console.WriteLine(Dates);
//     }
// }