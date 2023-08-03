using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.Xml.Serialization;
using System.IO;
using System.Runtime.Serialization.Formatters.Soap;
using System.Runtime.Serialization.Json;
using System.Xml.Serialization;
using FileStream = System.IO.FileStream;

namespace SerializationOfStudents
{
    class Program   
    {
        [Obsolete("Obsolete")]
        static void Main(string[] args)
        {
            List<LibraryPerson> personal = new List<LibraryPerson>();
            
            for (int i = 0; i < 20; i++)
            {
                personal.Add(new LibraryPerson());
            }
            
            Console.ReadLine();
            
             var xmlFormatter = new XmlSerializer(typeof(List<LibraryPerson>));
            
             using (var file = new FileStream("xmlFormat.xml", FileMode.OpenOrCreate))
             {
                 xmlFormatter.Serialize(file,personal);
             }
            
             using (var file = new FileStream("xmlFormat.xml", FileMode.OpenOrCreate))
             {
                 var XmlDe = xmlFormatter.Deserialize(file) as List<LibraryPerson>;
                 if (XmlDe != null)
                 {
                     foreach (var item in XmlDe)
                     {
                         Console.WriteLine(item);
                     }
                 }
             }
            
             Console.ReadLine();
             //Serialization fo object to Binary
            
             var binaryFormatter = new BinaryFormatter();
            
             using (var file = new FileStream("binaryFormat.bin", FileMode.OpenOrCreate))
             {
                 binaryFormatter.Serialize(file,personal);
             }
            
             using (var file = new FileStream("binaryFormat.bin", FileMode.OpenOrCreate))
             {
                 var BinaryDe = binaryFormatter.Deserialize(file) as List<LibraryPerson>;
            
                 if (BinaryDe != null)
                 {
                     foreach (var item in BinaryDe)
                     {
                         Console.WriteLine(item);
                     }
                 }
             }
            
             Console.ReadLine();
             //Serialization of object to SOAP
            
             var soapFormatter = new SoapFormatter();
            
             using (var file = new FileStream("soapFormat.soap", FileMode.OpenOrCreate))
             {
                 soapFormatter.Serialize(file,personal.ToArray());
             }
            
             using (var file = new FileStream("soapFormat.soap",FileMode.Open))
             {
                 var soapDe = soapFormatter.Deserialize(file) as LibraryPerson[];
            
                 if (soapDe != null)
                 {
                     foreach (var item in soapDe)
                     {
                         Console.WriteLine(item);
                     }
                 }
             }
            
            
             Console.ReadLine();
            
            //Serialization of object to JSON

            var jsonFormatter = new DataContractJsonSerializer(typeof(List<LibraryPerson>));

            using (var file = new FileStream("jsonformat.json",FileMode.OpenOrCreate))
            {
                jsonFormatter.WriteObject(file,personal);
            }

            using (var file = new FileStream("jsonformat.json",FileMode.OpenOrCreate))
            {
                var jsonDe = jsonFormatter.ReadObject(file) as List<LibraryPerson>;

                if (jsonDe != null)
                {
                    foreach (var item in jsonDe)
                    {
                        Console.WriteLine(item);
                    }
                }
            }
        }
    }
}
