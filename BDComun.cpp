//Clase BDComun.cpp
#include "BDComun.h"
#include<iostream>
#include<mysql.h>
#include<sstream>
#include <wx/msgdlg.h>
#include<wx/window.h>

BDComun::BDComun(const char *db, const char *us,const char *pw)
{
    HostName = "localhost";
    DataBase = db;
    UserName = us;
    Password = pw;
    Socket = NULL;
}

BDComun::~BDComun()
{
//dtor
}
void BDComun::conectar() {

    try {
        conn = mysql_init(NULL);
        if(!mysql_real_connect(conn, HostName, UserName , Password, DataBase, Port, Socket, 0)) {
            wxMessageBox((wxString)mysql_error(conn));
            exit(1);
        }
    }
    catch (wxString e){
        wxMessageBox("[EXCEPTION EN CONECTAR] " + e);
        exit(1);
    }
}

void BDComun::cerrar() {
   mysql_free_result(res);
   mysql_close(conn);
}

bool BDComun::consultar() {
    row = mysql_fetch_row(res);
    return (row != NULL);
}

wxString BDComun::ejecutarSQL(const char *sql, int i) {
    static wxString opr[4] = {"CONSULTAR ", "INSERCION ", "ACTUALIZACION ", "ELIMINACION "};
    try {
        if (mysql_query(conn, sql)) {
            wxMessageBox("[EXCEPTION en " + opr[i] + "] " +
              (wxString)mysql_error(conn));
            return "-1";
        }
        else {
         if (i > 0)
          wxMessageBox(opr[i] + " EXITOSA, REVISAR LOS DATOS "
            + "EN LA BASE DE DATOS " + DataBase);
         else
           res = mysql_use_result(conn);
         return "";
        }
    }
    catch (wxString e){
        wxMessageBox("[EXCEPTION EN " + opr[i], "] " + e);
        return "-1";
    }
}

