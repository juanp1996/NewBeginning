//
// Created by juanp on 10/11/2018.
//

#ifndef NEWPROJECT_01_CODIFICA_H
#define NEWPROJECT_01_CODIFICA_H

using namespace std;


class codifica {
    private:

        string Direccion;
        ifstream Dic;
        ifstream Men;
        int CondicionDic = 0;
        int CondicionMen = 0;

    protected:

        char Texto_1[20] , Texto_2[20] , Texto_3_Men[20];
        int Long_1 , Long_2 , Long_3_Men;


    public:

        codifica();
        void Opciones();
        void Error(int);
        void LecturaDic();
        void LecturaMen();
        void ObtencionDic();
        void ObtencionMen();
        void SetDireccion();
        void SetFile(int);
        void Numeracion_Dic ();
        void Numeracion_Men();
    };



#endif //NEWPROJECT_01_CODIFICA_H
