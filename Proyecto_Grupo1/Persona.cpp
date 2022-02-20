#include "Persona.h"

//(*InternalHeaders(Persona)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Persona)
//*)

BEGIN_EVENT_TABLE(Persona,wxFrame)
	//(*EventTable(Persona)
	//*)
END_EVENT_TABLE()

Persona::Persona(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(Persona)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	//*)
}

Persona::~Persona()
{
	//(*Destroy(Persona)
	//*)
}

