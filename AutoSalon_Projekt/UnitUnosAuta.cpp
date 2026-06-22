//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitUnosAuta.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormUnosAuta *FormUnosAuta;
//---------------------------------------------------------------------------
__fastcall TFormUnosAuta::TFormUnosAuta(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormUnosAuta::BtnSpremiClick(TObject *Sender)
{
    this->ModalResult = mrOk;
}

//---------------------------------------------------------------------------
