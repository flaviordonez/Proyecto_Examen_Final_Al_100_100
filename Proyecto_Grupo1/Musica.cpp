
//Musica.h
#include "Musica.h"

//(*InternalHeaders(Musica)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(Musica)
const long Musica::ID_STATICTEXT1 = wxNewId();
const long Musica::ID_STATICTEXT2 = wxNewId();
const long Musica::ID_STATICTEXT3 = wxNewId();
const long Musica::ID_STATICTEXT4 = wxNewId();
const long Musica::ID_LISTCTRL1 = wxNewId();
const long Musica::ID_STATICTEXT5 = wxNewId();
const long Musica::ID_TEXTCTRL1 = wxNewId();
const long Musica::ID_TEXTCTRL2 = wxNewId();
const long Musica::ID_TEXTCTRL3 = wxNewId();
const long Musica::ID_STATICTEXT6 = wxNewId();
const long Musica::ID_BUTTON1 = wxNewId();
const long Musica::ID_BUTTON2 = wxNewId();
const long Musica::ID_BUTTON3 = wxNewId();
const long Musica::ID_BUTTON4 = wxNewId();
const long Musica::ID_BUTTON5 = wxNewId();
const long Musica::ID_TEXTCTRL4 = wxNewId();
const long Musica::ID_STATICTEXT7 = wxNewId();
const long Musica::ID_TEXTCTRL5 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Musica,wxFrame)
	//(*EventTable(Musica)
	//*)
END_EVENT_TABLE()

