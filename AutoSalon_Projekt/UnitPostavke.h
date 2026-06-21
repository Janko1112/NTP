#ifndef UnitPostavkeH
#define UnitPostavkeH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <memory>

class TFormPostavke : public TForm
{
__published:
	TComboBox *ComboJezik;
	TButton *BtnSpremiPostavke;
	void __fastcall BtnSpremiPostavkeClick(TObject *Sender);

public:
	__fastcall TFormPostavke(TComponent* Owner);
};

extern PACKAGE TFormPostavke *FormPostavke;

#endif

