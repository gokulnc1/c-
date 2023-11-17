#include <iostream>
using namespace std;
int purchase=0;
void ask();
void display();

struct custom{
        string items;
        int Quantity;
        int Amount;
}  c[45];

int snacks()
{
    int op;
   cout<<"1.Biscuits\n2.Chocos\n3.Chips\n";
   cin>>op;
    switch(op)
{
    case 1:{
        int opp;
        cout<<"Choose it\n1.Dark Fantasy-30\n2.Parle-G-5\n3.Milkbikis-10\n";
        cin>>opp;
        switch(opp)
        {
        case 1:
            {
            c[1].items="Dark Fantasy";
            int countt;
            int df=30;
            cout<<"Enter the count:\n";
            cin>>countt;
            c[1].Quantity=countt;
            countt=countt*df;
            c[1].Amount=countt;
            purchase+=countt;
            ask();
            break;
            }
        case 2:{
            c[2].items="Parle-G";
            int cg;
            int pg=5;
            cout<<"Enter the count:\n";
            cin>>cg;
            c[2].Quantity=cg;
            cg=cg*pg;
            c[2].Amount=cg;
            purchase+=cg;
            ask();
            break;
            }
        case 3:
            {
             c[3].items="Milkbikis";
            int mil;
            int milk=10;
            cout<<"Enter the count:\n";
            cin>>mil;
            c[3].Quantity=mil;
            mil=mil*milk;
            c[3].Amount=mil;
            purchase+=mil;
            ask();
            break;

        }
        }
     break;
}


    case 2:{
        int choc;
        cout<<"Choose your chocolate\n1.Dairy milk-50\n2.Milky bar-10\n3.Vicks-1\n";
        cin>>choc;
        switch(choc){

        case 1:
            {
            c[4].items="Dairy Milk";
            int da;
            int dm=50;
            cout<<"Enter the count:\n";
            cin>>da;
            c[4].Quantity=da;
            da=da*dm;
            c[4].Amount=da;
            purchase+=da;
            ask();
            break;
            }
        case 2:
            {
            c[5].items="Milky bar";
            int di;
            int mb=10;
            cout<<"Enter the count:\n";
            cin>>di;
            c[5].Quantity=di;
            di=di*mb;
            c[5].Amount=di;
            purchase+=di;
            ask();
            break;
            }

        case 3:
            {
             c[6].items="Vicks";
            int de;
            int vic=1;
            cout<<"Enter the count:\n";
            cin>>de;
            c[6].Quantity=de;
            de=de*vic;
            c[6].Amount=de;
            purchase+=de;
            ask();
            break;
        }
    }
    break;
}



      case 3:{
        int chip;
        cout<<"Choose your chips\n1.Lays-10\n2.Bingo-15\n3.parle-20\n";
        cin>>chip;
        switch(chip){

        case 1:
            {
             c[7].items="Lays";
            int la;
            int lay=50;
            cout<<"Enter the count:\n";
            cin>>la;
            c[7].Quantity=la;
            la=la*lay;
            c[7].Amount=la;
            purchase+=la;
            ask();
            break;
            }
        case 2:
            {
            c[8].items="Bingo";
            int bin;
            int go=10;
            cout<<"Enter the count:\n";
            cin>>bin;
            c[8].Quantity=bin;
            bin=bin*go;
            c[8].Amount=bin;
            purchase+=bin;
            ask();
            break;
            }

        case 3:
            {
            c[9].items="Parle";
            int par;
            int le=1;
            cout<<"Enter the count:\n";
            cin>>par;
            c[9].Quantity=par;
            par=par*le;
            c[9].Amount=par;
            purchase+=par;
            ask();
            break;
        }
    }
    break;
}
        }
}


