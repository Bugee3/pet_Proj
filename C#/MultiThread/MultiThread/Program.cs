using System;
using System.Text;

namespace MUltiThread
{
    class Program
    {
        static void Main(string[] args)
        {
            #region Thread

            //     Thread thread = new Thread(new ThreadStart(DoWork));
            //     thread.Start();
            //
            //     Thread thread2 = new Thread(new ParameterizedThreadStart(DoWork2));
            //     thread2.Start(int.MaxValue);
            //     
            //     int j = 0;
            //     for (int i = 0; i < int.MaxValue; i++)
            //     {
            //         j++;
            //         if (j % 10000 == 0)
            //         {
            //             Console.WriteLine("MAin");
            //         }
            //     }

            #endregion

            #region MyRegion

            //
            // DoWorkAsync(30);
            //
            // Console.WriteLine("Begin Main");
            //
            // for (int i = 0; i < 10; i++)
            // {
            //     Console.WriteLine("Main");
            // }
            //

            #endregion

            var result = SaveFileAsync("textAsync.txt");
            Console.ReadLine();
            Console.WriteLine(result.Result);
        }

        static async Task<bool> SaveFileAsync(string path)
        {
            var result = await Task<bool>.Run(() => SaveFile(path));
            return result;
        }

        static bool SaveFile(string path)
        {
            var random = new Random();
            var text = "";
            for (int i = 0; i < 5000; i++)
            {
                text += random.Next();
            }

            using (var file = new StreamWriter(path, false, Encoding.UTF8))
            {
                file.WriteLine();
            }

            return true;
        }

        static async Task DoWorkAsync(int num)
        {
            Console.WriteLine("Begin Async");
            await Task.Run(() => DoWork(num));
            Console.WriteLine("End Async");
        }

        static void DoWork(int num)
        {
            for (int i = 0; i < num; i++)
            {
                Console.WriteLine("Async");
            }
        }

        static void DoWork2(object max)
        {
            int j = 0;
            for (int i = 0; i < (int)max; i++)
            {
                j++;
                if (j % 10000 == 0)
                {
                    Console.WriteLine("VAR");
                }
            }
        }
    }
}