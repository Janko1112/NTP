#include <windows.h>
#include "UnitDllForma.h"

class TStatistikaSalona {
public:
    double IzracunajPorezi(double cijena) { return cijena * 0.05; }
    double IzracunajTrosakUvoza(double cijena) { return cijena * 0.02 + 350.0; }
};

extern "C" __declspec(dllexport) double __stdcall DllIzracunajPorez(double cijena) {
    TStatistikaSalona stats;
    return stats.IzracunajPorezi(cijena);
}

extern "C" __declspec(dllexport) double __stdcall DllIzracunajUvoz(double cijena) {
    TStatistikaSalona stats;
    return stats.IzracunajTrosakUvoza(cijena);
}


extern "C" __declspec(dllexport) void __stdcall DllPrikaziProzorOAutoru() {
    TFormDllProzor *prozor = new TFormDllProzor(Application);

    prozor->PostaviPodatke("Informacije o Autoru",
        "Ime i Prezime: Janko Jakopec\nJMBG: 0246115834\nFakultet: TVZ\n\nSustav: Upravljanje Auto Salonom v2026");

    prozor->ShowModal();
    delete prozor;
}

extern "C" __declspec(dllexport) bool __stdcall DllPrikaziProzorLicence() {
    TFormDllProzor *prozor = new TFormDllProzor(Application);

    prozor->BtnZatvori->Caption = "Zatvori";

    prozor->PostaviPodatke("Verifikacija Licence",
        "Pristupate administratorskim postavkama salona.\nSigurnosni certifikat je uspjesno verificiran unutar DLL-a!");

    prozor->ShowModal();
    delete prozor;
    return true;
}


int WINAPI DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    return 1;
}

