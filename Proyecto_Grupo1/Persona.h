#ifndef PERSONA_H
#define PERSONA_H

//(*Headers(Persona)
#include <wx/frame.h>
//*)

class Persona: public wxFrame
{
	public:

		Persona(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~Persona();

		//(*Declarations(Persona)
		//*)

	protected:

		//(*Identifiers(Persona)
		//*)

	private:

		//(*Handlers(Persona)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
