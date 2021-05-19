object Form2: TForm2
  Left = 287
  Top = 260
  Width = 1305
  Height = 675
  Caption = 'Notepad'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnKeyDown = OnKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object NotepadDisplay: TMemo
    Left = 0
    Top = 0
    Width = 1289
    Height = 616
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 8
    object File1: TMenuItem
      Caption = '&File'
      object New1: TMenuItem
        Caption = '&New'
        OnClick = New1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Open1: TMenuItem
        Caption = '&Open'
        OnClick = Open1Click
      end
      object SaveCTRLS1: TMenuItem
        Caption = '&Save    CTRL+S'
        OnClick = SaveCTRLS1Click
      end
      object Saveas1: TMenuItem
        Caption = 'S&ave as'
        OnClick = Saveas1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = '&Exit'
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Text files (*.txt)|*.txt|All files (*.*)|*.*'
    Options = [ofOverwritePrompt, ofEnableSizing]
    Left = 48
    Top = 8
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Text files (*.txt)|*.txt|All files (*.*)|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 88
    Top = 8
  end
end
