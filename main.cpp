#include <iostream>
using namespace std;
int main() {
    int punkti=0;
    string a,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    cout<<"Jus atverat viktorinu par Ciklu ar priekšnosacījumu programmēšanas valodā C++";
    
     cout<<"\n\n\n1.Kas ir cikls while?\na. Cikls ar priekšnosacījumu\nb. Cikls ar pēcnosacījumu\nc. Cikls ar skaitītāju\nd. cikls kas atkārtoto darbību kopu, līdz tiek izpildīts norādītais nosacījums\n\n";
  cin>>a;
  if(a=="a" || a=="d"){
    punkti++;
      cout<<"jus pareizi atbildejat uz jautajumu!";
  }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n2.cik reizes nostadas cikls? \nint a=1; \nint b=100; \nwhile (a<b) cout<<a<<\" \"<<b<<\"\\n\"; \na=a+2; \nb=b-3;\n\na. cikla nosacījums jau sākumā ir aplams! \nb. 0\nc. 2\nd. 3\n\n";
  cin>>a2;
  if(a2=="a"||a2=="b"){
      punkti++;
      cout<<"jus pareizi atbildejat uz jautajumu!";
  }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n3.ieraksti atbildi tukša vieta lai cikls nostradatu 3 reizes \nint t=0;\nwhile(_________) {\ncout<< “cikls!”;\nt++;\n}\n\na. t==3\nb. t<3 \nc. 3>t \nd. t+3\n";
    cin>>a3;
    if(a3=="b"||a3=="c"){
        punkti++;
        cout<<"jus pareizi atbildejat uz jautajumu!";
  }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"";
}