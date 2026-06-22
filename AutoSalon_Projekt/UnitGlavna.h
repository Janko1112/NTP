#ifndef UnitGlavnaH
#define UnitGlavnaH

#include <System.Classes.hpp>
#include <vcl.h>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Data.DB.hpp>

#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.SQLite.hpp>
#include <FireDAC.Phys.SQLiteDef.hpp>
#include <FireDAC.Phys.SQLiteWrapper.Stat.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.ExprFuncs.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>

class TFormGlavna : public TForm
{
__published:
	TMemo *Memo1;
	TButton *BtnDodajAutomobil;
	TButton *BtnSpremiPDF;
	TFDConnection *KonekcijaBaza;
	TFDPhysSQLiteDriverLink *FDPhysSQLiteDriverLink1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TButton *BtnPrikaziAuti;
	TButton *BtnNoviKupac;
	TButton *BtnKupiAuto;
	TComboBox *ComboKupci;
	TComboBox *ComboAutomobili;
	TButton *BtnObrisiKupca;
	TButton *BtnUrediKupca;
	TButton *BtnObrisiAuto;
	TButton *BtnUrediAuto;
	TButton *BtnNapredniIzvjestaj;
	TOpenDialog *OpenDialog1;
	TButton *BtnUcitajSliku;
	TEdit *EditTraziKupca;
	TComboBox *ComboSortIzvjestaj;
	TButton *BtnPokreniDretve;
	TButton *BtnSiguranUI;
	TButton *BtnZakljucavanje;
	TButton *BtnIzveziSve;
	TButton *BtnUveziSve;
	TProgressBar *ProgressBarPreuzimanje;
	TComboBox *ComboBrzina;
	TButton *BtnPreuzmiKatalog;
	TButton *BtnDohvatiTecaj;
	TButton *BtnPokreniDll;
	TButton *BtnDllOAutoru;
	TButton *BtnDllLicenca;
	TButton *BtnOtvoriPostavke;
	void __fastcall BtnDodajAutomobilClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall BtnSpremiPDFClick(TObject *Sender);
	void __fastcall BtnPrikaziAutiClick(TObject *Sender);
	void __fastcall BtnNoviKupacClick(TObject *Sender);
	void __fastcall BtnKupiAutoClick(TObject *Sender);
	void __fastcall BtnUrediAutoClick(TObject *Sender);
	void __fastcall BtnObrisiAutoClick(TObject *Sender);
	void __fastcall BtnUrediKupcaClick(TObject *Sender);
	void __fastcall BtnObrisiKupcaClick(TObject *Sender);
	void __fastcall BtnNapredniIzvjestajClick(TObject *Sender);
	void __fastcall BtnUcitajSlikuClick(TObject *Sender);
	void __fastcall BtnPokreniDretveClick(TObject *Sender);
	void __fastcall BtnZakljucavanjeClick(TObject *Sender);
	void __fastcall BtnSiguranUIClick(TObject *Sender);
	void __fastcall BtnIzveziSveClick(TObject *Sender);
	void __fastcall BtnUveziSveClick(TObject *Sender);
	void __fastcall BtnPreuzmiKatalogClick(TObject *Sender);
	void __fastcall BtnDohvatiTecajClick(TObject *Sender);
	void __fastcall BtnPokreniDllClick(TObject *Sender);
	void __fastcall BtnDllOAutoruClick(TObject *Sender);
	void __fastcall BtnDllLicencaClick(TObject *Sender);
	void __fastcall BtnOtvoriPostavkeClick(TObject *Sender);

public:
	__fastcall TFormGlavna(TComponent* Owner);
	void OsvjeziJezikAplikacije(bool engleski);
	void OsvjeziPadajuceIzbornike();
    void __fastcall MojHttpReceiveData(TObject* Sender, __int64 AContentLength, __int64 AReadCount, bool &EAbort);


private:
	TCriticalSection* MojaKriticnaSekcija;
	bool ZadatakUProjedu;
};

extern PACKAGE TFormGlavna *FormGlavna;

#endif

