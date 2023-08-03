namespace SpaceX;
 

[Serializable]
public class Student
{
    public string Name;
    public int Age;

    public Group Group { get; set; }
    

    public string Name1
    {
        get => Name;
        set => Name = value ?? throw new ArgumentNullException(nameof(value));
    }

    public int Age1
    {
        get => Age;
        set => Age = value;
    }

    public Student(string name, int age)
    {
        //Here our control .....

        name = Name;
        age = Age;
    }


    public override string ToString()
    {
        return $"Name {Name}  and Age {Age}";
    }
}