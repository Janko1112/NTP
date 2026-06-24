object FormDllProzor: TFormDllProzor
  Left = 0
  Top = 0
  Caption = 'FormDllProzor'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  TextHeight = 15
  object LabelNaslov: TLabel
    Left = 240
    Top = 72
    Width = 102
    Height = 25
    Caption = 'LabelNaslov'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object LabelTekst: TLabel
    Left = 184
    Top = 128
    Width = 241
    Height = 169
    AutoSize = False
    Caption = 'LabelTekst'
    WordWrap = True
  end
  object BtnZatvori: TButton
    Left = 256
    Top = 344
    Width = 75
    Height = 25
    Caption = 'U redu'
    ModalResult = 1
    TabOrder = 0
  end
end
