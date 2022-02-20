//Obras_de_Arte.cpp
#include "Obras_de_Arte.h"

//(*InternalHeaders(Obras_de_Arte)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(Obras_de_Arte)
const long Obras_de_Arte::ID_STATICTEXT1 = wxNewId();
const long Obras_de_Arte::ID_STATICTEXT2 = wxNewId();
const long Obras_de_Arte::ID_STATICTEXT3 = wxNewId();
const long Obras_de_Arte::ID_STATICTEXT4 = wxNewId();
const long Obras_de_Arte::ID_TEXTCTRL1 = wxNewId();
const long Obras_de_Arte::ID_TEXTCTRL2 = wxNewId();
const long Obras_de_Arte::ID_TEXTCTRL3 = wxNewId();
const long Obras_de_Arte::ID_STATICTEXT5 = wxNewId();
const long Obras_de_Arte::ID_LISTCTRL1 = wxNewId();
const long Obras_de_Arte::ID_BUTTON1 = wxNewId();
const long Obras_de_Arte::ID_BUTTON2 = wxNewId();
const long Obras_de_Arte::ID_BUTTON3 = wxNewId();
const long Obras_de_Arte::ID_BUTTON4 = wxNewId();
const long Obras_de_Arte::ID_BUTTON5 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Obras_de_Arte,wxFrame)
	//(*EventTable(Obras_de_Arte)
	//*)
END_EVENT_TABLE()

