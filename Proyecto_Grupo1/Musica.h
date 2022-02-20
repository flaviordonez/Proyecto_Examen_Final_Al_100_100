#ifndef MUSICA_H
#define MUSICA_H
#include<BDComun.h>

//(*Headers(Musica)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Musica: public wxFrame
{
	public:

		Musica(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Musica();

		//(*Declarations(Musica)
		wxButton* Bguardar;
		wxButton* bEliminar;
		wxButton* bNuevo;
		wxButton* bRecuperar;
		wxButton* bSalir;
		wxListCtrl* Lista;
		wxStaticText* StaticText1;
		wxStaticText* txAnio;
		wxStaticText* txCancion;
		wxStaticText* txCategoria;
		wxStaticText* txCodigo;
		wxStaticText* txGrupo;
		wxStaticText* txResultados;
		wxTextCtrl* anio;
		wxTextCtrl* cancion;
		wxTextCtrl* categoria;
		wxTextCtrl* codigo;
		wxTextCtrl* grupo;
		//*)

		void recuperar();
		void limpiar();

	protected:
	    BDComun *compo;

		//(*Identifiers(Musica)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_LISTCTRL1;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL5;
		//*)

	private:

		//(*Handlers(Musica)
		void OnautorText(wxCommandEvent& event);
		void OnanioText(wxCommandEvent& event);
		void OnautorText1(wxCommandEvent& event);
		void OnbSalirClick(wxCommandEvent& event);
		void OnbRecuperarClick(wxCommandEvent& event);
		void OnbNuevoClick(wxCommandEvent& event);
		void OnListaItemSelect(wxListEvent& event);
		void OnBguardarClick(wxCommandEvent& event);
		void OnbEliminarClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
