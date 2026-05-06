using System;
using System.Collections.Generic;


class Adam
{
    protected int id;
    protected string tamad;
    protected int yas;

    public Adam(int id, string ad, int yas)
    {
        this.id = id;
        this.tamad = ad;
        this.yas = yas;
    }
}

class Xeste : Adam
{
    private string qanqrupu;
    private static int umumixestesayi = 0;

    public Xeste(int id, string ad, int yas, string qan)
        : base(id, ad, yas)
    {
        this.qanqrupu = qan;
        umumixestesayi++;
    }

    public string capettezol()
    {
        return "Xəstə ID: " + id + ", Ad: " + tamad + ", Yaş: " + yas + ", Qan qrupu: " + qanqrupu;
    }

    public static int butovxeste()
    {
        return umumixestesayi;
    }
}


class Hekim : Adam
{
    private string ixtisas;

    public Hekim(int id, string ad, int yas, string ixtisas)
        : base(id, ad, yas)
    {
        this.ixtisas = ixtisas;
    }

    public string sexsiyyet()
    {
        return "Həkim ID: " + id + ", Ad: " + tamad + ", Yaş: " + yas + ", İxtisas: " + ixtisas;
    }
}


class databaza
{
    public List<Xeste> xesteler = new List<Xeste>();
    public List<Hekim> hekimler = new List<Hekim>();

    public void xesteelaveet(Xeste x)
    {
        xesteler.Add(x);
    }

    public void hekimelaveet(Hekim h)
    {
        hekimler.Add(h);
    }

    public void hamisinigoster()
    {
        Console.WriteLine("Xəstələr");
        foreach (var x in xesteler)
        {
            Console.WriteLine(x.capettezol());
        }

        Console.WriteLine("Həkimlər");
        foreach (var h in hekimler)
        {
            Console.WriteLine(h.sexsiyyet());
        }
    }
}

class Program
{
    static void Main()
    {
        databaza db = new databaza();

        Xeste x1 = new Xeste(1, "Elcan", 17, "1-");
        Xeste x2 = new Xeste(2, "Əli", 19, "2+");
        Xeste x3 = new Xeste(3, "Bəhməz", 18, "4-");

        Hekim h1 = new Hekim(1, "Dr. Heybətqulu", 45, "Kardiologiya");
        Hekim h2 = new Hekim(2, "Dr. Abdulhamid", 50, "Nevrologiya");

        db.Xesteelaveet(x1);
        db.Xesteelaveet(x2);
        db.Xesteelaveet(x3);

        db.hekimelaveet(h1);
        db.hekimelaveet(h2);

        db.hamisinigoster();

        Console.WriteLine("Ümumi xəstə sayı: " + Xeste.butovxeste());
    }
}
