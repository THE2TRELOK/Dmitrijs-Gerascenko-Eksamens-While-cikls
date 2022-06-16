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
    cout<<"\n\n4.Pārtrauciet šī koda darbibu, kad saņemat pareizo atbildi vai vairs nav atlicis mēģinājums\nstring answer;\nint tries = 5;\nwhile(_________) {\ncin>> answer;\nif (answer == “the right answer”){\ncout<<“correct”<<endl;\n}\ntries -- ;\n}\n\na. tries>0\nb. 0>tries\nc. tries>=0\nd. tries==answer\n";
    cin>>a4;
    if(a4=="a"||a4=="b"){
        punkti++;
      cout<<"jus pareizi atbildejat uz jautajumu!";
  }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n5.Aizpildiet tukšo vietu ar vajadzīgo rakstzīmi, lai izdrukātu paziņojumu.\na. <\nb. mazāka zīme\nc. lielāka zīme\nd. >\n";
    cin>>a5;
    if(a5=="a"||a5=="b"){
        punkti++;
        cout<<"jus pareizi atbildejat uz jautajumu!";
  }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n6.Cik reizes izvadisies programma ja lietotajs ivadis skaitli 4?\nint i=0;\ncout<<\"ievadi skaitli\";\ncin>>i;\n while(i==4){\ncout<<\"porgramma\";\nbreak;\n}\na. 0 reizes, jo cikls darbojas, līdz i ir vienāda ar 4\nb. 4 reizes\nc. 1 reizi\nd. 1 reizi jo skaitīšana sākas no nulles\n";
    cin>>a6;
    if(a6=="c"||a6=="d"){
        punkti++;
        cout<<"jus pareizi atbildejat uz jautajumu!";
  }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n7.ko izvadis šis kods?\nint skaitlis = 0;\nwhile(skaitlis <=100){\ncout<<skaitlis<<" ";\nskaitlis++;\n}\na. skaitļus no 0 lidz 100\nb. skaitli 100\nc. skaitļus no 0 lidz 99\nd. kopā 101 cipars\n";
    cin>>a7;
    if(a7=="a"||a7=="d"){
        punkti++;
             cout<<"jus pareizi atbildejat uz jautajumu!";
    }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n8.Vai var lietot string tipa mainigo cikla kā skaitītāju?\na. ja\nb. ja tas ir vienāds ar kaut ko\nc. ne\nd. var lietot int mainigo ka skaititaju\n";
    cin>>a8;
    if(a8=="c"||a8=="d"){
        punkti++;
        cout<<"jus pareizi atbildejat uz jautajumu!";
    }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n9.Kurš no šiem variantiem ir labākā struktūra spēles ciklam ar ierobežotu mēģinājumu skaitu?\na. int tries = 3;\n while( tries > 0 ) {\n tries --;\n }\nb.int tries = 3;\n while( 0 < tries ) {\n tries --;\n }\nc.string tries = \"3\";\nwhile( tries == \"3\" ) {\ntries - -;\n}\nd.bool tries = true;\nwhile( tries == false ) {\ntries = true;\n}\n";
    cin>>a9;
    if(a9=="a"||a9=="b"){
        punkti++;
        cout<<"jus pareizi atbildejat uz jautajumu!";
    }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }
    cout<<"\n\n10.ko izvadis ši programma?\nint main() {\nint a=5;\nwhile(a >= 3);\n{\ncout <<(\"labu\n\");\nbreak;\n}\ncout <<(\"dienu\");\nreturn 0;\n}\na. labu dienu\nb. while cikla ir kļuda\nc. tiks bezgalīgi izvadits labu dienu\nd. konsoles logā tiek parādīts kļūdas ziņojums\n";
    cin>>a10;
    if(a10=="b"||a10=="d"){
        punkti++;
        cout<<"jus pareizi atbildejat uz jautajumu!";
    }else{
      cout<<"jus nepareizi atbildejat uz jautajumu!";
  }if(punkti!=10){
    cout<<"\n\nJūsu pareizo atbildu skaits ir - "<<punkti;
    cout<<"\nJūs atbildejat nepareizi uz šiem jautājumiem: \n";

  if(a=="c"||a=="b"){
    cout<<"\n1";
  }
  if(a2=="c"&&a2=="d"){
    cout<<"\n2";
  }
  if(a3=="a"||a3=="d"){
    cout<<"\n3";
  }
  if(a4=="c"||a4=="d"){
    cout<<"\n4";
  }
  if(a5=="c"||a5=="d"){
    cout<<"\n5";
  }
  if(a6=="b"||a6!="a"){
    cout<<"\n6";
  }
  if(a7=="c"||a7=="b"){
    cout<<"\n7";
  }
  if(a8=="b"||a8=="a"){
    cout<<"\n8";
  }
  if(a9=="c"||a9=="d"){
    cout<<"\n9";
  }
  if(a10=="a"||a10!="c"){
    cout<<"\n10";
  }
    }
  else{
    cout<<"Visas atbildes ir pareizas!";
  }
    }
