//Personas.h
#ifndef PERSONAS_H
#define PERSONAS_H
#include<BDComun.h>

//(*Headers(Personas)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Personas: public wxFrame
{
	public:

		Personas(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Personas();

		//(*Declarations(Personas)
		wxButton* bEliminar;
		wxButton* bGuardar;
		wxButton* bNuevo;
		wxButton* bRecuperar;
		wxButton* bSalir;
		wxListCtrl* Lista;
		wxStaticText* txApellidos;
		wxStaticText* txCedula;
		wxStaticText* txNombre;
		wxStaticText* txPersonas;
		wxStaticText* txResultados;
		wxTextCtrl* apellidos;
		wxTextCtrl* cedula;
		wxTextCtrl* nombre;
		//*)
		void recuperar();
		void limpia();

	protected:
	    BDComun *compo;

		//(*Identifiers(Personas)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_LISTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_BUTTON5;
		//*)

	private:

		//(*Handlers(Personas)
		void OnbSalirClick(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnbSalirClick1(wxCommandEvent& event);
		void OnbSalirClick2(wxCommandEvent& event);
		void OnbRecuperarClick(wxCommandEvent& event);
		void OnListaItemSelect(wxListEvent& event);
		void OnbNuevoClick(wxCommandEvent& event);
		void OnbGuardarClick(wxCommandEvent& event);
		void OnbEliminarClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
