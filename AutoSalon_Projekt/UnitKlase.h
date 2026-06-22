#ifndef UnitKlaseH
#define UnitKlaseH

#include <System.Classes.hpp>

class TAutomobil {
private:
    String Marka;
    String Model;
    double Cijena;
public:
	TAutomobil(String marka, String model, double cijena);

    String DohvatiPuniNaziv();
    double DohvatiCijenu();
    void PrimijeniPopust(double postotak);
};

class TKupac {
private:
    String Ime;
    String Prezime;
    String OIB;
public:
    TKupac(String ime, String prezime, String oib);

    String DohvatiPodatke();
    String GetOIB();
};

class TKupnja {
private:
    TKupac* Kupac;
    TAutomobil* Automobil;
    String Datum;
public:
	TKupnja(TKupac* k, TAutomobil* a, String datum);

    String GenerirajUgovor();
};

#endif

