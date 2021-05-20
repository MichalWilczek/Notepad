//---------------------------------------------------------------------------

#ifndef NotepadWindowH
#define NotepadWindowH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *New1;
        TMenuItem *N1;
        TMenuItem *Open1;
        TMenuItem *SaveCTRLS1;
        TMenuItem *Saveas1;
        TMenuItem *N2;
        TMenuItem *Exit1;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TMemo *NotepadDisplay;
        TMenuItem *Edit1;
        TMenuItem *Copy1;
        TMenuItem *Cut1;
        TMenuItem *PasteCTRLV1;
        TMenuItem *Format1;
        TMenuItem *Wraptext1;
        TMenuItem *Font1;
        TMenuItem *Help1;
        TLabel *Label1;
        TFontDialog *FontDialog1;
        TMenuItem *Details1;
        TMenuItem *Aboutprogram1;
        TMenuItem *Meonline1;
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Saveas1Click(TObject *Sender);
        void __fastcall SaveCTRLS1Click(TObject *Sender);
        void __fastcall New1Click(TObject *Sender);
        void __fastcall OnKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Cut1Click(TObject *Sender);
        void __fastcall Copy1Click(TObject *Sender);
        void __fastcall PasteCTRLV1Click(TObject *Sender);
        void __fastcall Wraptext1Click(TObject *Sender);
        void __fastcall Font1Click(TObject *Sender);
        void __fastcall Aboutprogram1Click(TObject *Sender);
        void __fastcall Meonline1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
