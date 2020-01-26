#ifndef CRVE_GMSHIO_H
#define CRVE_GMSHIO_H

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string> 
#include <sstream>
#include <fstream>
#include <vector> 
#include <set>
#include <algorithm>
#include <chrono>
using namespace std;


class GmshIO
{
public:
    GmshIO();
    void Run();
    bool Init(int args,char *argv[]);
    bool ReadMeshFile();
    void SetTolerence(double tol=1.0e-3) {_tol=tol;}
    void SetMeshFileName(string filename) {_GeoFileName=filename;_NewGeoFileName=filename;}
    void LableCubic();
    void SaveLabledMesh();

    void Print() const;

public:
    inline long int GetNodesNum() const {return _nNodes;}
    inline long int GetElmtsNum() const {return _nElmts;}
    inline int GetPhyGroupsNum() const {return _nPhyGroupNum;}

    inline double GetXmax() const {return _Xmax;}
    inline double GetXmin() const {return _Xmin;}
    inline double GetYmax() const {return _Ymax;}
    inline double GetYmin() const {return _Ymin;}
    inline double GetZmax() const {return _Zmax;}
    inline double GetZmin() const {return _Zmin;}
    
    inline double GetIthNodeJthCoord(long int i,int j) const {return _NodeCoords[(i-1)*3+j-1];}

    inline vector<long int> GetIthElmtConn(long int e) const
    {
        vector<long int> conn(_ElmtConn[e-1][0],0);
        for(int i=0;i<_ElmtConn[e-1][0];i++) conn[i]=_ElmtConn[e-1][i+1];
        return conn;
    }


    inline int GetMshUniIDNum() const {return int(_MeshUniPhyID.size());}    

private:
    // Gmsh file related information functions
    int GetNodesNumViaElmtType(int elmttype) const;
    int GetElmtDimViaElmtType(int elmttype) const;
    int GetElmtSurfaceNumsViaElmtType(int elmttype) const;
    int GetSurfaceElmtTypeViaBulkElmtType(int elmttype) const;
    vector<long int> GetIthElmtJthSurfaceConn(const int &elmttype,const int &e,const int &j)const;
    string GetElmtNameViaElmtType(int elmttype) const;

    inline int GetIthElmtType(const int &e)const{
        return _ElmtTypeVec[e-1];
    }

    bool NodesOnSurface(int component,double val,vector<long int> &conn);    

    void PrepareInfoBeforeSave();



private:
    bool _IsPrint=false;
    double _tol=1.0e-6;
    string _GeoFileName,_NewGeoFileName;
    vector<double> _NodeCoords;
    vector<vector<long int>> _ElmtConn;
    long int _nNodes,_nElmts;
    int _nMaxDim,_nMinDim;
    int _nPhyGroupNum;
    double _Xmax,_Xmin,_Ymax,_Ymin,_Zmax,_Zmin;
    double _Cx,_Cy,_Cz;

    int _MatrixPhyID,_ParticlePhyID;

    vector<int> _PhyGroupDimVec;
    vector<pair<int,string>> _PhyGroupArray;
    
    vector<int> _ElmtDimVec,_ElmtTypeVec,_ElmtPhyIDVec,_ElmtGeoIDVec;
    vector<int> _MeshUniPhyID,_MeshUniGeoID;

    vector<vector<long int>> _XminElConn,_XmaxElConn,
                             _YminElConn,_YmaxElConn,
                             _ZminElConn,_ZmaxElconn;
    vector<long int> _XminElmtID,_XmaxElmtID,
                     _YminElmtID,_YmaxElmtID,
                     _ZminElmtID,_ZmaxElmtID;
    vector<int>      _XminElmtPhyID,_XmaxElmtPhyID,
                     _YminElmtPhyID,_YmaxElmtPhyID,
                     _ZminElmtPyhID,_ZMaxElmtPhyID;
    vector<int>      _XminElmtTypeVec,_XmaxElmtTypeVec,
                     _YminElmtTypeVec,_YmaxElmtTypeVec,
                     _ZminElmtTypeVec,_ZmaxElmtTypeVec;
    vector<string>   _XminElmtPhyNameVec,_XmaxElmtPhyNameVec,
                     _YminElmtPhyNameVec,_YmaxElmtPhyNameVec,
                     _ZminElmtPhyNameVec,_ZmaxElmtPhyNameVec;
                    

    vector<long int> _XminNodeIDSet,_XmaxNodeIDSet,
                     _YminNodeIDSet,_YmaxNodeIDSet,
                     _ZminNodeIDSet,_ZmaxNodeIDSet;
    
    vector<int> newphyid,newphydim;
    vector<string> newphyname;

private:
    bool _IsSplitMatrixAndParticle=false;
    bool _IsSplitMatrixOnly=false;
    bool _IsSplitParticleOnly=false;

    chrono::high_resolution_clock::time_point _StartTime,_EndTime;

};

#endif 