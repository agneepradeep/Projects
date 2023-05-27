/*8) A library has multiple books and each book has a title, author, and ISBN number.
The library wants to keep track of the books that are currently available and the books that have been borrowed by the members.
Design a program using OOPs and class and object to implement this scenario with friend function.*/

#include <iostream>
#include <string>
using namespace std;
class Library {
    private:
        struct Books {
            string Title;
            string Author;
            int ISBN;
            int Status;
        }B[10];
        int i;
    public:
        Library(){
            i = 0;
            B[0].Status = 0;
            B[1].Status = 0;
            B[2].Status = 0;
            B[3].Status = 0;
            B[4].Status = 0;
            B[5].Status = 0;
            B[6].Status = 0;
            B[7].Status = 0;
            B[8].Status = 0;
            B[9].Status = 0;
        }
        void GetBookInfo(string Title,string Author,int ISBN,int Status){
            if (i == 10){
                cout<<"Book Overflow"<<endl;
            }
            else{
                B[i].Title = Title;
                B[i].Author = Author;
                B[i].ISBN = ISBN;
                B[i].Status = Status;
                i = i+1;
            }
        };
        friend void AvailiableBooks(Library){};
        friend void BorrowedBooks(Library){

        };
        void PrintBookInfo(string Name){
            int l = 0;
            cout<<endl<<"Book Details :"<<endl;
            for (l = 0;l<i+1;l++){
                if (B[l].Title == Name){
                    cout<<"Book Title :"<<B[l].Title<<endl;
                    cout<<"Book Author :"<<B[l].Author<<endl;
                    cout<<"Book ISBN :"<<B[l].ISBN<<endl;
                    if (B[l].Status == 0){
                        cout<<"Book Status :Already Borrowed"<<endl;
                    }
                    else{
                        cout<<"Book Status :Availiable"<<endl;
                    }
                }
            }
        };
};

void AvailiableBooks(Library L){
    int j = 0;
    cout<<endl<<"Available Books :"<<endl;
    for (j = 0;j<L.i;j++){
        if (L.B[j].Status == 1){
            cout<<"Book Title :"<<L.B[j].Title<<endl;
        }
    }
}

void BorrowedBooks(Library L){
    int k = 0;
    cout<<endl<<"Borrowed Books:"<<endl;
    for (k = 0;k<L.i;k++){
        if (L.B[k].Status == 0){
            cout<<"Book Title :"<<L.B[k].Title<<endl;
        }
    }
}
int main(){
    Library L;
    L.GetBookInfo("Let Us C","Yansvant Khanetar",1234,1);
    L.GetBookInfo("Data Structure & Algorithm","Sartaz Sahani",1987,0);
    L.GetBookInfo("Atomic Habits","Agneepradeep Verma",1679,1);
    L.GetBookInfo("Conflict Management","Alexander Sandrico",1458,0);
    AvailiableBooks(L);
    BorrowedBooks(L);
    L.PrintBookInfo("Let Us C");
    return 0;
}