namespace Async_MultiThread;

public class Mac
{
    public string Model;
    public int Price;
    public Color Color;
    public Ram Ram;
    public Volume Volume;

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

    public Mac(string model, int price, Color color, Volume volume, Ram ram)
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
        Ram = ram;
    }

    public override string ToString()
    {
        return $"{Model} {Volume}GB {Color} RAM:{Ram}GB Price :{Price}$";
    }
}