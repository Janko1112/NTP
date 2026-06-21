object FormGlavna: TFormGlavna
  Left = 0
  Top = 0
  Caption = 'FormaGlavna'
  ClientHeight = 524
  ClientWidth = 787
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  OnCreate = FormCreate
  TextHeight = 15
  object Memo1: TMemo
    Left = 18
    Top = 8
    Width = 185
    Height = 257
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object BtnDodajAutomobil: TButton
    Left = -8
    Top = 311
    Width = 105
    Height = 25
    Caption = 'Dodaj automobil'
    TabOrder = 1
    OnClick = BtnDodajAutomobilClick
  end
  object BtnSpremiPDF: TButton
    Left = 40
    Top = 420
    Width = 129
    Height = 25
    Caption = 'Generiraj PDF Ra'#269'un'
    TabOrder = 2
    OnClick = BtnSpremiPDFClick
  end
  object BtnPrikaziAuti: TButton
    Left = 24
    Top = 451
    Width = 161
    Height = 25
    Caption = 'U'#269'itaj automobile iz baze'
    TabOrder = 3
    OnClick = BtnPrikaziAutiClick
  end
  object BtnNoviKupac: TButton
    Left = 103
    Top = 311
    Width = 121
    Height = 25
    Caption = 'Dodaj novog kupca'
    TabOrder = 4
    OnClick = BtnNoviKupacClick
  end
  object BtnKupiAuto: TButton
    Left = 304
    Top = 240
    Width = 185
    Height = 25
    Caption = 'Zapi'#353'i kupnju (Spajanje tablica)'
    TabOrder = 5
    OnClick = BtnKupiAutoClick
  end
  object ComboKupci: TComboBox
    Left = 264
    Top = 112
    Width = 145
    Height = 23
    TabOrder = 6
    Text = 'Odaberi kupca'
  end
  object ComboAutomobili: TComboBox
    Left = 415
    Top = 112
    Width = 145
    Height = 23
    TabOrder = 7
    Text = 'Odaberi auto'
  end
  object BtnObrisiKupca: TButton
    Left = 288
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Obri'#353'i Kupca'
    TabOrder = 8
    OnClick = BtnObrisiKupcaClick
  end
  object BtnUrediKupca: TButton
    Left = 288
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Uredi Kupca'
    TabOrder = 9
    OnClick = BtnUrediKupcaClick
  end
  object BtnObrisiAuto: TButton
    Left = 440
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Obri'#353'i Auto'
    TabOrder = 10
    OnClick = BtnObrisiAutoClick
  end
  object BtnUrediAuto: TButton
    Left = 440
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Uredi Auto'
    TabOrder = 11
    OnClick = BtnUrediAutoClick
  end
  object BtnNapredniIzvjestaj: TButton
    Left = 582
    Top = 211
    Width = 155
    Height = 25
    Caption = 'Napredni financijski izvje'#353'ta'
    TabOrder = 12
    OnClick = BtnNapredniIzvjestajClick
  end
  object BtnUcitajSliku: TButton
    Left = 304
    Top = 271
    Width = 185
    Height = 25
    Caption = 'Spremi sliku za selektirani auto'
    TabOrder = 13
    OnClick = BtnUcitajSlikuClick
  end
  object EditTraziKupca: TEdit
    Left = 600
    Top = 153
    Width = 121
    Height = 23
    TabOrder = 14
    Text = 'Tra'#382'i kupca'
  end
  object ComboSortIzvjestaj: TComboBox
    Left = 582
    Top = 182
    Width = 155
    Height = 23
    TabOrder = 15
    Text = 'Sortiraj izvje'#353'taje'
    Items.Strings = (
      'Cijena uzlazno'
      'Cijena silazno')
  end
  object BtnPokreniDretve: TButton
    Left = 304
    Top = 389
    Width = 185
    Height = 25
    Caption = 'Pokreni Thread Pool zadatke'
    TabOrder = 16
    OnClick = BtnPokreniDretveClick
  end
  object BtnSiguranUI: TButton
    Left = 304
    Top = 420
    Width = 185
    Height = 25
    Caption = 'Testiraj Synchronize i Queue'
    TabOrder = 17
    OnClick = BtnSiguranUIClick
  end
  object BtnZakljucavanje: TButton
    Left = 304
    Top = 451
    Width = 185
    Height = 25
    Caption = 'Demonstriraj Zaklju'#269'avanje'
    TabOrder = 18
    OnClick = BtnZakljucavanjeClick
  end
  object BtnIzveziSve: TButton
    Left = 0
    Top = 342
    Width = 224
    Height = 25
    Caption = '1. Izvoz podataka (Zapis, Izmjena, Brisanje)'
    TabOrder = 19
    OnClick = BtnIzveziSveClick
  end
  object BtnUveziSve: TButton
    Left = 0
    Top = 373
    Width = 224
    Height = 25
    Caption = '2. Uvoz podataka ('#268'itanje i Parsiranje)'
    TabOrder = 20
    OnClick = BtnUveziSveClick
  end
  object ProgressBarPreuzimanje: TProgressBar
    Left = 582
    Top = 271
    Width = 155
    Height = 17
    TabOrder = 21
  end
  object ComboBrzina: TComboBox
    Left = 582
    Top = 294
    Width = 150
    Height = 23
    ItemIndex = 2
    TabOrder = 22
    Text = 'Neograni'#269'eno'
    Items.Strings = (
      'Sporo (50 KB/s)'
      'Srednje (200 KB/s)'
      'Neograni'#269'eno')
  end
  object BtnPreuzmiKatalog: TButton
    Left = 582
    Top = 323
    Width = 150
    Height = 25
    Caption = 'Preuzmi PDF Katalog'
    TabOrder = 23
    OnClick = BtnPreuzmiKatalogClick
  end
  object BtnDohvatiTecaj: TButton
    Left = 584
    Top = 389
    Width = 153
    Height = 25
    Caption = 'A'#382'uriraj te'#269'aj EUR/USD u'#382'ivo'
    TabOrder = 24
    OnClick = BtnDohvatiTecajClick
  end
  object BtnPokreniDll: TButton
    Left = 584
    Top = 420
    Width = 179
    Height = 25
    Caption = 'Izra'#269'un tro'#353'kova preko DLL klase'
    TabOrder = 25
    OnClick = BtnPokreniDllClick
  end
  object BtnDllOAutoru: TButton
    Left = 584
    Top = 451
    Width = 179
    Height = 25
    Caption = 'Pokreni DLL Dijalog 1 (O Autoru)'
    TabOrder = 26
    OnClick = BtnDllOAutoruClick
  end
  object BtnDllLicenca: TButton
    Left = 582
    Top = 482
    Width = 181
    Height = 25
    Caption = 'Pokreni DLL Dijalog 2 (Licenca)'
    TabOrder = 27
    OnClick = BtnDllLicencaClick
  end
  object BtnOtvoriPostavke: TButton
    Left = 352
    Top = 323
    Width = 75
    Height = 25
    Caption = 'Postavke'
    TabOrder = 28
    OnClick = BtnOtvoriPostavkeClick
  end
  object KonekcijaBaza: TFDConnection
    Params.Strings = (
      'Database=.\AutoSalon.db'
      'DriverID=sQLite')
    LoginPrompt = False
    Left = 272
    Top = 16
  end
  object FDPhysSQLiteDriverLink1: TFDPhysSQLiteDriverLink
    Left = 392
    Top = 16
  end
  object FDGUIxWaitCursor1: TFDGUIxWaitCursor
    Provider = 'Forms'
    Left = 528
    Top = 16
  end
  object OpenDialog1: TOpenDialog
    Left = 656
    Top = 16
  end
end
