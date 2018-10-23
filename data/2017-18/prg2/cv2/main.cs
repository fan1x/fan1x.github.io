using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//using System.Math;

namespace ConsoleApp5
{
    class Program
    {
        static void swap (ref int a, ref int b)
        {
            int c;
            c = a;
            a = b;
            b = c;
        }
        static int readint()
        {
            return Int32.Parse(Console.ReadLine());
            
        }

        static int gcd(int a,int b)
        {
            if (a == b) return a;
            if (a < b) return gcd(b - a, a);
            return gcd(a - b, b);
        }

        static int gcd2(int a, int b)
        {
            if (a == b) return a;

            if (a < b)
                swap(ref a, ref b);

            while (b > 0)
            {
                a %= b;
                swap(ref a, ref b);
            }
            return a;
        }

        struct bod
        {
          public  int x, y;
        
          public void vynuluj() {
                x = 0;
                y = 0;
            }

            public void invertuj()
            {
                x = -x;
                y = -y;
            }
            public float Length()
            {
                return (float)Math.Sqrt(x * x + y * y);
            }
        }

        static void Main(string[] args)
        {
            bod a;
            a.x = 5;
            a.y = 2;
            bod b;
            b = a;
            b.invertuj();
            Console.WriteLine(b.x);
            Console.WriteLine(b.Length());
            /*
            int a = 5;
            int b = 10;
            int soucet = a + b;
            Console.WriteLine(soucet);

            for(int i=1; i<11; ++i)
            
                if ((i % 3)!= 0) Console.WriteLine(i); 
            
            for (int j = 1; j < 1000; j *= 2)
                Console.WriteLine(j);
                */
            //string a = Console.ReadLine();
            // Console.WriteLine(a);
            // int aa = Int32.Parse(Console.ReadLine());
            //Console.WriteLine(aa);
            /*
            int a = readint();
            int cislo;

            // Console.WriteLine(gcd2(a, b));
            for(;;)
            {
                cislo = readint();
                if (cislo <= 0) break;
                a = gcd2(a, cislo);
            }
            Console.WriteLine(a);
            

            int[] a = new int[10];

            for (int i = 0; i < 10; ++i)

                a[i] = readint();
            


            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    if (a[j] > a[j+1])
                        swap(ref a[j], ref a[j+1]);
                }
            }

            for (int i = 0; i < 10; ++i)
                Console.WriteLine(a[i]); */
        }
    }


    class Logger
    {
        public Logger(Target target, Level level)
        {
            this.target = target;
            this.level = level;
        }

        public void log(string message)
        {
            string msgWithLevel = anotateMessageAccordingLevel(level, message);
            string msgWithLevelAndTarget = anotateMessageAccordingTarget(target, msgWithLevel);
            Console.WriteLine(msgWithLevelAndTarget);
        }

        private Target target;
        private Level level;
    }
}