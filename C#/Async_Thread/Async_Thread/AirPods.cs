namespace Async_MultiThread;

public class AirPods
{
    public string Model;
    public string Price;

    public AirPods(string model, string price)
    {
        Model = model;
        Price = price;
    }

    public string Model1
    {
        get => Model;
        set => Model = value ?? throw new ArgumentNullException(nameof(value));
    }

    public string Price1
    {
        get => Price;
        set => Price = value ?? throw new ArgumentNullException(nameof(value));
    }

    public override string ToString()
    {
        return $"{Model} Price: {Price}$";
    }
}

public class Accessory
{
    public string Name;
    public int Price;

    public string Name1
    {
        get => Name;
        set => Name = value ?? throw new ArgumentNullException(nameof(value));
    }

    public Accessory(string name, int price)
    {
        Name = name;
        Price = price;
    }

    public int Price1
    {
        get => Price;
        set => Price = value;
    }

    public override string ToString()
    {
        return $"{Name} Price: {Price}$";
    }
}