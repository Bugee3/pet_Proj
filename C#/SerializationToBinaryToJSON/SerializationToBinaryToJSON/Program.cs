using System;
using System.Runtime.Serialization.Formatters.Binary;

namespace SpaceX
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Group> groups = new List<Group>();

            List<Student> students = new List<Student>();
            
        
            for (int i = 1; i < 10; i++)
            {
                groups.Add(new Group("Group " + i,i));
            }

            for (int i = 0; i < 300; i++)
            {
                Student student = new Student(Guid.NewGuid().ToString().Substring(0, 5), i % 100)
                {
                    Group = groups[i % 9]
                };
            }
            
            

            using (var file = new FileStream(@"/Users/haplo/Documents/binary.bin",FileMode.OpenOrCreate))
            {
                // binaryFormatter.Serialize(file,groups);
            }
        }
        
    }
}
