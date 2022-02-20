/***************************************************************
 * Name:      Proyecto_Grupo1Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    grupo1 ()
 * Created:   2022-02-13
 * Copyright: grupo1 ()
 * License:
 **************************************************************/

#include "Proyecto_Grupo1Main.h"
#include "BDComun.h"
#include <wx/msgdlg.h>
#include "Personas.h"//permite llamar a ventana persona
#include "Musica.h"//Permite llamar ventana Musica
#include "Obras_de_Arte.h"//Permite llamar ventana Obras de arte

//(*InternalHeaders(Proyecto_Grupo1Frame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Proyecto_Grupo1Frame)
const long Proyecto_Grupo1Frame::ID_STATICTEXT1 = wxNewId();
const long Proyecto_Grupo1Frame::ID_BUTTON1 = wxNewId();
const long Proyecto_Grupo1Frame::ID_BUTTON2 = wxNewId();
const long Proyecto_Grupo1Frame::ID_BUTTON3 = wxNewId();
const long Proyecto_Grupo1Frame::ID_BUTTON4 = wxNewId();
const long Proyecto_Grupo1Frame::ID_STATICTEXT2 = wxNewId();
const long Proyecto_Grupo1Frame::ID_STATICBITMAP1 = wxNewId();
const long Proyecto_Grupo1Frame::idMenuQuit = wxNewId();
const long Proyecto_Grupo1Frame::idMenuAbout = wxNewId();
const long Proyecto_Grupo1Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Proyecto_Grupo1Frame,wxFrame)
    //(*EventTable(Proyecto_Grupo1Frame)
    //*)
END_EVENT_TABLE()

Proyecto_Grupo1Frame::Proyecto_Grupo1Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Proyecto_Grupo1Frame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(559,450));
    SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
    txMenu = new wxStaticText(this, ID_STATICTEXT1, _("MENU DE OPCIONES"), wxPoint(104,40), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont txMenuFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Malgun Gothic"),wxFONTENCODING_DEFAULT);
    txMenu->SetFont(txMenuFont);
    bPersonas = new wxButton(this, ID_BUTTON1, _("Personas"), wxPoint(136,104), wxSize(141,28), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont bPersonasFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    bPersonas->SetFont(bPersonasFont);
    bMusica = new wxButton(this, ID_BUTTON2, _("Música"), wxPoint(136,160), wxSize(144,28), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont bMusicaFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    bMusica->SetFont(bMusicaFont);
    bObras = new wxButton(this, ID_BUTTON3, _("Obras de Arte"), wxPoint(136,216), wxSize(144,28), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont bObrasFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    bObras->SetFont(bObrasFont);
    bSalir = new wxButton(this, ID_BUTTON4, _("Salir"), wxPoint(384,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont bSalirFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    bSalir->SetFont(bSalirFont);
    tcGrupo = new wxStaticText(this, ID_STATICTEXT2, _("GRUPO1"), wxPoint(384,304), wxSize(56,29), 0, _T("ID_STATICTEXT2"));
    wxFont tcGrupoFont(14,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    tcGrupo->SetFont(tcGrupoFont);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\flavi\\Pictures\\espe.jpg")).Rescale(wxSize(224,192).GetWidth(),wxSize(224,192).GetHeight())), wxPoint(312,104), wxSize(224,192), 0, _T("ID_STATICBITMAP1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Proyecto_Grupo1Frame::OnbPersonasClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Proyecto_Grupo1Frame::OnbMusicaClick);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Proyecto_Grupo1Frame::OnbObrasClick);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Proyecto_Grupo1Frame::OnbSalirClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Proyecto_Grupo1Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Proyecto_Grupo1Frame::OnAbout);

    //*)
    compo = new BDComun("personas", "root", "170884");//(nombre de la base de datos, usuaario, contraseña de la base de datos a conectar
}

Proyecto_Grupo1Frame::~Proyecto_Grupo1Frame()
{
    //(*Destroy(Proyecto_Grupo1Frame)
    //*)
      //flaviordonez
      compo ->cerrar();
}

void Proyecto_Grupo1Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Proyecto_Grupo1Frame::OnAbout(wxCommandEvent& event)
{
    //Grupo1
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox("ESTRUCTURA DE DATOS NRC 8757\n"
                 "Integrantes:\n"
                 "Loachamin Paucar Christian\n"
                 "Ordoñez Montero Flavio Mauricio\n"
                 "Peralvo Perez Bryan Patricio\n"
                 "Sanchez Ponce Edgar Alexander", _("EXAMEN FINAL GRUPO 1"));
}

void Proyecto_Grupo1Frame::OnbSalirClick(wxCommandEvent& event)
{
    Close();
}

void Proyecto_Grupo1Frame::OnbPersonasClick(wxCommandEvent& event)
{
    //Boton Personas
    Personas * tmp = new Personas(0);
    tmp ->Show();
}

void Proyecto_Grupo1Frame::OnbMusicaClick(wxCommandEvent& event)
{
    //Boton Musica
    Musica * tmp = new Musica(0);
    tmp ->Show();
}

void Proyecto_Grupo1Frame::OnbObrasClick(wxCommandEvent& event)
{
    //Boton Obras de Arte
    Obras_de_Arte * tmp = new Obras_de_Arte(0);

    tmp ->Show();
}

