#pragma hdrstop
#include "UnitKlase.h"
#pragma package(smart_init)

// --- Implementacija za TAutomobil ---
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

// --- Implementacija za TKupac ---
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

// --- Implementacija za TKupnja ---
TKupnja::TKupnja(TKupac* k, TAutomobil* a, String datum) {
    Kupac = k;
    Automobil = a;
    Datum = datum;
}

String TKupnja::GenerirajUgovor() {
    String ispis = ""; // Inicijaliziramo prazan RAD Studio String

    ispis += "UGOVOR O KUPNJI\n";
    ispis += "Datum: " + Datum + "\n";
    ispis += "Kupac: " + Kupac->DohvatiPodatke() + "\n";
    ispis += "Vozilo: " + Automobil->DohvatiPuniNaziv() + "\n";
    ispis += "Ukupna cijena: " + FloatToStrF(Automobil->DohvatiCijenu(), ffCurrency, 10, 2);

    return ispis;
}


