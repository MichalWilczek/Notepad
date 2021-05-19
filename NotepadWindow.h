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
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Saveas1Click(TObject *Sender);
        void __fastcall SaveCTRLS1Click(TObject *Sender);
        void __fastcall New1Click(TObject *Sender);
        void __fastcall OnKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
