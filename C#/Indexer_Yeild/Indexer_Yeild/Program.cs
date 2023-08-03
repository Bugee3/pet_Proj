using System;
using System.Data;
using System.Linq.Expressions;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization.Json;
using System.Xml.Serialization;


namespace Indexer_Yeild;

public class Program
{
    [Obsolete("Obsolete")]
    static void Main(string[] args)
    {
        Random random = new Random();
        Class classes = new Class();
        
        for (int i = 0; i < 10; i++)
        {
            Students student = new Students();
            student.group = $"Group {random.Next(1, 10)}";
            student.Id = random.Next(100000, 999999);
            student.FirstName = $"FirstName {random.Next(10, 999)}";
            student.LastName = $"Lastname {random.Next(10, 999)}";
            student.Note = random.Next(10, 100);
            classes.StudentsList.Add(student);
        }
        
        Students student1 = new Students();
        student1.group = $"CS50";
        student1.Id = 123455;
        student1.FirstName = $"Roma";
        student1.LastName = $"Valiev";
        student1.Note = 43.5;
        classes.StudentsList.Add(student1);

        foreach (var item in classes)
        {
            Console.WriteLine(item);
        }
        //
        // var binaryFormatter = new BinaryFormatter();
        //
        // using (var file = new FileStream("binaryFormat", FileMode.OpenOrCreate))
        // {
        //     binaryFormatter.Serialize(file,classes);
        // }
        //
        // var deBinary = new Class();
        //
        // using (var file = new FileStream("binaryFormat", FileMode.OpenOrCreate))
        // {
        //     if (file != null)
        //     {
        //         deBinary = binaryFormatter.Deserialize(file) as Class;
        //     }
        // }
        // foreach (var item in deBinary)
        // {
        //     Console.WriteLine(item);
        // }
        //


        var jsonFormat = new DataContractJsonSerializer(typeof(Class));

        using (var file = new FileStream("Json", FileMode.OpenOrCreate))
        {
            jsonFormat.WriteObject(file,classes);
        }

        Console.ReadLine();
        
        Console.WriteLine(classes["Roma"]);
    }    
}