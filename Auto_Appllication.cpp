#include<iostream>
#define potheri 5
#define estancia 7
#define vandalur 15
#define SRM_University 6
#define guduvacherry 13
#define railway_station 18

using namespace std;

class Auto
{
    double cash {0.0},distance {0.0};

    public:
        double fuel {15.0};
        void auto_called(int destination)
        {
                cash+=(destination*25);
                fuel-=(destination*2/20);
                cout<<"Reached your Destination"<<endl;
                cout<<"Your Travelling cost : "<<destination*25<<endl;
        }

        // int fuel_check(int destination)
        // {
        //     if(fuel<=(destination*2/20))
        //     {
        //         return 0;
        //     }
        //     return 1;
        // }
};

int main()
{
    int choice,check;

    cout<<"\n####### _______ Annamalai Auto Stand _______ #######"<<endl;
    cout<<"Auto travelling Areas : \n1.Potheri.\n2.Estancia.\n3.Vandalur.\n4.SRM_University.\n5.Guduvacherry.\n6.Railway Station.\n"<<endl;
    
    Auto a;
    while(check!=0)
    {
        cout<<"Choose your Destination : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                if(check=[=](int destination) -> int{ if(a.fuel<=(destination*2/20)) return 0; return 1;} (potheri))
                {
                    a.auto_called(potheri);
                    break;
                }
                else
                {
                    cout<<"Sorry, Auto is not Available . . . Need to be Re-Fuel."<<endl;
                    break;
                }
            case 2:
                if(check=[=](int destination) -> int{ if(a.fuel<=(destination*2/20)) return 0; return 1;} (estancia))
                {
                    a.auto_called(estancia);
                    break;
                }
                else
                {
                    cout<<"Sorry, Auto is not Available . . . Need to be Re-Fuel."<<endl;
                    break;
                }
            case 3:
                if(check=[=](int destination) -> int{ if(a.fuel<=(destination*2/20)) return 0; return 1;} (vandalur))
                {
                    a.auto_called(vandalur);
                    break;
                }
                else
                {
                    cout<<"Sorry, Auto is not Available . . . Need to be Re-Fuel."<<endl;
                    break;
                }
            case 4:
                if(check=[=](int destination) -> int{ if(a.fuel<=(destination*2/20)) return 0; return 1;} (SRM_University))
                {
                    a.auto_called(SRM_University);
                    break;
                }
                else
                {
                    cout<<"Sorry, Auto is not Available . . . Need to be Re-Fuel."<<endl;
                    break;
                }
            case 5:
                if(check=[=](int destination) -> int{ if(a.fuel<=(destination*2/20)) return 0; return 1;} (guduvacherry))
                {
                    a.auto_called(guduvacherry);
                    break;
                }
                else
                {
                    cout<<"Sorry, Auto is not Available . . . Need to be Re-Fuel."<<endl;
                    break;
                }
            case 6:
                if(check=[=](int destination) -> int{ if(a.fuel<=(destination*2/20)) return 0; return 1;} (railway_station))
                {
                    a.auto_called(railway_station);
                    break;
                }
                else
                {
                    cout<<"Sorry, Auto is not Available . . . Need to be Re-Fuel."<<endl;
                    break;
                }
            default:
                cout<<"Sorry !, Auto is not Available for your Destination."<<endl;
        }
    }

    return 0;
}