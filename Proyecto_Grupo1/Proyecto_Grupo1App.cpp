/***************************************************************
 * Name:      Proyecto_Grupo1App.cpp
 * Purpose:   Code for Application Class
 * Author:    grupo1 ()
 * Created:   2022-02-13
 * Copyright: grupo1 ()
 * License:
 **************************************************************/

#include "Proyecto_Grupo1App.h"

//(*AppHeaders
#include "Proyecto_Grupo1Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Proyecto_Grupo1App);

bool Proyecto_Grupo1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Proyecto_Grupo1Frame* Frame = new Proyecto_Grupo1Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
