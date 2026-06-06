#ifndef UnitKlaseH
#define UnitKlaseH

#include <System.Classes.hpp>

// 1. KLASA: TAutomobil
class TAutomobil {
private:
    String Marka;
    String Model;
    double Cijena;
public:
    // Konstruktor
    TAutomobil(String marka, String model, double cijena);

    // Metode
    String DohvatiPuniNaziv();
    double DohvatiCijenu();
    void PrimijeniPopust(double postotak);
};

// 2. KLASA: TKupac
class TKupac {
private:
    String Ime;
    String Prezime;
    String OIB;
public:
    // Konstruktor
    TKupac(String ime, String prezime, String oib);

    // Metode
    String DohvatiPodatke();
    String GetOIB();
};

// 3. KLASA: TKupnja
class TKupnja {
private:
    TKupac* Kupac;
    TAutomobil* Automobil;
    String Datum;
public:
    // Konstruktor
    TKupnja(TKupac* k, TAutomobil* a, String datum);

    // Metoda za prikaz ugovora
    String GenerirajUgovor();
};

#endif

