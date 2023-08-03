using System.Threading.Channels;

namespace LessonBTK;


public class CustomerManager    
{
    public ILogger logger { get; set; }

    public void Add()
    {
        logger.log();
    }
}


public class DataBaseLogger : ILogger
{
    public void log()
    {
        Console.WriteLine("Database log added!");
    }
}


public class SMSloger : ILogger
{
    public void log()
    {
        Console.WriteLine("Sms logger added!");
    }
}

public class FileLogger : ILogger
{
    public void log()
    {
        Console.WriteLine("File logger added!");
    }
}
public interface ILogger
{
    void log()
    {
        Console.WriteLine("Log added!");    
    } 
}