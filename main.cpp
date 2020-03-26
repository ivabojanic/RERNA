#include <iostream>

using namespace std;

enum stanje {ukljucena,iskljucena,pokvarena};

class Rerna
{
private:
    stanje stanjeRerne;
    int temperatura;
public:
    Rerna(){stanjeRerne = iskljucena; temperatura = 0;}
    string getStanje()const
    {
        if(stanjeRerne == ukljucena)
        {
            return "ukljucena";
        }else if(stanjeRerne == iskljucena)
        {
            return "iskljucena";
        }else if (stanjeRerne == pokvarena)
        {
            return "pokvarena";
        }
    }
    int getTemperatura()const
    {
        return temperatura;
    }

    bool ukljuciRerna()
    {
        if(stanjeRerne == iskljucena)
        {
            stanjeRerne= ukljucena;
            temperatura+=20;
            return true;
        }else
            return false;
    }
    bool iskljuciRernu()
    {
        if(stanjeRerne == ukljucena)
        {
            stanjeRerne = iskljucena;
            temperatura = 0;
            return true;
        }else
            return false;
    }
    bool pokvariRernu()
    {
        if(stanjeRerne == ukljucena || stanjeRerne == iskljucena)
        {
            stanjeRerne = pokvarena;
            temperatura = 0;
            return true;
        }else
            return false;
    }
    bool popraviRernu()
    {
        if(stanjeRerne == pokvarena)
        {
            stanjeRerne = iskljucena;
            temperatura = 0;
            return true;
        }else
            return false;
    }

    bool povecajTemperaturu()
    {
        if(stanjeRerne == ukljucena && temperatura<=220)
        {
            temperatura=+20;
            return true;
        }else
            return false;
    }
    bool smanjiTemperaturu()
    {
        if(stanjeRerne == ukljucena && temperatura>220)
        {
            temperatura=-20;
            return true;
        }else
            return false;
    }

    void ispisRerne(const Rerna &r)
    {
        cout<<"%s",r.getStanje();
        cout<<"%i",r.getTemperatura();
    }

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
