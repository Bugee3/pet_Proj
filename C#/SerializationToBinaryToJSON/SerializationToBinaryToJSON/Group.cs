using System.Runtime.Serialization;

namespace SpaceX;

[Serializable]
public class Group
{
    [NonSerialized]
    private readonly Random random = new Random(DateTime.Now.Millisecond);
    
    public int number;

    public string Name;

    public int Number
    {
        get => number;
        set => number = value;
    }

    public string Name1
    {
        get => Name;
        set => Name = value ?? throw new ArgumentNullException(nameof(value));
    }

    public Group()
    {
        Number = random.Next(1, 10);
        Name = $"Group {random}";
    }


    public Group(string name, int number)
    {
        //Control 
        
        name = Name;
        number = Number;
    }

    public override string ToString()
    {
        return $"Name {Name}  and Number {Number}";
    }
}