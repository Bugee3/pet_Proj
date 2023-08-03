using System.Runtime.InteropServices.JavaScript;

namespace Serialization;

public class Car
{
    public string Name
    {
        get
        {
            return Name;
        }
        set
        {
            Name = value;
        }
    }

    public string Number
    {
        get
        {
            return Number;
        }
        set
        {
            Number = value;
        }
    }

    public Color Color;

    public Color Color1
    {
        get => Color;
        set => Color = value;
    }

    public string CarOwner;

    public Color Color2
    {
        get => Color;
        set => Color = value;
    }

    public string CarOwner1
    {
        get => CarOwner;
        set => CarOwner = value ?? throw new ArgumentNullException(nameof(value));
    }

    public Car()
    {
        
    }
    public Car(string name,string number,Color color,string carOwner )
    {
        if (string.IsNullOrEmpty(name))
        {
            throw new ArgumentException("Input argument is empty or have white space!!");
        }

        this.Name = name;

        if (string.IsNullOrWhiteSpace(number))
        {
            throw new ArgumentException("Input argument is empty or have white space!!");
        }

        this.Number = number;
        
        if (string.IsNullOrWhiteSpace(carOwner))
        {
            throw new ArgumentException("Input argument is empty or have white space!!");
        }

        this.CarOwner = carOwner;

        color = Color;
    }

    public Car(Color color, string carOwner)
    {
        Color = color;
        CarOwner = carOwner;
    }
}