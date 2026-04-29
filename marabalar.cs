using System;
using System.Collections.Generic;

class A {
    public string n; public double b; public static int t;
    public A(string o) { n = o; b = 0; 
    public void d(double v) { if (v > 0) b += v; }
    public void w(double v) { if (v > 0 && b >= v) b -= v; }
    public void r(A a, double v) { 
        if (v > 0 && b >= v) { b -= v; a.b += v; } 
    }
    public string i() => $"Name: {n} | Balance: {b}";
}
class P {
    static void Main() {
        List<A> l = new List<A>();
        while (true) {
            Console.WriteLine("\n1.Create 2.Dep 3.With 4.Trans 5.Show 6.Total");
            string s = Console.ReadLine();

            if (s == "1") l.Add(new A(Console.ReadLine()));
            else if (s == "2") l[int.Parse(Console.ReadLine())].d(double.Parse(Console.ReadLine()));
            else if (s == "3") l[int.Parse(Console.ReadLine())].w(double.Parse(Console.ReadLine()));
            else if (s == "4") {
                int s1 = int.Parse(Console.ReadLine()), s2 = int.Parse(Console.ReadLine());
                l[s1].r(l[s2], double.Parse(Console.ReadLine()));
            }
            else if (s == "5") foreach (var c in l) Console.WriteLine(c.i());
            else if (s == "6") Console.WriteLine(A.t);
        }
    }
}
