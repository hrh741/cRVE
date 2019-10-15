#include "GmshIO.h"

int GmshIO::GetNodesNumViaElmtType(int elmttype) const
{
    switch(elmttype)
    {
        case 1:
            // 2-node line
            return 2;
        case 2:
            // 3-node triangle
            return 3;
        case 3:
            // 4-node quadrangle
            return 4;
        case 4:
            // 4-node tetrahedron
            return 4;
        case 5:
            // 8-node hexahedron
            return 8;
        case 6:
            // 6-node prism
            return 6;
        case 7:
            // 5-node pyramid
            return 7;
        case 8:
            //3-node second order line
            return 3;
        case 9:
            // 6-node second order triangle
            return 6;
        case 10:
            // 9-node second order quadrangle
            return 9;
        case 11:
            // 10-node second order tetrahedron
            return 10;
        case 12:
            // 27-node second order hexahedron
            return 27;
        case 13:
            // 18-node second order prism
            return 18;
        case 14:
            // 14-node second order pyramid
            return 14;
        case 15:
            // 1-node point
            return 1;
        case 16:
            // 8-node second order quadrangle
            return 8;
        case 17:
            // 20-node second order hexahedron
            return 20;
        case 18:
            // 15-node second order prism
            return 15;
        case 19:
            // 13-node second order pyramid
            return 13;
        case 20:
            // 9-node third order incomplete triangle
            return 9;
        case 21:
            // 10-node third order triangle
            return 10;
        case 22:
            // 12-node fourth order incomplete triangle
            return 12;
        case 23:
            // 15-node fourth order triangle
            return 15;
        case 24:
            // 15-node fifth order incomplete triangle
            return 15;
        case 25:
            // 21-node fifth order complete triangle
            return 21;
        case 26:
            // 4-node third order edge
            return 4;
        case 27:
            // 5-node fourth order edge
            return 5;
        case 28:
            // 6-node fifth order edge
            return 6;
        case 29:
            // 20-node third order tetrahedron
            return 20;
        case 30:
            // 35-node fourth order tetrahedron
            return 35;
        case 31:
            // 56-node fifth order tetrahedron
            return 56;
        case 92:
            // 64-node third order hexahedron
            return 64;
        case 93:
            // 125-node fourth order hexahedron
            return 125;
        default:
            return -1;

    }
}
//*********************************************************
int GmshIO::GetSurfaceElmtTypeViaBulkElmtType(int elmttype) const{
    switch(elmttype)
    {
        case 1:
            // 2-node line
            return -1;
        case 2:
            // 3-node triangle
            return -1;
        case 3:
            // 4-node quadrangle
            return -1;
        case 4:
            // 4-node tetrahedron
            return 2;
        case 5:
            // 8-node hexahedron
            return 3;
        case 6:
            // 6-node prism
            return -1;
        case 7:
            // 5-node pyramid
            return -1;
        case 8:
            //3-node second order line
            return -1;
        case 9:
            // 6-node second order triangle
            return -1;
        case 10:
            // 9-node second order quadrangle
            return -1;
        case 11:
            // 10-node second order tetrahedron
            return 9;
        case 12:
            // 27-node second order hexahedron
            return 10;
        case 13:
            // 18-node second order prism
            return -1;
        case 14:
            // 14-node second order pyramid
            return -1;
        case 15:
            // 1-node point
            return -1;
        case 16:
            // 8-node second order quadrangle
            return -1;
        case 17:
            // 20-node second order hexahedron
            return 16;
        case 18:
            // 15-node second order prism
            return -1;
        case 19:
            // 13-node second order pyramid
            return -1;
        case 20:
            // 9-node third order incomplete triangle
            return -1;
        case 21:
            // 10-node third order triangle
            return -1;
        case 22:
            // 12-node fourth order incomplete triangle
            return -1;
        case 23:
            // 15-node fourth order triangle
            return -1;
        case 24:
            // 15-node fifth order incomplete triangle
            return -1;
        case 25:
            // 21-node fifth order complete triangle
            return -1;
        case 26:
            // 4-node third order edge
            return -1;
        case 27:
            // 5-node fourth order edge
            return -1;
        case 28:
            // 6-node fifth order edge
            return -1;
        case 29:
            // 20-node third order tetrahedron
            return -1;
        case 30:
            // 35-node fourth order tetrahedron
            return -1;
        case 31:
            // 56-node fifth order tetrahedron
            return -1;
        case 92:
            // 64-node third order hexahedron
            return -1;
        case 93:
            // 125-node fourth order hexahedron
            return -1;
        default:
            return -1;

    }
    return -1;
}
//*********************************************************
int GmshIO::GetElmtDimViaElmtType(int elmttype) const
{
    switch(elmttype)
    {
        case 1:
            // 2-node line
            return 1;
        case 2:
            // 3-node triangle
            return 2;
        case 3:
            // 4-node quadrangle
            return 2;
        case 4:
            // 4-node tetrahedron
            return 3;
        case 5:
            // 8-node hexahedron
            return 3;
        case 6:
            // 6-node prism
            return 3;
        case 7:
            // 5-node pyramid
            return 3;
        case 8:
            //3-node second order line
            return 1;
        case 9:
            // 6-node second order triangle
            return 2;
        case 10:
            // 9-node second order quadrangle
            return 2;
        case 11:
            // 10-node second order tetrahedron
            return 3;
        case 12:
            // 27-node second order hexahedron
            return 3;
        case 13:
            // 18-node second order prism
            return 3;
        case 14:
            // 14-node second order pyramid
            return 3;
        case 15:
            // 1-node point
            return 0;
        case 16:
            // 8-node second order quadrangle
            return 2;
        case 17:
            // 20-node second order hexahedron
            return 3;
        case 18:
            // 15-node second order prism
            return 3;
        case 19:
            // 13-node second order pyramid
            return 3;
        case 20:
            // 9-node third order incomplete triangle
            return 2;
        case 21:
            // 10-node third order triangle
            return 2;
        case 22:
            // 12-node fourth order incomplete triangle
            return 2;
        case 23:
            // 15-node fourth order triangle
            return 2;
        case 24:
            // 15-node fifth order incomplete triangle
            return 2;
        case 25:
            // 21-node fifth order complete triangle
            return 2;
        case 26:
            // 4-node third order edge
            return 1;
        case 27:
            // 5-node fourth order edge
            return 1;
        case 28:
            // 6-node fifth order edge
            return 1;
        case 29:
            // 20-node third order tetrahedron
            return 3;
        case 30:
            // 35-node fourth order tetrahedron
            return 3;
        case 31:
            // 56-node fifth order tetrahedron
            return 3;
        case 92:
            // 64-node third order hexahedron
            return 3;
        case 93:
            // 125-node fourth order hexahedron
            return 3;
        default:
            return -1;

    }
}

