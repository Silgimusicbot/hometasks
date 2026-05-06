using System;
using System.Collections.Generic;


class Adam
{
    protected int id;
    protected string tamad;
    protected int yas;

    public Sexs(int id, string ad, int yas)
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

    public string GetRecord()
    {
        return "Xəstə ID: " + id + ", Ad: " + tamad + ", Yaş: " + yas + ", Qan qrupu: " + qanqrupu;
    }

    public static int GetTotalPatients()
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

    public string GetInfo()
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
            Console.WriteLine(x.GetRecord());
        }

        Console.WriteLine("Həkimlər");
        foreach (var h in hekimler)
        {
            Console.WriteLine(h.GetInfo());
        }
    }
}

class Program
{
    static void Main()
    {
        VerilenlerBazasi db = new VerilenlerBazasi();

        Xeste x1 = new Xeste(1, "Zaman", 27, "1-");
        Xeste x2 = new Xeste(2, "Cefer", 23, "2+");
        Xeste x3 = new Xeste(3, "Farid", 21, "4-");

        Hekim h1 = new Hekim(1, "Dr. Ali", 45, "Kardiologiya");
        Hekim h2 = new Hekim(2, "Dr. Veli", 50, "Nevrologiya");

        db.XesteElaveEt(x1);
        db.XesteElaveEt(x2);
        db.XesteElaveEt(x3);

        db.HekimElaveEt(h1);
        db.HekimElaveEt(h2);

        db.HamisiniGoster();

        Console.WriteLine("Ümumi xəstə sayı: " + Xeste.GetTotalPatients());
    }
}
