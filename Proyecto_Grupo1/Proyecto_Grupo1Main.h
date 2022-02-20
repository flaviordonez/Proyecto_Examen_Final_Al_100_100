/***************************************************************
 * Name:      Proyecto_Grupo1Main.h
 * Purpose:   Defines Application Frame
 * Author:    grupo1 ()
 * Created:   2022-02-13
 * Copyright: grupo1 ()
 * License:
 **************************************************************/

#ifndef PROYECTO_GRUPO1MAIN_H
#define PROYECTO_GRUPO1MAIN_H
#include<BDComun.h>

//(*Headers(Proyecto_Grupo1Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class Proyecto_Grupo1Frame: public wxFrame
{
    public:

        Proyecto_Grupo1Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Proyecto_Grupo1Frame();

    protected:
        BDComun *compo;

    private:

        //(*Handlers(Proyecto_Grupo1Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnbSalirClick(wxCommandEvent& event);
        void OnbPersonasClick(wxCommandEvent& event);
        void OnbMusicaClick(wxCommandEvent& event);
        void OnbObrasClick(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(Proyecto_Grupo1Frame)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT2;
        static const long ID_STATICBITMAP1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Proyecto_Grupo1Frame)
        wxButton* bMusica;
        wxButton* bObras;
        wxButton* bPersonas;
        wxButton* bSalir;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* tcGrupo;
        wxStaticText* txMenu;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROYECTO_GRUPO1MAIN_H