int stationary()
{
    int stat;
   cout<<"1.Note book\n2.Pencil\n3.Eraser\n";
   cin>>stat;
    switch(stat){

    case 1:{
        int st;
        cout<<"Choose it\n1.classmate-80\n2.Rjnotes-30\n3.Ncnotes-50\n";
        cin>>st;
        switch(st)
        {
        case 1:
            {
             c[10].items="Classmate";
            int s;
            int cm=80;
            cout<<"Enter the count:\n";
            cin>>s;
            c[10].Quantity=s;
            s=s*cm;
            c[10].Amount=s;
            purchase+=s;
            ask();
            break;
            }


    case 2:
            {
             c[11].items="Rjnotes";
            int r;
            int rj=30;
            cout<<"Enter the count:\n";
            cin>>r;
            c[11].Quantity=r;
            r=r*rj;
            c[11].Amount=r;
            purchase+=r;
            ask();
            break;
            }
    case 3:
            {
             c[12].items="Ncnotes";
            int n;
            int nc=50;
            cout<<"Enter the count:\n";
            cin>>n;
            c[12].Quantity=n;
            n=n*nc;
            c[12].Amount=n;
            purchase+=n;
            ask();
            break;
            }

}
}

     case 2:{
         int pen;
        cout<<"Choose it\n1.Apsara-10\n2.Nataraja-5\n3.Hp-15\n";
        cin>>pen;
        switch(pen)
        {
             case 1:
            {c[13].items="Apsara";
            int a;
            int ap=10;
            cout<<"Enter the count:\n";
            cin>>a;
            c[13].Quantity=a;
            a=a*ap;
            c[13].Amount=a;
            purchase+=a;
            ask();
            break;
            }
             case 2:
            {
            c[14].items="Nataraja";
            int n;
            int nat=5;
            cout<<"Enter the count:\n";
            cin>>n;
            c[14].Quantity=n;
            n=n*nat;
            c[14].Amount=n;
            purchase+=n;
            ask();
            break;
            }
             case 3:
            {
            c[15].items="Hp";
            int h;
            int hp=15;
            cout<<"Enter the count:\n";
            cin>>h;
            c[15].Quantity=h;
            h=h*hp;
            c[15].Amount=h;
            purchase+=h;
            ask();
            break;
            }
        }

     }
          case 3:{
         int era;
        cout<<"Choose it\n1.Apsara-5\n2.Nataraja-2\n3.Hp-10\n";
        cin>>era;
        switch(era)
         {
             case 1:
            {
             c[16].items="Apsara";
            int aps;
            int apa=5;
            cout<<"Enter the count:\n";
            cin>>aps;
            c[16].Quantity=aps;
            aps=aps*apa;
            c[16].Amount=aps;
            purchase+=aps;
            ask();
            break;
            }
             {
             case 2:
            {
             c[17].items="Nataraj";
            int nata;
            int na=2;
            cout<<"Enter the count:\n";
            cin>>nata;
            c[17].Quantity=nata;
            nata=nata*na;
            c[17].Amount=nata;
            purchase+=nata;
            ask();
            break;
            }
             {
             case 3:
            {
             c[18].items="Hp";
            int ha;
            int pa=10;
            cout<<"Enter the count:\n";
            cin>>ha;
            c[18].Quantity=ha;
            ha=ha*pa;
            c[18].Amount=ha;
            purchase+=ha;
            ask();
            break;
            }
     }
}
}
}
}
}
int cosmetics()
{
    int cos;
   cout<<"1.Powder\n2.Perfume\n3.Shampoo\n";
   cin>>cos;
    switch(cos){
     case 1:{
        int po;
        cout<<"Choose it\n1.Gokul santol-100\n2.Yarley-120\n3.ponds-80\n";
        cin>>po;
        switch(po){

        case 1:
            {
             c[19].items="Powder";
            int goku;
            int gok=100;
            cout<<"Enter the count:\n";
            cin>>goku;
            c[19].Quantity=goku;
            goku=goku*gok;
            c[19].Amount=goku;
            purchase+=goku;
            ask();
            break;
            }


    case 2:
            {
            c[20].items="Yarley";
            int yar;
            int ya=120;
            cout<<"Enter the count:\n";
            cin>>yar;
            c[20].Quantity=yar;
            yar=yar*ya;
            c[20].Amount=yar;
            purchase+=yar;
            ask();
            break;
            }
    case 3:
            {
             c[21].items="Ponds";
            int pon;
            int po=80;
            cout<<"Enter the count:\n";
            cin>>pon;
            c[21].Quantity=pon;
            pon=pon*po;
            c[21].Amount=pon;
            purchase+=pon;
            ask();
            break;
            }

}}

     case 2:{
        int per;
        cout<<"Choose it\n1.Fog-100\n2.Axe-220\n3.Park-180\n";
        cin>>per;
        switch(per){

        case 1:
            {
            c[22].items="Fog";
            int fog;
            int fo=100;
            cout<<"Enter the count:\n";
            cin>>fog;
            c[22].Quantity=fog;
            fog=fog*fo;
            c[22].Amount=fog;
            purchase+=fog;
            ask();
            break;
            }


    case 2:
            {
            c[23].items="Axe";
            int axe;
            int ax=220;
            cout<<"Enter the count:\n";
            cin>>axe;
            c[23].Quantity=axe;
            axe=axe*ax;
            c[23].Amount=axe;
            purchase+=axe;
            ask();
            break;
            }
    case 3:
            {
            c[24].items="Ponds";
            int pon;
            int po=180;
            cout<<"Enter the count:\n";
            cin>>pon;
            c[24].Quantity=pon;
            pon=pon*po;
            c[24].Amount=pon;
            purchase+=pon;
            ask();
            break;
            }

}}

     case 3:{
        int sham;
        cout<<"Choose it\n1.All clear-10\n2.clinic plus-12\n3.head and shoulders-15\n";
        cin>>sham;
        switch(sham){

        case 1:
            {
            c[25].items="All clear";
            int all;
            int clea=10;
            cout<<"Enter the count:\n";
            cin>>all;
            c[25].Quantity=all;
            all=all*clea;
            c[25].Amount=all;
            purchase+=all;
            ask();
            break;
            }


    case 2:
            {
             c[26].items="Clinic plus";
            int clin;
            int plu=12;
            cout<<"Enter the count:\n";
            cin>>clin;
            c[26].Quantity=clin;
            clin=clin*plu;
            c[26].Amount=clin;
            purchase+=clin;
            ask();
            break;
            }
    case 3:
            {
             c[27].items="Head and shoulders";
            int head;
            int sho=15;
            cout<<"Enter the count:\n";
            cin>>head;
            c[27].Quantity=head;
            head=head*sho;
            c[27].Amount=head;
            purchase+=head;
            ask();
            break;
            }
}
break;
}
}
}
int groceries()
{
    int gro;
   cout<<"1.Fruits\n2.Vegetables\n3.Dairy\n";
   cin>>gro;
    switch(gro){
     case 1:{
        int fru;
        cout<<"Choose it\n1.Apple(1kg)-100\n2.Orange(1kg)-80\n3.Banana-10\n";
        cin>>fru;
        switch(fru){

        case 1:
            {
            c[28].items="Apple";
            int app;
            int aple=100;
            cout<<"Enter the count:\n";
            cin>>app;
            c[28].Quantity=app;
            app=app*aple;
            c[28].Amount=app;
            purchase+=app;
            ask();
            break;
            }


    case 2:
            {
             c[29].items="Orange";
            int orc;
            int org=80;
            cout<<"Enter the count:\n";
            cin>>orc;
            c[29].Quantity=orc;
            orc=orc*org;
            c[29].Amount=orc;
            purchase+=orc;
            ask();
            break;
            }
    case 3:
            {
            c[30].items="Banana";
            int bana;
            int ban=80;
            cout<<"Enter the count:\n";
            cin>>bana;
            c[30].Quantity=bana;
            bana=bana*ban;
            c[30].Amount=bana;
            purchase+=bana;
            ask();
            break;
            }

}}

     case 2:{
        int veg;
        cout<<"Choose it\n1.Carrot-50\n2.Beetroot-20\n3.Beans-10\n";
        cin>>veg;
        switch(veg){

        case 1:
            {
             c[31].items="Carrot";
            int car;
            int ca=50;
            cout<<"Enter the count:\n";
            cin>>car;
            c[31].Quantity=car;
            car=car*ca;
            c[31].Amount=car;
            purchase+=car;
            ask();
            break;
            }


        case 2:
            {
            c[32].items="Beetroot";
            int beet;
            int bee=20;
            cout<<"Enter the count:\n";
            cin>>beet;
            c[32].Quantity=beet;
            beet=beet*bee;
            c[32].Amount=beet;
            purchase+=beet;
            ask();
            break;
            }
         case 3:
            {
            c[33].items="Beans";
            int bea;
            int be=10;
            cout<<"Enter the count:\n";
            cin>>bea;
            c[33].Quantity=bea;
            bea=bea*be;
            c[33].Amount=bea;
            purchase+=bea;
            ask();
            break;
            }

}}

     case 3:{
        int dar;
        cout<<"Choose it\n1.Milk(1-litre)-40\n2.Curd(1-litre)-30\n3.Eggs-5\n";
        cin>>dar;
        switch(dar){

        case 1:
            {
             c[34].items="Milk";
            int m;
            int mi=40;
            cout<<"Enter the count:\n";
            cin>>m;
            c[34].Quantity=m;
            m=m*mi;
            c[34].Amount=m;
            purchase+=mi;
            ask();
            break;
            }


    case 2:
            {
             c[35].items="Curd";
            int cur;
            int cu=30;
            cout<<"Enter the count:\n";
            cin>>cur;
            c[35].Quantity=cur;
            cur=cur*cu;
            c[35].Amount=cur;
            purchase+=cur;
            ask();
            break;
            }
    case 3:
            {
             c[36].items="Eggs";
            int e;
            int eg=5;
            cout<<"Enter the count:\n";
            cin>>e;
            c[36].Quantity=e;
            e=e*eg;
            c[36].Amount=e;
            purchase+=e;
            ask();
            break;
            }
}
break;
}
}
}

