//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NotepadWindow.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

AnsiString fileName = "";

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Open1Click(TObject *Sender)
{
    try {
        if (OpenDialog1->Execute()) {
            NotepadDisplay->Lines->LoadFromFile(OpenDialog1->FileName);
            fileName = OpenDialog1->FileName;
        }
    } catch (...) {
        ShowMessage("File cannot be found. Check if file exists on the drive.");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Saveas1Click(TObject *Sender)
{
    try {
        if (SaveDialog1->Execute()) {
            NotepadDisplay->Lines->SaveToFile(OpenDialog1->FileName);
            fileName = SaveDialog1->FileName;
        }
    } catch (...) {
        ShowMessage("File could not be saved.");
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm2::SaveCTRLS1Click(TObject *Sender)
{
    if (fileName != "") {
        NotepadDisplay->Lines->SaveToFile(fileName);
    } else {
        Form2->Saveas1Click(MainMenu1);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::New1Click(TObject *Sender)
{
    if (Application->MessageBox("Do you want to save changes in the file?",
    "Confirm", MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES) {
        NotepadDisplay->Lines->Clear();
        fileName = "";
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm2::OnKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
    if (Shift.Contains(ssCtrl)) {
        if ((Key == 's') || (Key = 'S')) {
            Form2->SaveCTRLS1Click(MainMenu1);
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Exit1Click(TObject *Sender)
{
    if (Application->MessageBox("Do you want to exit?",
    "Confirm", MB_YESNO | MB_ICONQUESTION) == IDYES) {
        Application->Terminate();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
    if (Application->MessageBox("Do you want to exit?",
    "Confirm", MB_YESNO | MB_ICONQUESTION) == IDNO) {
        Action=0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Cut1Click(TObject *Sender)
{
    NotepadDisplay->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Copy1Click(TObject *Sender)
{
    NotepadDisplay->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::PasteCTRLV1Click(TObject *Sender)
{
    NotepadDisplay->PasteFromClipboard();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Wraptext1Click(TObject *Sender)
{
    if (Wraptext1->Checked == true) {
        Wraptext1->Checked=false;
        NotepadDisplay->WordWrap=false;
        NotepadDisplay->ScrollBars = ssBoth;
    } else {
        Wraptext1->Checked=true;
        NotepadDisplay->WordWrap=true;
        NotepadDisplay->ScrollBars = ssVertical;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Font1Click(TObject *Sender)
{
    if (FontDialog1->Execute()) {
        NotepadDisplay->Font->Name = FontDialog1->Font->Name;
        NotepadDisplay->Font->Color = FontDialog1->Font->Color;
        NotepadDisplay->Font->Size = FontDialog1->Font->Size;
        NotepadDisplay->Font->Style = FontDialog1->Font->Style;
    }
}
//---------------------------------------------------------------------------

