#pragma hdrstop
#include "UnitKlase.h"
#pragma package(smart_init)

TAutomobil::TAutomobil(String marka, String model, double cijena) {
    Marka = marka;
    Model = model;
    Cijena = cijena;
}

String TAutomobil::DohvatiPuniNaziv() {
    return Marka + " " + Model;
}

double TAutomobil::DohvatiCijenu() {
    return Cijena;
}

void TAutomobil::PrimijeniPopust(double postotak) {
    if (postotak > 0 && postotak <= 100) {
        Cijena = Cijena - (Cijena * (postotak / 100.0));
    }
}

TKupac::TKupac(String ime, String prezime, String oib) {
    Ime = ime;
    Prezime = prezime;
    OIB = oib;
}

String TKupac::DohvatiPodatke() {
    return Ime + " " + Prezime + " (OIB: " + OIB + ")";
}

String TKupac::GetOIB() {
    return OIB;
}

TKupnja::TKupnja(TKupac* k, TAutomobil* a, String datum) {
    Kupac = k;
    Automobil = a;
    Datum = datum;
}

String TKupnja::GenerirajUgovor() {
	String ispis = "";

    ispis += "UGOVOR O KUPNJI\n";
    ispis += "Datum: " + Datum + "\n";
    ispis += "Kupac: " + Kupac->DohvatiPodatke() + "\n";
    ispis += "Vozilo: " + Automobil->DohvatiPuniNaziv() + "\n";
    ispis += "Ukupna cijena: " + FloatToStrF(Automobil->DohvatiCijenu(), ffCurrency, 10, 2);

    return ispis;
}