//*******************************************************
//*********************************************************
string GmshIO::GetElmtNameViaElmtType(int elmttype) const
{
    switch(elmttype)
    {
        case 1:
            // 2-node line
            return "edge";
        case 2:
            // 3-node triangle
            return "triangle";
        case 3:
            // 4-node quadrangle
            return "quadrangle";
        case 4:
            // 4-node tetrahedron
            return "tetrahedron";
        case 5:
            // 8-node hexahedron
            return "hexahedron";
        case 6:
            // 6-node prism
            return "prism";
        case 7:
            // 5-node pyramid
            return "pyramid";
        case 8:
            //3-node second order line
            return "edge";
        case 9:
            // 6-node second order triangle
            return "triangle";
        case 10:
            // 9-node second order quadrangle
            return "quadrangle";
        case 11:
            // 10-node second order tetrahedron
            return "tetrahedron";
        case 12:
            // 27-node second order hexahedron
            return "hexahedron";
        case 13:
            // 18-node second order prism
            return "prism";
        case 14:
            // 14-node second order pyramid
            return "pyramid";
        case 15:
            // 1-node point
            return "point";
        case 16:
            // 8-node second order quadrangle
            return "quadrangle";
        case 17:
            // 20-node second order hexahedron
            return "hexahedron";
        case 18:
            // 15-node second order prism
            return "prism";
        case 19:
            // 13-node second order pyramid
            return "pyramid";
        case 20:
            // 9-node third order incomplete triangle
            return "triangle";
        case 21:
            // 10-node third order triangle
            return "triangle";
        case 22:
            // 12-node fourth order incomplete triangle
            return "triangle";
        case 23:
            // 15-node fourth order triangle
            return "triangle";
        case 24:
            // 15-node fifth order incomplete triangle
            return "triangle";
        case 25:
            // 21-node fifth order complete triangle
            return "triangle";
        case 26:
            // 4-node third order edge
            return "edge";
        case 27:
            // 5-node fourth order edge
            return "edge";
        case 28:
            // 6-node fifth order edge
            return "edge";
        case 29:
            // 20-node third order tetrahedron
            return "tetrahedron";
        case 30:
            // 35-node fourth order tetrahedron
            return "tetrahedron";
        case 31:
            // 56-node fifth order tetrahedron
            return "tetrahedron";
        case 92:
            // 64-node third order hexahedron
            return "hexahedron";
        case 93:
            // 125-node fourth order hexahedron
            return "hexahedron";
        default:
            return "unknown";

    }
}
//*****************************************
//** get local information
//*****************************************
int GmshIO::GetElmtSurfaceNumsViaElmtType(int elmttype) const{
    switch(elmttype)
    {
        case 1:
            // 2-node line
            return 0;
        case 2:
            // 3-node triangle
            return 0;
        case 3:
            // 4-node quadrangle
            return 0;
        case 4:
            // 4-node tetrahedron
            return 4;
        case 5:
            // 8-node hexahedron
            return 6;
        case 6:
            // 6-node prism
            return 5;
        case 7:
            // 5-node pyramid
            return 5;
        case 8:
            //3-node second order line
            return 0;
        case 9:
            // 6-node second order triangle
            return 0;
        case 10:
            // 9-node second order quadrangle
            return 0;
        case 11:
            // 10-node second order tetrahedron
            return 4;
        case 12:
            // 27-node second order hexahedron
            return 6;
        case 13:
            // 18-node second order prism
            return 6;
        case 14:
            // 14-node second order pyramid
            return 6;
        case 15:
            // 1-node point
            return 0;
        case 16:
            // 8-node second order quadrangle
            return 0;
        case 17:
            // 20-node second order hexahedron
            return 6;
        case 18:
            // 15-node second order prism
            return 5;
        case 19:
            // 13-node second order pyramid
            return 6;
        case 20:
            // 9-node third order incomplete triangle
            return 0;
        case 21:
            // 10-node third order triangle
            return 0;
        case 22:
            // 12-node fourth order incomplete triangle
            return 0;
        case 23:
            // 15-node fourth order triangle
            return 0;
        case 24:
            // 15-node fifth order incomplete triangle
            return 0;
        case 25:
            // 21-node fifth order complete triangle
            return 0;
        case 26:
            // 4-node third order edge
            return 0;
        case 27:
            // 5-node fourth order edge
            return 0;
        case 28:
            // 6-node fifth order edge
            return 0;
        case 29:
            // 20-node third order tetrahedron
            return 4;
        case 30:
            // 35-node fourth order tetrahedron
            return 4;
        case 31:
            // 56-node fifth order tetrahedron
            return 4;
        case 92:
            // 64-node third order hexahedron
            return 6;
        case 93:
            // 125-node fourth order hexahedron
            return 6;
        default:
            return 0;

    }
}
//*************************************
//*** get the conn of surface from a 3D volume element
//*************************************
vector<long int> GmshIO::GetIthElmtJthSurfaceConn(const int &elmttype,const int &e,const int &j)const{
    vector<long int> conn,elConn;
    conn.clear();
    switch(elmttype)
    {
        case 1:
            // 2-node line
            return conn;
        case 2:
            // 3-node triangle
            return conn;
        case 3:
            // 4-node quadrangle
            return conn;
        case 4:
            // 4-node tetrahedron
            elConn=GetIthElmtConn(e);
            conn.resize(3,0);
            if(j==1){
                conn[0]=elConn[0];conn[1]=elConn[2];conn[2]=elConn[1];
            }
            else if(j==2){
                conn[0]=elConn[0];conn[1]=elConn[3];conn[2]=elConn[2];
            }
            else if(j==3){
                conn[0]=elConn[3];conn[1]=elConn[1];conn[2]=elConn[2];
            }
            else if(j==4){
                conn[0]=elConn[0];conn[1]=elConn[1];conn[2]=elConn[3];
            }
            else{
                cout<<"*************************************************************************"<<endl;
                cout<<"*** Error: tet4 only have 4 surfaces!!! surface id out of range!!!    ***"<<endl;
                cout<<"*************************************************************************"<<endl;
                abort();
            }
            return conn;
        case 5:
            // 8-node hexahedron
            elConn=GetIthElmtConn(e);
            conn.resize(4,0);
            if(j==1){
                conn[0]=elConn[0];conn[1]=elConn[4];conn[2]=elConn[7];conn[3]=elConn[3];
            }
            else if(j==2){
                conn[0]=elConn[5];conn[1]=elConn[1];conn[2]=elConn[2];conn[3]=elConn[6];
            }
            else if(j==3){
                conn[0]=elConn[4];conn[1]=elConn[5];conn[2]=elConn[6];conn[3]=elConn[7];
            }
            else if(j==4){
                conn[0]=elConn[0];conn[1]=elConn[3];conn[2]=elConn[2];conn[3]=elConn[1];
            }
            else if(j==5){
                conn[0]=elConn[0];conn[1]=elConn[1];conn[2]=elConn[5];conn[3]=elConn[4];
            }
            else if(j==6){
                conn[0]=elConn[7];conn[1]=elConn[6];conn[2]=elConn[2];conn[3]=elConn[3];
            }
            else{
                cout<<"*************************************************************************"<<endl;
                cout<<"*** Error: hex8 only have 6 surfaces!!! surface id out of range!!!    ***"<<endl;
                cout<<"*************************************************************************"<<endl;
                abort();
            }
            return conn;
        case 6:
            // 6-node prism
            return conn;
        case 7:
            // 5-node pyramid
            return conn;
        case 8:
            //3-node second order line
            return conn;
        case 9:
            // 6-node second order triangle
            return conn;
        case 10:
            // 9-node second order quadrangle
            return conn;
        case 11:
            // 10-node second order tetrahedron
            elConn=GetIthElmtConn(e);
            conn.resize(6,0);
            if(j==1){
                conn[0]=elConn[0];conn[1]=elConn[2];conn[2]=elConn[1];
                conn[3]=elConn[6];conn[4]=elConn[5];conn[5]=elConn[4];
            }
            else if(j==2){
                conn[0]=elConn[0];conn[1]=elConn[3];conn[2]=elConn[2];
                conn[3]=elConn[7];conn[4]=elConn[8];conn[5]=elConn[6];
            }
            else if(j==3){
                conn[0]=elConn[3];conn[1]=elConn[1];conn[2]=elConn[2];
                conn[3]=elConn[9];conn[4]=elConn[5];conn[5]=elConn[8];
            }
            else if(j==4){
                conn[0]=elConn[0];conn[1]=elConn[1];conn[2]=elConn[3];
                conn[3]=elConn[4];conn[4]=elConn[9];conn[5]=elConn[7];
            }
            else{
                cout<<"*************************************************************************"<<endl;
                cout<<"*** Error: tet10 only have 4 surfaces!!! surface id out of range!!!   ***"<<endl;
                cout<<"*************************************************************************"<<endl;
                abort();
            }
            return conn;
        case 12:
            // 27-node second order hexahedron
            return conn;
        case 13:
            // 18-node second order prism
            return conn;
        case 14:
            // 14-node second order pyramid
            return conn;
        case 15:
            // 1-node point
            return conn;
        case 16:
            // 8-node second order quadrangle
            return conn;
        case 17:
            // 20-node second order hexahedron
            return conn;
        case 18:
            // 15-node second order prism
            return conn;
        case 19:
            // 13-node second order pyramid
            return conn;
        case 20:
            // 9-node third order incomplete triangle
            return conn;
        case 21:
            // 10-node third order triangle
            return conn;
        case 22:
            // 12-node fourth order incomplete triangle
            return conn;
        case 23:
            // 15-node fourth order triangle
            return conn;
        case 24:
            // 15-node fifth order incomplete triangle
            return conn;
        case 25:
            // 21-node fifth order complete triangle
            return conn;
        case 26:
            // 4-node third order edge
            return conn;
        case 27:
            // 5-node fourth order edge
            return conn;
        case 28:
            // 6-node fifth order edge
            return conn;
        case 29:
            // 20-node third order tetrahedron
            return conn;
        case 30:
            // 35-node fourth order tetrahedron
            return conn;
        case 31:
            // 56-node fifth order tetrahedron
            return conn;
        case 92:
            // 64-node third order hexahedron
            return conn;
        case 93:
            // 125-node fourth order hexahedron
            return conn;
        default:
            return conn;

    }
}
