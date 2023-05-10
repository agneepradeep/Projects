/*Develop a C++ application for a new ice cream vendor called LeCream. The management of LeCream has
decided that they are going to sell their ice cream in 7 different flavours namely chocolate, vanilla
strawberry, mango, tutti fruit, almond crunch and coffee. Carefully design the application by observing
the following rules.
1. LeCream is charging Rs 100 for two scoopes and Rs 150 for three scoops. Hence you will need a function
to determine the number of scoops and based on that the price. if a user enters more than three scoops
your program should display invalid input and it should exit.

2.LeCream allows its customers to purchase a vanilla wafer with their ice cream. if the customer wants
to purchase the wafer will have to pay an additional Rs 10. This amount should be added to the total
amount payable by the user.

3. for others flavours no additional charge is required other than chocolate flavor. if the customer asks
for chocolate flavour then have to pay an additional amount i.e. Rs 120 for two scoops and Rs 180 for 3
scoops. Design a function that will be called if the customer chooses flavoured ice cream.

4. The program should show a menu that asks the customer for their requirement and then displays the final
payable amount with full details about the flavour, numnber of scoops and wafer. Design the above
application using sound OOP concept for 'N' customers.
*/

#include <iostream>
using namespace std;
class LeCream{
    protected:
        int Choice;
        int Bill = 0;
        int Scoops;
        int Wafer;
    public:
        void menu(){
            cout<<"------ICE CREAM FLAVOURS AVAILABLE------"<<endl;
            cout<<"1. **Chocolate"<<endl;
            cout<<"2. Vanila"<<endl;
            cout<<"3. Stawberry"<<endl;
            cout<<"4. Mango"<<endl;
            cout<<"5. Tutti Fruit"<<endl;
            cout<<"6. Almond Crunch"<<endl;
            cout<<"7. Coffee"<<endl;

            cout<<endl<<"Choice (integer) :";
            cin>>Choice;

            switch(Choice){
                case 1:
                    cout<<"Chocolate Flavoured Selected"<<endl;
                    break;
                case 2:
                    cout<<"Vanilla Flavoured Selected"<<endl;
                    break;
                case 3:
                    cout<<"Stawberry Flavoured Selected"<<endl;
                    break;
                case 4:
                    cout<<"Mango Flavoured Selected"<<endl;
                    break;
                case 5:
                    cout<<"Tutti Fruit Flavoured Selected"<<endl;
                    break;
                case 6:
                    cout<<"Almond Crunch Flavoured Selected"<<endl;
                    break;
                case 7:
                    cout<<"Coffee Flavoured Selected"<<endl;
                    break;
            }
            cout<<endl<<"No of Scoops :";
            cin>>Scoops;
            if (Scoops > 3){
                return;
            }
            cout<<"Need Vanila Wafers (true (1) /false (0)) :";
            cin>>Wafer;
        }
        void Print_Bill(){
            if (Choice == 1){
                if (Scoops == 2){
                    Bill = Bill + 120;
                }
                else if (Scoops == 3){
                    Bill = Bill + 180;
                }
            }
            else{
                if (Scoops == 2){
                    Bill = Bill + 100;
                }
                else if (Scoops == 3){
                    Bill = Bill + 150;
                }
            }
            if (Wafer == 1){
                Bill = Bill + 10;
            }
        switch (Choice){
            case 1:
                cout<<endl<<"Chocolate Flavored --> ";
                switch (Scoops){
                case 2:
                    cout<<" (2 - Scoops) --> 120/-"<<endl;
                    break;
                case 3:
                    cout<<" (3 - Scoops) --> 180/-"<<endl;
                    break;
                }
                break;
            default:
                switch (Choice){
                    case 2:
                        cout<<endl<<"Vanila Flavored --> ";
                        switch (Scoops){
                            case 2:
                                cout<<" (2 - Scoops) --> 100/-"<<endl;
                                break;
                            case 3:
                                cout<<" (3 - Scoops) --> 150/-"<<endl;
                                break;
                        }
                        break;
                    case 3:
                        cout<<endl<<"Stawberry Flavored --> ";
                        switch (Scoops){
                            case 2:
                                cout<<" (2 - Scoops) --> 100/-"<<endl;
                                break;
                            case 3:
                                cout<<" (3 - Scoops) --> 150/-"<<endl;
                                break;
                        }
                        break;
                    case 4:
                        cout<<endl<<"Mango Flavored --> ";
                        switch (Scoops){
                            case 2:
                                cout<<" (2 - Scoops) --> 100/-"<<endl;
                                break;
                            case 3:
                                cout<<" (3 - Scoops) --> 150/-"<<endl;
                                break;
                        }
                        break;
                    case 5:
                        cout<<endl<<"Tutti Fruit Flavored --> ";
                        switch (Scoops){
                            case 2:
                                cout<<" (2 - Scoops) --> 100/-"<<endl;
                                break;
                            case 3:
                                cout<<" (3 - Scoops) --> 150/-"<<endl;
                                break;
                        }
                        break;
                    case 6:
                        cout<<endl<<"Almond Crunch Flavored --> ";
                        switch (Scoops){
                            case 2:
                                cout<<" (2 - Scoops) --> 100/-"<<endl;
                                break;
                            case 3:
                                cout<<" (3 - Scoops) --> 150/-"<<endl;
                                break;
                        }
                        break;
                    case 7:
                        cout<<endl<<"Coffee Flavored --> ";
                        switch (Scoops){
                            case 2:
                                cout<<" (2 - Scoops) --> 100/-"<<endl;
                                break;
                            case 3:
                                cout<<" (3 - Scoops) --> 150/-"<<endl;
                                break;
                        }
                        break;
                }
                break;
        }
        if (Wafer == 1){
            cout<<"Wafer -- 10/-"<<endl;
        }
        cout<<"Final Bill :"<<Bill<<endl;
        }
        ~LeCream(){
            cout<<"Thanks for Purchasing, Please Come Again"<<endl;
        }
};
int main(){
    LeCream L;
    L.menu();
    L.Print_Bill();
    return 0;
}