Obras_de_Arte::Obras_de_Arte(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Obras_de_Arte)

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(559,450));
	Move(wxDefaultPosition);
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
	txObras = new wxStaticText(this, ID_STATICTEXT1, _("OBRAS DE ARTE"), wxPoint(168,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont txObrasFont(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txObras->SetFont(txObrasFont);
	txNombre = new wxStaticText(this, ID_STATICTEXT2, _("Nombre:"), wxPoint(24,112), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont txNombreFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txNombre->SetFont(txNombreFont);
	txAutor = new wxStaticText(this, ID_STATICTEXT3, _("Autor:"), wxPoint(24,176), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont txAutorFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txAutor->SetFont(txAutorFont);
	txAnio = new wxStaticText(this, ID_STATICTEXT4, _("Año de Publicación:"), wxPoint(24,248), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont txAnioFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txAnio->SetFont(txAnioFont);
	nombre = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(96,104), wxSize(192,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	autor = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(96,176), wxSize(192,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	anio = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(208,240), wxSize(80,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txResultados = new wxStaticText(this, ID_STATICTEXT5, _("RESULTADOS"), wxPoint(360,80), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont txResultadosFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txResultados->SetFont(txResultadosFont);
	Lista = new wxListCtrl(this, ID_LISTCTRL1, wxPoint(304,104), wxSize(240,280), wxLC_LIST, wxDefaultValidator, _T("ID_LISTCTRL1"));
	bRecuperar = new wxButton(this, ID_BUTTON1, _("Recuperar"), wxPoint(8,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont bRecuperarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bRecuperar->SetFont(bRecuperarFont);
	bNuevo = new wxButton(this, ID_BUTTON2, _("Nuevo"), wxPoint(112,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont bNuevoFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bNuevo->SetFont(bNuevoFont);
	bEliminar = new wxButton(this, ID_BUTTON3, _("Eliminar"), wxPoint(216,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont bEliminarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bEliminar->SetFont(bEliminarFont);
	bGuardar = new wxButton(this, ID_BUTTON4, _("Guargar"), wxPoint(320,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont bGuardarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bGuardar->SetFont(bGuardarFont);
	bSalir = new wxButton(this, ID_BUTTON5, _("Salir"), wxPoint(424,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont bSalirFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bSalir->SetFont(bSalirFont);

	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&Obras_de_Arte::OnListaItemSelect);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Obras_de_Arte::OnbRecuperarClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Obras_de_Arte::OnbNuevoClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Obras_de_Arte::OnbEliminarClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Obras_de_Arte::OnbGuardarClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Obras_de_Arte::OnButton5Click);
	//*)
	compo = new BDComun("personas", "root", "170884");
}

Obras_de_Arte::~Obras_de_Arte()
{
	//(*Destroy(Obras_de_Arte)
	//*)
}

/*****************************recuperar******************************/
void Obras_de_Arte::recuperar() {
    MYSQL_ROW rw;
    int i;
    compo->conectar();
    wxString lr = compo->ejecutarSQL("SELECT * FROM OBRAS_DE_ARTE", 0);//personas es el nombre de la tabla
    if (lr == "") {
      Lista->DeleteAllItems();
      for (i = 0; compo->consultar(); i ++) {
        rw = compo->getRow();
        Lista->InsertItem(i, _(rw[0]) + " " + _(rw[1])
                           + " " + _(rw[2]));
      }
    }
    compo->cerrar();
}
void Obras_de_Arte::OnbRecuperarClick(wxCommandEvent& event)
{
    recuperar();
}

/**************************FUNCIONALIDAD lista************************************/
void Obras_de_Arte::OnListaItemSelect(wxListEvent& event)
{
    MYSQL_ROW rw;
    long pos = Lista->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    wxString key = Lista->GetItemText(pos), sql, lr;
    key = key.substr(0, key.find(" "));
    compo->conectar();
    sql = "SELECT * FROM OBRAS_DE_ARTE WHERE NOMBRE = "// Solucionar esto ?
          + _("'") + key + _("'");
    lr = compo->ejecutarSQL(sql, 0);
    if (lr == "") {
      compo->consultar();
      rw = compo->getRow();
      nombre->SetValue(_(rw[0]));
      autor->SetValue(_(rw[1]));
      anio->SetValue(_(rw[2]));
    }
    compo->cerrar();
}

/*****************************boton nuevo******************************/
void Obras_de_Arte::limpiar(){
    nombre->SetValue("");
    autor->SetValue("");
    anio->SetValue("");
}
void Obras_de_Arte::OnbNuevoClick(wxCommandEvent& event)
{
   limpiar();
}

/********************************guardar********************************/
void Obras_de_Arte::OnbGuardarClick(wxCommandEvent& event)
{
    MYSQL_ROW rw;
    wxString key = nombre->GetValue(), sql, lr;
    if (key == "") {
        wxMessageBox("ERROR: LA OBRA NO PUEDE ESTAR VACIA");
        return;
    }
    compo->conectar();
    sql = "SELECT COUNT(*) FROM OBRAS_DE_ARTE WHERE NOMBRE = '"
           + key + _("'");
    lr = compo->ejecutarSQL(sql, 0);
    if (lr == "") {
      compo->consultar();
      rw = compo->getRow();
      int opr = 1;
      if(_(rw[0]) == "0") {
        sql = _("INSERT INTO OBRAS_DE_ARTE (nombre,autor,anio) ") +
            _("VALUES ('") + nombre->GetValue() + _("', '") +
            autor->GetValue() + _("', '") +
            anio->GetValue() + _("')");
      }
      else {
        sql = "UPDATE OBRAS_DE_ARTE SET autor = '" +
          autor->GetValue() + "', anio = '" +
          anio->GetValue() + "' WHERE nombre = '"
          + nombre->GetValue() + "'";
        opr = 2;
      }
      compo->cerrar();
      compo->conectar();
      compo->ejecutarSQL(sql, opr);
    }
    //compo->cerrar();//no va

}
/***********************boton eliminar*******************************/
void Obras_de_Arte::OnbEliminarClick(wxCommandEvent& event)
{
    compo->conectar();
    wxString sql = "DELETE FROM OBRAS_DE_ARTE WHERE  NOMBRE = '" +//SOLUCION'
        nombre->GetValue() + "'";//decia autor, es nombre
    compo->ejecutarSQL(sql, 3);
    limpiar();
}

/*******************************boton Salir*************/

void Obras_de_Arte::OnButton5Click(wxCommandEvent& event)
{
    //flaviordonez
    Close();
}
