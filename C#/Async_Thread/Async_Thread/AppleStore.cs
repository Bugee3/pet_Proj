namespace Async_MultiThread;

[Serializable]
public class AppleStore
{
    
    public AppleStore(string name, int yearOf)
    {
        Name = name;
        YearOf = yearOf;
    }

    public string Name { get; set; }
    public int YearOf { get; set; }

}