Musica::Musica(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Musica)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(559,450));
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("MUSICA"), wxPoint(216,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	txCancion = new wxStaticText(this, ID_STATICTEXT2, _("Cancion:"), wxPoint(24,160), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont txCancionFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txCancion->SetFont(txCancionFont);
	txGrupo = new wxStaticText(this, ID_STATICTEXT3, _("Grupo:"), wxPoint(24,216), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont txGrupoFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txGrupo->SetFont(txGrupoFont);
	txAnio = new wxStaticText(this, ID_STATICTEXT4, _("Año Publicación:"), wxPoint(24,328), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont txAnioFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txAnio->SetFont(txAnioFont);
	Lista = new wxListCtrl(this, ID_LISTCTRL1, wxPoint(272,88), wxSize(264,264), wxLC_LIST, wxDefaultValidator, _T("ID_LISTCTRL1"));
	txResultados = new wxStaticText(this, ID_STATICTEXT5, _("RESULTADOS"), wxPoint(344,64), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont txResultadosFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txResultados->SetFont(txResultadosFont);
	cancion = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(104,152), wxSize(152,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	grupo = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(104,208), wxSize(153,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	anio = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(168,320), wxSize(88,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txCategoria = new wxStaticText(this, ID_STATICTEXT6, _("Categoría:"), wxPoint(24,272), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont txCategoriaFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txCategoria->SetFont(txCategoriaFont);
	bRecuperar = new wxButton(this, ID_BUTTON1, _("Recuperar"), wxPoint(8,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont bRecuperarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bRecuperar->SetFont(bRecuperarFont);
	bNuevo = new wxButton(this, ID_BUTTON2, _("Nuevo"), wxPoint(112,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont bNuevoFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bNuevo->SetFont(bNuevoFont);
	bEliminar = new wxButton(this, ID_BUTTON3, _("Eliminar"), wxPoint(216,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont bEliminarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bEliminar->SetFont(bEliminarFont);
	Bguardar = new wxButton(this, ID_BUTTON4, _("Guardar"), wxPoint(320,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont BguardarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	Bguardar->SetFont(BguardarFont);
	bSalir = new wxButton(this, ID_BUTTON5, _("Salir"), wxPoint(424,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont bSalirFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	bSalir->SetFont(bSalirFont);
	categoria = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(112,264), wxSize(144,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	txCodigo = new wxStaticText(this, ID_STATICTEXT7, _("Codigo:"), wxPoint(24,104), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	wxFont txCodigoFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	txCodigo->SetFont(txCodigoFont);
	codigo = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxPoint(152,96), wxSize(104,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	Center();

	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&Musica::OnListaItemSelect);
	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&Musica::OnautorText1);
	Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&Musica::OnanioText);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Musica::OnbRecuperarClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Musica::OnbNuevoClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Musica::OnbEliminarClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Musica::OnBguardarClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Musica::OnbSalirClick);
	//*)
	compo = new BDComun("personas", "root", "170884");
}

Musica::~Musica()
{
	//(*Destroy(Musica)
	//*)
}


void Musica::OnautorText(wxCommandEvent& event)
{
}

void Musica::OnanioText(wxCommandEvent& event)
{
}

void Musica::OnautorText1(wxCommandEvent& event)
{
}

void Musica::OnbSalirClick(wxCommandEvent& event)
{
    Close();
}

/********************************boton recuperar****************************/
void Musica::recuperar() {
    MYSQL_ROW rw;
    int i;
    compo->conectar();
    wxString lr = compo->ejecutarSQL("SELECT * FROM MUSICA", 0);//musica es el nombre de la tabla
    if (lr == "") {
      Lista->DeleteAllItems();
      for (i = 0; compo->consultar(); i ++) {
        rw = compo->getRow();
        Lista->InsertItem(i, _(rw[0]) + " " + _(rw[1])
                           + " " + _(rw[2])+ " " + _(rw[3])+ " " + _(rw[4]));
      }
    }
    compo->cerrar();
}

void Musica::OnbRecuperarClick(wxCommandEvent& event)
{
    recuperar();
}

/*******************************Funcionalidad de la lista********************************/
void Musica::OnListaItemSelect(wxListEvent& event)
{
     MYSQL_ROW rw;
    long pos = Lista->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    wxString key = Lista->GetItemText(pos), sql, lr;
    key = key.substr(0, key.find(" "));
    compo->conectar();
    sql = "SELECT * FROM MUSICA WHERE CODIGO = "
          + _("'") + key + _("'");
    lr = compo->ejecutarSQL(sql, 0);
    if (lr == "") {
      compo->consultar();
      rw = compo->getRow();
      codigo->SetValue(_(rw[0]));
      cancion->SetValue(_(rw[1]));
      grupo->SetValue(_(rw[2]));
      categoria->SetValue(_(rw[3]));
      anio->SetValue(_(rw[4]));
    }
    compo->cerrar();
}

/*****************************Método Botón Nuevo*******************************/
void Musica::limpiar(){
    codigo->SetValue("");
    cancion->SetValue("");
    grupo->SetValue("");
    categoria->SetValue("");
    anio->SetValue("");
}

void Musica::OnbNuevoClick(wxCommandEvent& event)
{
    limpiar();
}

/**********************************Boton Guardar*******************************/
void Musica::OnBguardarClick(wxCommandEvent& event)
{
    MYSQL_ROW rw;
    wxString key = codigo->GetValue(), sql, lr;
    if (key == "") {
        wxMessageBox("ERROR: EL CODIGO NO PUEDE ESTAR VACIA");
        return;
    }
    compo->conectar();
    sql = "SELECT COUNT(*) FROM MUSICA WHERE CODIGO = '"
           + key + _("'");
    lr = compo->ejecutarSQL(sql, 0);
    if (lr == "") {
      compo->consultar();
      rw = compo->getRow();
      int opr = 1;
      if(_(rw[0]) == "0") {
        sql = _("INSERT INTO MUSICA (codigo, cancion, grupo, categoria, anio) ") +
            _("VALUES ('") + codigo->GetValue() + _("', '") +
            cancion->GetValue() + _("', '") +
            grupo->GetValue() + _("', '") +
            categoria->GetValue() + _("', '") +//AQUI DABA ERROR FALTABA '
            anio->GetValue() + _("')");
      }
      else {
        sql = "UPDATE MUSICA SET cancion = ' " +
            cancion->GetValue() + "', grupo = '" +
            grupo->GetValue() + "', categoria = '" +
            categoria->GetValue() + "', anio = '" +
            anio->GetValue() + "' WHERE codigo = '"
          + codigo->GetValue() + "'";
        opr = 2;
      }
      compo->cerrar();
      compo->conectar();
      compo->ejecutarSQL(sql, opr);
    }

}
/********************boton Eliminar********************/


void Musica::OnbEliminarClick(wxCommandEvent& event)
{
    compo->conectar();
    wxString sql = "DELETE FROM MUSICA WHERE  cancion= '" +
        cancion->GetValue() + "'";
    compo->ejecutarSQL(sql, 3);
    limpiar();
}
