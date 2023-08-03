using System.Runtime.Serialization;

namespace Indexer_Yeild;
// [Serializable]

[DataContract]
public class Students
{
    [DataMember]
    public string FirstName;
    [DataMember]
    public int ID;
    [DataMember]
    public string LastName;
    [DataMember]
    public int Old;
    [DataMember]
    public double Note;
    [DataMember]
    public string group;
    
    public string FirstName1
    {
        get => FirstName;
        set => FirstName = value ?? throw new ArgumentNullException(nameof(value));
    }

    public int Id
    {
        get => ID;
        set=> ID = value;
    }

    public string LastName1
    {
        get => LastName;
        set => LastName = value ?? throw new ArgumentNullException(nameof(value));
    }

    public int Old1
    {
        get => Old;
        set => Old = value;
    }

    public double Note1
    {
        get => Note;
        set=> Note = value;
    }

    public string Group
    {
        get => group;
        set => group = value ?? throw new ArgumentNullException(nameof(value));
    }

    public Students()
    {
        
    }
    public Students(string firstName, string lastName, int old, string group, int id)
    {
        if (string.IsNullOrWhiteSpace(firstName))
        {
            throw new ArgumentException(nameof(firstName), "No name");
        }

        this.FirstName1 = firstName;


        if (string.IsNullOrEmpty(lastName))
        {
            throw new ArgumentException(nameof(lastName), "No lastName");
        }

        this.LastName1 = lastName;

        if (string.IsNullOrWhiteSpace(group))
        {
            throw new ArgumentException(nameof(group), "No group");
        }

        this.Group = group;

        if (old <= 15 && old >= 100)
        {
            throw new AggregateException("Student do not be 100old upper");
        }

        this.Old1 = old;

        if (id !>= 100000 && id !<= 999999)
        {
            throw new ArgumentException("ID don't be <100000 and >999999");
        }

        this.ID = id;
    }

    public override string ToString()
    {
        return $"Name: {FirstName}  Surname: {LastName}  Old: {Old}  Group: {group}" +
               $" ID: {Id}";
    }
}