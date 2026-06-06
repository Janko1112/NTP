//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitGlavna.cpp", FormGlavna);
USEFORM("UnitUnosAuta.cpp", FormUnosAuta);
USEFORM("UnitUnosKupca.cpp", FormUnosKupca);
USEFORM("UnitPostavke.cpp", Form1);
USEFORM("UnitOAutoru.cpp", Form2);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFormGlavna), &FormGlavna);
		Application->CreateForm(__classid(TFormUnosAuta), &FormUnosAuta);
		Application->CreateForm(__classid(TFormUnosKupca), &FormUnosKupca);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
