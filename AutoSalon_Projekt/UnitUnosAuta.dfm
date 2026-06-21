object FormUnosAuta: TFormUnosAuta
  Left = 0
  Top = 0
  Caption = 'FormUnosAuta'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object EditMarka: TEdit
    Left = 64
    Top = 144
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'Upi'#353'i marku'
  end
  object EditModel: TEdit
    Left = 208
    Top = 144
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'Upi'#353'i model'
  end
  object EditCijena: TEdit
    Left = 64
    Top = 192
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'Upi'#353'i cijenu'
  end
  object BtnSpremi: TButton
    Left = 208
    Top = 191
    Width = 75
    Height = 25
    Caption = 'Spremi'
    TabOrder = 3
    OnClick = BtnSpremiClick
  end
end
