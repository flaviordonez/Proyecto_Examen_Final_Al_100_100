//Clase BDComun.h
#ifndef BDCOMUN_H
#define BDCOMUN_H
#include<mysql.h>
#include<sstream>
#include <wx/msgdlg.h>
#include <wx/wx.h>

class BDComun
{
    public:
        BDComun(const char *db, const char *us, const char *pw);
        virtual ~BDComun();
        void conectar();
        void cerrar();
        MYSQL_ROW getRow() {return row; }
        bool consultar();
        wxString ejecutarSQL(const char *, int);

    protected:
        const char * HostName;
        const char * DataBase;
        const char * UserName;
        const char * Password;
        const char * Socket;
        const int Port = 3306;
        MYSQL *conn;
        MYSQL_RES *res;
        MYSQL_ROW row;

    private:
};

#endif // BDCOMUN_H
