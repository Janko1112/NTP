object FormUnosKupca: TFormUnosKupca
  Left = 0
  Top = 0
  Caption = 'FormUnosKupca'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object EditIme: TEdit
    Left = 56
    Top = 136
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'Ime'
  end
  object EditPrezime: TEdit
    Left = 56
    Top = 165
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'Prezime'
  end
  object EditOIB: TEdit
    Left = 56
    Top = 194
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'OIB'
  end
  object BtnSpremiKupca: TButton
    Left = 200
    Top = 164
    Width = 129
    Height = 25
    Caption = 'Spremi Kupca'
    TabOrder = 3
    OnClick = BtnSpremiKupcaClick
  end
end