int Others()
{
    int ot;
   cout<<"1.Icecreams\n2.Beverages\n3.Toys\n";
   cin>>ot;
    switch(ot){
     case 1:{
        int ice;
        cout<<"Choose it\n1.cone-50\n2.chocobar-20\n3.cupice-10\n";
        cin>>ice;
        switch(ice){

        case 1:
            {
             c[37].items="Icecreams";
            int cone;
            int co=50;
            cout<<"Enter the count:\n";
            cin>>cone;
            c[37].Quantity=cone;
            cone=cone*co;
            c[38].Amount=cone;
            purchase+=cone;
            ask();
            break;
            }


    case 2:
            {
             c[38].items="Chocobar";
            int choc;
            int choco=20;
            cout<<"Enter the count:\n";
            cin>>choc;
            c[38].Quantity=choc;
            choc=choc*choco;
            c[38].Amount=choc;
            purchase+=choc;
            ask();
            break;
            }
    case 3:
            {
             c[39].items="Cup ice";
            int cup;
            int i=80;
            cout<<"Enter the count:\n";
            cin>>cup;
            c[39].Quantity=cup;
            cup=cup*i;
            c[39].Amount=cup;
            purchase+=cup;
            ask();
            break;
            }

}}

     case 2:{
        int bv;
        cout<<"Choose it\n1.Cocola(1-litre)-50\n2.Pepsi(1-litre)-80\n3.Redbull(1-litre)-120\n";
        cin>>bv;
        switch(bv){

        case 1:
            {
             c[40].items="Cocola";
            int coco;
            int cola=50;
            cout<<"Enter the count:\n";
            cin>>coco;
            c[40].Quantity=coco;
            coco=coco*cola;
            c[40].Amount=coco;
            purchase+=coco;
            ask();
            break;
            }


        case 2:
            {
             c[41].items="Pepsi";
            int peps;
            int pepsi=80;
            cout<<"Enter the count:\n";
            cin>>peps;
            c[41].Quantity=peps;
            peps=peps*pepsi;
            c[41].Amount=peps;
            purchase+=peps;
            ask();
            break;
            }
         case 3:
            {
             c[42].items="Red bull";
            int red;
            int bull=120;
            cout<<"Enter the count:\n";
            cin>>red;
            c[42].Quantity=red;
            red=red*bull;
            c[42].Amount=red;
            purchase+=red;
            ask();
            break;
            }

}
break;
}

     case 3:{
        int to;
        cout<<"Choose it\n1.Bike-40\n2.Helicopter-120\n3.Train-400\n";
        cin>>to;
        switch(to){

        case 1:
            {
            c[43].items="Bike";
            int bi;
            int ke=40;
            cout<<"Enter the count:\n";
            cin>>bi;
            c[43].Quantity=bi;
            bi=bi*ke;
            c[43].Amount=bi;
            purchase+=bi;
            ask();
            break;
            }


    case 2:
            {
             c[44].items="Helicopter";
            int heli;
            int copter=120;
            cout<<"Enter the count:\n";
            cin>>heli;
            c[44].Quantity=heli;
            heli=heli*copter;
            c[44].Amount=heli;
            purchase+=heli;
            ask();
            break;
            }
    case 3:
            {
             c[45].items="Train";
            int tr;
            int rain=400;
            cout<<"Enter the count:\n";
            cin>>tr;
            c[45].Quantity=tr;
            tr=tr*rain;
            c[45].Amount=tr;
            purchase+=tr;
            ask();
            break;
            }
}
break;
}
}
}

void ask()
  {
    int op;
    cout<<"Do you want to continue?\n1.Yes\n2.No";
    cin>>op;
    switch(op)
    {
    case 1:
        display();
        break;

    case 2:
        cout<<"THanking You\n";
        break;
    }
}

void display()
  {
    int op;

    cout<<"\n\t\t\tMy Divisions are..:\n\n";
    cout<<"\t\t\t\t1.Snacks\n\t\t\t\t2.Stationery\n\t\t\t\t3.Cosmetics\n\t\t\t\t4.Groceries\n\t\t\t\t5.Others\n";
    cout<<"Select your option:\n";
    cin>>op;

    switch(op)
    {
    case 1:
        snacks();
        break;
    case 2:
        stationary();
        break;
    case 3:
        cosmetics();
        break;
    case 4:
        groceries();
        break;
    case 5:
        Others();
        break;
    }

}
int main()
{
    cout<<"\t\tWelcome to our Department Store"<<endl;
    display();
cout<<"TOtal Purchasing amount:"<<purchase<<endl;
for(int i=1;i<45;i++){
    cout<<c[i].items<<"\t\t";
    cout<<c[i].Quantity<<"\t\t";
        cout<<c[i].Amount<<"\n";
}

}
