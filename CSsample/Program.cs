using System;

namespace CSsample
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = { 32, 10 };
            int i;
            int s = 0;
            for (i = 0; i <= 2; i++)
            {
                s += a[i];
            }
            Console.WriteLine(s);
        }
    }
}
