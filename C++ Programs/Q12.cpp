/*2.	Write a program to create a Class Matrix with data members row and columns along with the suitable member functions to read and display the matrix.
Define a function, + and - that overloads its operation by performing the operations matrix addition and subtraction.  
Implement using the objects. */

#include <iostream>
using namespace std;

class MATRIX{
    protected:
        int Rows;
        int Columns;
        int **Matrix;
    public:
        MATRIX(int Rows,int Columns){
            this->Rows = Rows;
            this->Columns = Columns;
            Matrix = new int *[Rows];
            for (int i = 0;i<Rows;i++){
                Matrix[i] = new int [Columns];
            }
        }
        void ReadMatrix(){
            for (int i = 0 ; i < Rows; i++){
                for (int  j = 0; j < Columns; j++){
                    cout<<"Element at Position ("<<i<<","<<j<<") :";
                    cin>>Matrix[i][j];
                }
            }
        }
        void DisplayMatrix(){
            for (int i = 0 ; i < Rows; i++){
                for (int  j = 0; j < Columns; j++){
                    cout<<Matrix[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        friend MATRIX operator +(MATRIX M1,MATRIX M2);
        friend MATRIX operator -(MATRIX M1,MATRIX M2);
};

MATRIX operator +(MATRIX M1,MATRIX M2){
    if ((M1.Rows = M2.Rows)&&(M1.Columns == M2.Columns)){
        MATRIX M3(M1.Rows,M1.Columns);
        for (int i = 0;i<M3.Rows;i++){
            for (int j = 0;j<M3.Columns;j++){
                M3.Matrix[i][j] = M1.Matrix[i][j] + M2.Matrix[i][j];
            }
        }
        return M3;
    }
    else{
        cout<<"Addition is Not Possible"<<endl;
        return MATRIX(0,0);
    }
}
MATRIX operator -(MATRIX M1,MATRIX M2){
    if ((M1.Rows = M2.Rows)&&(M1.Columns == M2.Columns)){
        MATRIX M3(M1.Rows,M1.Columns);
        for (int i = 0;i<M3.Rows;i++){
            for (int j = 0;j<M3.Columns;j++){
                M3.Matrix[i][j] = M1.Matrix[i][j] - M2.Matrix[i][j];
            }
        }
        return M3;
    }
    else{
        cout<<"Substraction is Not Possible"<<endl;
        return MATRIX(0,0);
    }
};

int main(){
    MATRIX A(3,4);
    cout <<"Read Matrix A Element :"<<endl;
    A.ReadMatrix();
    cout <<endl<<"Matrix A :"<<endl;
    A.DisplayMatrix();

    MATRIX B(3,4);
    cout <<"Read Matrix B Element :"<<endl;
    B.ReadMatrix();
    cout <<endl<<"Matrix B :"<<endl;
    A.DisplayMatrix();

    MATRIX C = A + B;
    cout <<endl<<"Matrix C = A + B :"<<endl;
    C.DisplayMatrix();

    MATRIX D = A - B;
    cout <<endl<<"Matrix D = A - B :"<<endl;
    D.DisplayMatrix();

    return 0;
}