namespace LessonBTK;

public interface ICustomersDal
{
    void Add();
    void delete();
    void update();
}


public class SqlCustomersDal : ICustomersDal
{
    public void Add()
    {
        Console.WriteLine("Sql added");
    }

    public void delete()
    {
        Console.WriteLine("Sql delete");
    }

    public void update()
    {
        Console.WriteLine("Sql update");
    }
}

public class SqlServerCustomersDal : ICustomersDal
{
    public void Add()
    {
        Console.WriteLine("SqlServer added");
    }

    public void delete()
    {
        Console.WriteLine("SqlServer delete");
    }

    public void update()
    {
        Console.WriteLine("SqlServer update");
    }
}

public class PosgresCustomersDal : ICustomersDal
{
    public void Add()
    {
        Console.WriteLine("Postges Added");
    }

    public void delete()
    {
        Console.WriteLine("Postges delete");
    }

    public void update()
    {
        Console.WriteLine("Postges update");
    }
}

public class OracleCustomersDal : ICustomersDal
{
    public void Add()
    {
        Console.WriteLine("Oracle added");
    }

    public void delete()
    {
        Console.WriteLine("Oracle added");
    }

    public void update()
    {
        Console.WriteLine("Oracle added");
    }
}


public class ManageCustomers
{
    public void AddDal(ICustomersDal customersDal)
    {
        customersDal.Add();
    }
}