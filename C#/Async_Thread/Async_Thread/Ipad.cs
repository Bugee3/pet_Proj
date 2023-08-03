namespace Async_MultiThread;

public class iPad
{
    public string Model;
    public int Price;
    public Color Color;
    public Volume Volume;

    public iPad(string model, int price, Color color, Volume volume)
    {
        if (string.IsNullOrWhiteSpace(model))
        {
            throw new ArgumentException("Iphone model shouldn't be empty or whiteSpace");
        }

        if (Price > 10000 && Price < 10)
        {
            Console.WriteLine($"Price of Product shouldn't be {Price}");
        }
        Model = model;
        Price = price;
        Color = color;
        Volume = volume;
    }

    public string Model1
    {
        get => Model;
        set => Model = value ?? throw new ArgumentNullException(nameof(value));
    }

    public int Price1
    {
        get => Price;
        set => Price = value;
    }

    public Color Color1
    {
        get => Color;
        set => Color = value;
    }

    public Volume Volume1
    {
        get => Volume;
        set => Volume = value;
    }

    public override string ToString()
    {
        return $"{Model} {Volume}GB {Color} Price :{Price}$";
    }
}