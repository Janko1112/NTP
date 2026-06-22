//---------------------------------------------------------------------------

#ifndef UnitUnosAutaH
#define UnitUnosAutaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <memory>
//---------------------------------------------------------------------------
class TFormUnosAuta : public TForm
{
__published:
	TEdit *EditMarka;
	TEdit *EditModel;
	TEdit *EditCijena;
	TButton *BtnSpremi;
	void __fastcall BtnSpremiClick(TObject *Sender);
private:
public:
	__fastcall TFormUnosAuta(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormUnosAuta *FormUnosAuta;
//---------------------------------------------------------------------------
#endif
