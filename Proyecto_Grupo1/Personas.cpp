//Personas.cpp
#include "Personas.h"

//(*InternalHeaders(Personas)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(Personas)
const long Personas::ID_STATICTEXT1 = wxNewId();
const long Personas::ID_STATICTEXT2 = wxNewId();
const long Personas::ID_STATICTEXT3 = wxNewId();
const long Personas::ID_TEXTCTRL1 = wxNewId();
const long Personas::ID_TEXTCTRL2 = wxNewId();
const long Personas::ID_TEXTCTRL3 = wxNewId();
const long Personas::ID_LISTCTRL1 = wxNewId();
const long Personas::ID_BUTTON1 = wxNewId();
const long Personas::ID_BUTTON2 = wxNewId();
const long Personas::ID_BUTTON3 = wxNewId();
const long Personas::ID_BUTTON4 = wxNewId();
const long Personas::ID_STATICTEXT4 = wxNewId();
const long Personas::ID_STATICTEXT5 = wxNewId();
const long Personas::ID_BUTTON5 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Personas,wxFrame)
	//(*EventTable(Personas)
	//*)
END_EVENT_TABLE()

Personas::Personas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{

	//(*Initialize(Personas)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(559,450));
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
	txCedula = new wxStaticText(this, ID_STATICTEXT1, _("Cédula:"), wxPoint(16,104), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont txCedulaFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txCedula->SetFont(txCedulaFont);
	txApellidos = new wxStaticText(this, ID_STATICTEXT2, _("Apellidos:"), wxPoint(16,192), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont txApellidosFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txApellidos->SetFont(txApellidosFont);
	txNombre = new wxStaticText(this, ID_STATICTEXT3, _("Nombre:"), wxPoint(16,280), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont txNombreFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txNombre->SetFont(txNombreFont);
	cedula = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(96,96), wxSize(121,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	apellidos = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(96,184), wxSize(121,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	nombre = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(96,272), wxSize(121,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	Lista = new wxListCtrl(this, ID_LISTCTRL1, wxPoint(232,96), wxSize(304,280), wxLC_LIST, wxDefaultValidator, _T("ID_LISTCTRL1"));
	bRecuperar = new wxButton(this, ID_BUTTON1, _("Recuperar"), wxPoint(24,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont bRecuperarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bRecuperar->SetFont(bRecuperarFont);
	bNuevo = new wxButton(this, ID_BUTTON2, _("Nuevo"), wxPoint(128,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont bNuevoFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bNuevo->SetFont(bNuevoFont);
	bEliminar = new wxButton(this, ID_BUTTON3, _("Eliminar"), wxPoint(232,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont bEliminarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bEliminar->SetFont(bEliminarFont);
	bGuardar = new wxButton(this, ID_BUTTON4, _("Guardar"), wxPoint(344,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont bGuardarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bGuardar->SetFont(bGuardarFont);
	txResultados = new wxStaticText(this, ID_STATICTEXT4, _("RESULTADOS"), wxPoint(312,72), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont txResultadosFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txResultados->SetFont(txResultadosFont);
	txPersonas = new wxStaticText(this, ID_STATICTEXT5, _("PERSONAS"), wxPoint(208,32), wxSize(120,21), 0, _T("ID_STATICTEXT5"));
	wxFont txPersonasFont(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txPersonas->SetFont(txPersonasFont);
	bSalir = new wxButton(this, ID_BUTTON5, _("Salir"), wxPoint(448,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont bSalirFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bSalir->SetFont(bSalirFont);
	Center();

	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&Personas::OnListaItemSelect);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Personas::OnbRecuperarClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Personas::OnbNuevoClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Personas::OnbEliminarClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Personas::OnbGuardarClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Personas::OnbSalirClick2);
	//*)

	compo = new BDComun("personas", "root", "170884");
}

Personas::~Personas()
{
	//(*Destroy(Personas)
	//*)
}

/**************************************Metodos recuperar*************************************/
void Personas::recuperar() {
    MYSQL_ROW rw;
    int i;
    compo->conectar();
    wxString lr = compo->ejecutarSQL("SELECT * FROM ESTUDIANTES", 0);//estudiantes es el nombre de la tabla
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


void Personas::OnbRecuperarClick(wxCommandEvent& event)
{
    recuperar();
}
/******************************Funcionalidad de la lista************************************/

void Personas::OnListaItemSelect(wxListEvent& event)
{
    MYSQL_ROW rw;
    long pos = Lista->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    wxString key = Lista->GetItemText(pos), sql, lr;
    key = key.substr(0, key.find(" "));
    compo->conectar();
    sql = "SELECT * FROM ESTUDIANTES WHERE CEDULA = "//solucionado
          + _("'") + key + _("'");
    lr = compo->ejecutarSQL(sql, 0);
    if (lr == "") {
      compo->consultar();
      rw = compo->getRow();
      cedula->SetValue(_(rw[0]));
      apellidos->SetValue(_(rw[1]));
      nombre->SetValue(_(rw[2]));
    }
    compo->cerrar();
}
/*******************METODOS PARA BOTON NUEVO**********************************/
void Personas::limpia(){
    cedula->SetValue("");
    apellidos->SetValue("");
    nombre->SetValue("");
}

void Personas::OnbNuevoClick(wxCommandEvent& event)
{
    limpia();
}
/*********************METODO PARA BOTON GUARDAR**********************************/
void Personas::OnbGuardarClick(wxCommandEvent& event)
{
    MYSQL_ROW rw;
    wxString key = cedula->GetValue(), sql, lr;
    if (key == "") {
        wxMessageBox("ERROR: LA CEDULA NO PUEDE ESTAR VACIA");
        return;
    }

    compo->conectar();
    sql = "SELECT COUNT(*) FROM ESTUDIANTES WHERE CEDULA = '"//' solucionado
           + key + _("'");
    lr = compo->ejecutarSQL(sql, 0);
    if (lr == "") {
      compo->consultar();
      rw = compo->getRow();
      int opr = 1;

      if(_(rw[0]) == "0") {
        sql = _("INSERT INTO ESTUDIANTES (cedula, apellidos, nombre) ") +
            _("VALUES ('") + cedula->GetValue() + _("', '") +
            apellidos->GetValue() + _("', '") +
            nombre->GetValue() + _("')");
      }
      else {
        sql = "UPDATE ESTUDIANTES SET apellidos = '" +
          apellidos->GetValue() + "', nombre = '" +
          nombre->GetValue() + "' WHERE cedula = '"
          + cedula->GetValue() + "'";
        opr = 2;
      }
      compo->cerrar();
      compo->conectar();
      compo->ejecutarSQL(sql, opr);
    }
}

/***********************METODO PARA BOTON ELIMINAR********************/
void Personas::OnbEliminarClick(wxCommandEvent& event)
{
    compo->conectar();
    wxString sql = "DELETE FROM ESTUDIANTES WHERE  CEDULA='" +//cedula = '
    cedula->GetValue() + "'";
    compo->ejecutarSQL(sql, 3);
    limpia();

}

/*****************METODO BOTON SALIR************************************/
void Personas::OnbSalirClick2(wxCommandEvent& event)
{
    Close();
}
