using System.Runtime.Serialization;
using System.Text;

namespace SerializationOfStudents;

[DataContract]
public class LibraryPerson
{
    
    [DataMember]
    public string PersonalName { get; set; }
    [DataMember]
    public int PersonalOld { get; set; }
    [DataMember]
    public int PersonalId { get; set; }
    
    private Random random = new Random();
    
    public Jobs PersonalJobs { get; set; }
    
    public LibraryPerson()
    {
        for (int i = 0; i < 10; i++)
        {
            PersonalId = random.Next(9000000,9999999);
            PersonalName = RandomString(9);
            switch (random.Next(1,7))
            {
                case 1:
                    PersonalJobs = Jobs.Administration;
                    break;
                case 2:
                    PersonalJobs = Jobs.Publisher;
                    break;
                case 3:
                    PersonalJobs = Jobs.Assistant;
                    break;
                case 4:
                    PersonalJobs = Jobs.Cook;
                    break;
                case 5:
                    PersonalJobs = Jobs.Janitor;
                    break;
                case 6:
                    PersonalJobs = Jobs.Doctor;
                    break;
                case 7:
                    PersonalJobs = Jobs.Director;
                    break;
            }

            PersonalOld = random.Next(18, 50);
        }
    }
    
    public LibraryPerson(string personalName, int personalOld, int personalId, Jobs personalJob)
    {
        if (string.IsNullOrEmpty(personalName))
        {
            throw new ArgumentException("Name of Personal is empty");
        }
        else
        {
            PersonalName = personalName;
        }

        if (personalOld > 100 && personalOld < 18)
        {
            Console.WriteLine("Personal old will not be uder 18 years old");
        }
        else
        {
            PersonalOld = personalOld;
        }

        if (personalId.ToString().Length ! < 10 && personalId.ToString().Length ! > 12)
        {
            throw new Exception("Personal id should be == 11 characters");
        }
        else
        {
            PersonalId = personalId;
        }

        if (personalJob == null)
        {
            throw new ArgumentException("Personal job will not be NULL or empty!!");
        }
        else
        {
            PersonalId = personalId;
        }

        personalJob = PersonalJobs;
    }

    public LibraryPerson(int personalId)
    {
        if (personalId.ToString().Length ! < 10 && personalId.ToString().Length ! > 12)
        {
            throw new Exception("Personal id should be == 11 characters");
        }
        else
        {
            PersonalId = personalId;
        }
    }
    
    

    public override string ToString()
    {
        return $"\t PERSONAL INFO \n\n" +
               $"Name = {PersonalName}\n\nID = {PersonalId}\n\n" +
               $"Job = {PersonalJobs}\n\nOld = {PersonalOld}";
    }
    
    // Generates a random string with a given size.
    public string RandomString(int size, bool lowerCase = false)
    {
        var builder = new StringBuilder(size);

        char offset = lowerCase ? 'a' : 'A';
        const int lettersOffset = 26;

        for (var i = 0; i < size; i++)
        {
            var @char = (char)random.Next(offset, offset + lettersOffset);
            builder.Append(@char);
        }

        return lowerCase ? builder.ToString().ToLower() : builder.ToString();
    }

}