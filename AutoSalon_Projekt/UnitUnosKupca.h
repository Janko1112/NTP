//---------------------------------------------------------------------------

#ifndef UnitUnosKupcaH
#define UnitUnosKupcaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <memory>
//---------------------------------------------------------------------------
class TFormUnosKupca : public TForm
{
__published:
	TEdit *EditIme;
	TEdit *EditPrezime;
	TEdit *EditOIB;
	TButton *BtnSpremiKupca;
	void __fastcall BtnSpremiKupcaClick(TObject *Sender);
private:
public:
	__fastcall TFormUnosKupca(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormUnosKupca *FormUnosKupca;
//---------------------------------------------------------------------------
#endif
