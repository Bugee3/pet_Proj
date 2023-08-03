using System;
using System.Runtime.CompilerServices;


namespace Async_MultiThread
{
    class Programm
    {
        static void Main(string[] args)
        {
            var Group2022 = new List<Iphone>();
            
            Iphone iphone = new Iphone();
            iphone.Color = Color.Black; iphone.Price = 1900; iphone.Model = "iPhone 14Pro Max"; iphone.Volume = Volume.Big; Iphone iphone2 = new Iphone(); iphone2.Color = Color.White; iphone2.Price = 1200; iphone2.Model = "iPhone 13Pro Max"; iphone2.Volume = Volume.Big; Group2022.Add(iphone);

            Group2022.Add(iphone2);

        }


    }
}

