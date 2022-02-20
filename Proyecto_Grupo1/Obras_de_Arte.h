//Obras_de_Arte.h
#ifndef OBRAS_DE_ARTE_H
#define OBRAS_DE_ARTE_H
#include<BDComun.h>

//(*Headers(Obras_de_Arte)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Obras_de_Arte: public wxFrame
{
	public:

		Obras_de_Arte(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Obras_de_Arte();

		//(*Declarations(Obras_de_Arte)
		wxButton* bEliminar;
		wxButton* bGuardar;
		wxButton* bNuevo;
		wxButton* bRecuperar;
		wxButton* bSalir;
		wxListCtrl* Lista;
		wxStaticText* txAnio;
		wxStaticText* txAutor;
		wxStaticText* txNombre;
		wxStaticText* txObras;
		wxStaticText* txResultados;
		wxTextCtrl* anio;
		wxTextCtrl* autor;
		wxTextCtrl* nombre;
		//*)
		void recuperar();
		void limpiar();

	protected:
	       BDComun *compo;

		//(*Identifiers(Obras_de_Arte)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT5;
		static const long ID_LISTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		//*)

	private:

		//(*Handlers(Obras_de_Arte)
		void OnButton5Click(wxCommandEvent& event);
		void OnbGuardarClick(wxCommandEvent& event);
		void OnbEliminarClick(wxCommandEvent& event);
		void OnbRecuperarClick(wxCommandEvent& event);
		void OnListaItemSelect(wxListEvent& event);
		void OnbNuevoClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
