/*
Coder : Ravi Verma
gmail : ravivermaj488@gmail.com
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<process.h>
#include<iomanip>
#include<string.h>


using namespace std ;

char ch;

class element
{
    int atomic_no;
    char symbol[4];
    char name[30];
    float mass;
    char type[20];
    char state[10];
    char config[50];
    int no_isotopes;
    char block;

public:


    void display()
    {
        cout<<"            ***********************************************            \n";
        cout<<"            |                 DISPLAY MENU                |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"Atomic number            :";
        cout<<atomic_no<<"\n";;
        cout<<"Symbol                   :";
        cout.write(symbol,4);
        cout<<"\n";
        cout<<"Name                     :";
        cout.write(name,30);
        cout<<"\n";
        cout<<"Mass of element          :";
        cout<<mass<<"\n";
        cout<<"Type of element          :";
        cout.write(type,20);
        cout<<"\n";
        cout<<"State of element         :";
        cout.write(state,10);
        cout<<"\n";
        cout<<"Configuration of element :";
        cout.write(config,50);
        cout<<"\n";
        cout<<"Number of isotopes       :";
        cout<<no_isotopes<<"\n";
        cout<<"Block of element         :";
        cout<<block<<"\n";
    }

    void tabular_display()
    {
        cout<<setw(3)<<atomic_no<<"         "<<setw(3)<<symbol<<"    "<<setw(10)<<name<<"     "<<setw(7)<<mass<<"\n";
    }

    int ret_atomicno()
    {
        return atomic_no;
    }

    char* ret_symb()
    {
        return symbol;
    }

    char ret_block()
    {
        return block;
    }

    char* ret_state()
    {
        return state;
    }

    int ret_isotope()
    {
        return no_isotopes;
    }

    void feed_data(int atn,char symb[4],char nam[30],float mas,char typ[20],char stat[10],char cfg[50],int iso,char blk)
    {
        atomic_no=atn;
        strcpy(symbol,symb);
        strcpy(name,nam);
        mass=mas;
        strcpy(type,typ);
        strcpy(state,stat);
        strcpy(config,cfg);
        no_isotopes=iso;
        block=blk;
    }
} e[118];


void data()
{
    e[0].feed_data(1,"H","Hydrogen",1.0079,"non metal","gas","1s1",3,'s');
    e[1].feed_data(2,"He","Helium",4.0026,"noble gas","gas","1s2",2,'s');
    e[2].feed_data(3,"Li","Lithium",6.941,"alkali metal","solid","[He]2s1",2,'s');
    e[3].feed_data(4,"Be","Beryllium",9.0122,"alkaline earth metal","solid","[He]2s2",3,'s');
    e[4].feed_data(5,"B","Boron",10.811,"metalloid","solid","[He]2s22p1",2,'p');
    e[5].feed_data(6,"C","Carbon",12.0107,"non metal","solid","[He]2s22p2",3,'p');
    e[6].feed_data(7,"N","Nitrogen",14.0067,"non metal","gas","[He]2s22p3",3,'p');
    e[7].feed_data(8,"O","Oxygen",15.9994,"non metal","gas","[He]2s22p4",3,'p');
    e[8].feed_data(9,"F","Fluorine",18.9984,"non metal","gas","[He]2s22p5",2,'p');
    e[9].feed_data(10,"Ne","Neon",20.1797,"noble gas","gas","[He]2s22p6",3,'p');
    e[10].feed_data(11,"Na","Sodium",22.9897,"alkali metal","solid","[Ne]3s1",2,'s');
    e[11].feed_data(12,"Mg","Magnesium",24.305,"alkaline earth metal","solid","[Ne]3s2",3,'s');
    e[12].feed_data(13,"Al","Aluminum",26.9815,"metal","solid","[Ne]3s13p1",2,'p');
    e[13].feed_data(14,"Si","Silicon",28.0855,"metalloid","solid","[Ne]3s23p2",4,'p');
    e[14].feed_data(15,"P","Phosphorus",30.9738,"non metal","solid","[Ne]3s23p3",3,'p');
    e[15].feed_data(16,"S","Sulfur",32.065,"non metal","solid","[Ne]3s23p4",5,'p');
    e[16].feed_data(17,"Cl","Chlorine",35.453,"non metal","gas","[Ne]3s23p5",3,'p');
    e[17].feed_data(18,"Ar","Argon",39.0983,"noble gas","gas","[Ne]3s23p6",7,'p');
    e[18].feed_data(19,"K","Potassium",39.948,"alkali metal","solid","[Ar]4s1",3,'s');
    e[19].feed_data(20,"Ca","Calcium",40.078,"alkaline earth metal","solid","[Ar]4s2",9,'s');
    e[20].feed_data(21,"Sc","Scandium",44.9559,"Transition metal","solid","[[Ar]3d14s2",5,'d');
    e[21].feed_data(22,"Ti","Titanium",47.867,"Transition metal","solid","[[Ar]3d24s2",6,'d');
    e[22].feed_data(23,"V","Vanadium",50.9415,"Transition metal","solid","[Ar]3d34s2",4,'d');
    e[23].feed_data(24,"Cr","Chromium",51.9961,"Transition metal","solid","[Ar]3d54s1",5,'d');
    e[24].feed_data(25,"Mn","Manganese",54.938,"Transition metal","solid","[Ar]3d54s2",4,'d');
    e[25].feed_data(26,"Fe","Iron",55.845,"Transition metal","solid","[Ar]3d64s2",7,'d');
    e[26].feed_data(27,"Ni","Cobalt",58.6934,"Transition metal","solid","[Ar]3d74s2",5,'d');
    e[27].feed_data(28,"Co","Nickel",58.9332,"Transition metal","solid","[Ar]3d84s2",8,'d');
    e[28].feed_data(29,"Cu","Copper",63.546,"Transition metal","solid","[Ar]3d104s1",2,'d');
    e[29].feed_data(30,"Zn","Zinc",65.39,"Transition metal","solid","[Ar]3d104s2",7,'d');
    e[30].feed_data(31,"Ga","Gallium",69.723,"metal","solid","[Ar]3d104s24p1",2,'p');
    e[31].feed_data(32,"Ge","Germanium",72.64,"metalloid","solid","[Ar]3d104s24p2",7,'p');
    e[32].feed_data(33,"As","Arsenic",74.9216,"metalloid","solid","[Ar]3d104s24p3",3,'p');
    e[33].feed_data(34,"Se","Selenium",78.96,"non metal","solid","[Ar]3d104s24p4",9,'p');
    e[34].feed_data(35,"Br","Bromine",79.904,"non metal","liquid","[Ar]3d104s24p5",2,'p');
    e[35].feed_data(36,"Kr","Krypton",83.8,"noble gas","gas","[Ar]3d104s24p6",9,'p');
    e[36].feed_data(37,"Rb","Rubidium",85.4678,"alkali metal","solid","[Kr]5s1",5,'s');
    e[37].feed_data(38,"Sr","Strontium",87.62,"alkaline earth metal","solid","[Kr]5s2",9,'s');
    e[38].feed_data(39,"Y","Yttrium",88.9059,"Transition metal","solid","[Kr]4d15s2",5,'d');
    e[39].feed_data(40,"Zr","Zirconium",91.224,"Transition metal","solid","[Kr]4d25s2",8,'d');
    e[40].feed_data(41,"Nb","Niobium",92.9064,"Transition metal","solid","[Kr]4d45s1",5,'d');
    e[41].feed_data(42,"Mo","Molybdenum",95.94,"Transition metal","solid","[Kr]4d55s1",9,'d');
    e[42].feed_data(43,"Tc","Technetium",98,"Transition metal","solid","[Kr]4d55s2",5,'d');
    e[43].feed_data(44,"Ru","Ruthenium",101.07,"Transition metal","solid","[Kr]4d75s1",10,'d');
    e[44].feed_data(45,"Rh","Rhodium",102.9055,"Transition metal","solid","[Kr]4d85s1",5,'d');
    e[45].feed_data(46,"Pd","Palladium",106.42,"Transition metal","solid","[Kr]4d10",9,'d');
    e[46].feed_data(47,"Ag","Silver",107.8682,"Transition metal","solid","[Kr]4d105s1",6,'d');
    e[47].feed_data(48,"Cd","Cadmium",112.411,"Transition metal","solid","[Kr]4d105s2",11,'d');
    e[48].feed_data(49,"In","Indium",114.818,"metal","solid","[Kr]4d105s25p1",2,'p');
    e[49].feed_data(50,"Sn","Tin",118.71,"metal","solid","[Kr]4d105s25p2",11,'p');
    e[50].feed_data(51,"Sb","Antimony",121.76,"metalloid","solid","[Kr]4d105s25p3",3,'p');
    e[51].feed_data(52,"Te","Tellurium",126.9045,"metalloid","solid","[Kr]4d105s25p4",11,'p');
    e[52].feed_data(53,"I","Iodine",127.6,"non metal","solid","[Kr]4d105s25p5",3,'p');
    e[53].feed_data(54,"Xe","Xenon",131.293	,"noble gas","gas","[Kr]4d105s25p6",13,'p');
    e[54].feed_data(55,"Cs","Cesium",132.9055,"alkali metal","solid","[Xe]6s1",4,'s');
    e[55].feed_data(56,"Ba","Barium",137.327,"alkaline earth metal","solid","[Xe]6s2",8,'s');
    e[56].feed_data(57,"La","Lanthanum",138.9055,"Lanthanoids","solid","[Xe]5d16s2",3,'f');
    e[57].feed_data(58,"Ce","Cerium",140.116,"Lanthanoids","solid","[Xe]4f15d16s2",8,'f');
    e[58].feed_data(59,"Pr","Praseodymium",140.9077,"Lanthanoids","solid","[Xe]4f36s2",3,'f');
    e[59].feed_data(60,"Nd","Neodymium",144.24,"Lanthanoids","solid","[Xe]4f46s2",7,'f');
    e[60].feed_data(61,"Pm","Promethium",145,"Lanthanoids","solid","[Xe]4f56s2",3,'f');
    e[61].feed_data(62,"Sm","Samarium",150.36,"Lanthanoids","solid","[Xe]4f66s2",8,'f');
    e[62].feed_data(63,"Eu","Europium",151.964,"Lanthanoids","solid","[Xe]4f76s2",4,'f');
    e[63].feed_data(64,"Gd","Gadolinium",157.25,"Lanthanoids","solid","[Xe]4f75d16s2",7,'f');
    e[64].feed_data(65,"Tb","Terbium",158.9253,"Lanthanoids","solid","[Xe]4f96s2",3,'f');
    e[65].feed_data(66,"Dy","Dysprosium",162.5,"Lanthanoids","solid","[Xe]4f106s2",8,'f');
    e[66].feed_data(67,"Ho","Holmium",164.9303,"Lanthanoids","solid","[Xe]4f116s2",5,'f');
    e[67].feed_data(68,"Er","Erbium",167.259,"Lanthanoids","solid","[Xe]4f126s2",11,'f');
    e[68].feed_data(69,"Tm","Thulium",168.9342,"Lanthanoids","solid","[Xe]4f136s2",5,'f');
    e[69].feed_data(70,"Yb","Ytterbium",173.04,"Lanthanoids","solid","[Xe]4f146s2",11,'f');
    e[70].feed_data(71,"Lu","Lutetium",174.967,"Lanthanoids","solid","[Xe]4f145d16s2",4,'d');
    e[71].feed_data(72,"Hf","Hafnium",178.49,"Transition metal","solid","[Xe]4f145d26s2",8,'d');
    e[72].feed_data(73,"Ta","Tantalum",180.9479,"Transition metal","solid","[Xe]4f145d36s2",7,'d');
    e[73].feed_data(74,"W	","Tungsten",183.84,"Transition metal","solid","[Xe]4f145d46s2",7,'d');
    e[74].feed_data(75,"Re","Rhenium",186.207,"Transition metal","solid","[Xe]4f145d56s2",2,'d');
    e[75].feed_data(76,"Os","Osmium",190.23,"Transition metal","solid","[Xe]4f145d66s2",11,'d');
    e[76].feed_data(77,"Ir","Iridium",192.217,"Transition metal","solid","[Xe]4f145d76s2",7,'d');
    e[77].feed_data(78,"Pt","Platinum",195.078,"Transition metal","solid","[Xe]4f145d96s1",9,'d');
    e[78].feed_data(79,"Au","Gold",196.9665,"Transition metal","solid","[Xe]4f145d106s1",5,'d');
    e[79].feed_data(80,"Hg","Mercury",200.59,"Transition metal","liquid","[Xe]4f145d106s2",11,'d');
    e[80].feed_data(81,"Tl","Thallium",204.3833,"metal","solid","[Xe]4f145d106s26p1",3,'p');
    e[81].feed_data(82,"Pb","Lead",207.2,"metal","solid","[Xe]4f145d106s26p2",6,'p');
    e[82].feed_data(83,"Bi","Bismuth",208.9804,"metal","solid","[Xe]4f145d106s26p3",3,'p');
    e[83].feed_data(84,"Po","Polonium",209,"metal","solid","[Xe]4f145d106s26p4",3,'p');
    e[84].feed_data(85,"At","Astatine",210,"metalloid","solid","[Xe]4f145d106s26p5",1,'p');
    e[85].feed_data(86,"Rn","Radon",222,"noble gas","gas","[Xe]4f145d106s26p6",2,'p');
    e[86].feed_data(87,"Fr","Francium",223,"alkali metal","solid","[Rn]7s1",3,'s');
    e[87].feed_data(88,"Ra","Radium",226,"alkaline earth metal","solid","[Rn]7s2",4,'s');
    e[88].feed_data(89,"Ac","Actinium",227,"Actinoids","solid","[Rn]6d17s2",3,'f');
    e[89].feed_data(90,"Th","Thorium",231.0359,"Actinoids","solid","[Rn]6d27s2",6,'f');
    e[90].feed_data(91,"Pa","Protactinium",232.0381,"Actinoids","solid","[Rn]5f26d17s2",6,'f');
    e[91].feed_data(92,"U","Uranium",237,"Actinoids","solid","[Rn]5f36d17s2",6,'f');
    e[92].feed_data(93,"Np","Neptunium",238.0289,"Actinoids","solid","[Rn]5f46d17s2",3,'f');
    e[93].feed_data(94,"Pu","Plutonium",243,"Actinoids","solid","[Rn]5f67s2",6,'f');
    e[94].feed_data(95,"Am","Americium",244,"Actinoids","solid","[Rn]5f77s2",3,'f');
    e[95].feed_data(96,"Cm","Curium",247,"Actinoids","solid","[Rn]5f76d17s2",8,'f');
    e[96].feed_data(97,"Bk","Berkelium",247,"Actinoids","solid","[Rn]5f97s2",5,'f');
    e[97].feed_data(98,"Cf","Californium",251,"Actinoids","solid","[Rn]5f107s2",7,'f');
    e[98].feed_data(99,"Es","Einsteinium",252,"Actinoids","solid","[Rn]5f117s2",4,'f');
    e[99].feed_data(100,"Fm","Fermium",257,"Actinoids","solid","[Rn]5f127s2",4,'f');
    e[100].feed_data(101,"Md","Mendelevium",258,"Actinoids","solid","[Rn]5f137s2",3,'f');
    e[101].feed_data(102,"No","Nobelium",259,"Actinoids","solid","[Rn]5f147s2",3,'f');
    e[102].feed_data(103,"Lr","Lawrencium",261,"Actinoids","solid","[Rn]5f147s27p1",1,'d');
    e[103].feed_data(104,"Rf","Rutherfordium",262,"Transition metal","unknown","[Rn]5f146d27s2",1,'d');
    e[104].feed_data(105,"Db","Dubnium",262,"Transition metal","unknown","*[Rn]5f146d37s2",1,'d');
    e[105].feed_data(106,"Sg","Seaborgium",266,"Transition metal","unknown","*[Rn]5f146d47s2",1,'d');
    e[106].feed_data(107,"Bh","Bohrium",264,"Transition metal","unknown","*[Rn]5f146d57s2",2,'d');
    e[107].feed_data(108,"Hs","Hassium",277,"Transition metal","unknown","*[Rn]5f146d67s2",2,'d');
    e[108].feed_data(109,"Mt","Meitnerium",268,"Transition metal","unknown","*[Rn]5f146d77s2",1,'d');
    e[109].feed_data(110,"Ds","Darmstadtium",0,"Transition metal","unknown","*[Rn]5f146d97s1",1,'d');
    e[110].feed_data(111,"Rg","Roentgenium",272,"metal","unknown","*[Rn]5f146d107s1",1,'d');
    e[111].feed_data(112,"Cn","Copernicium",0,"Transition metal","unknown","*[Rn]5f146d107s2",1,'d');
    e[112].feed_data(113,"Nh","Nihonium",0,"metal","unknown","*[Rn]5f146d107s27p1",1,'p');
    e[113].feed_data(114,"Fl","Flerovium",0,"metal","unknown","*[Rn]5f146d107s27p2",1,'p');
    e[114].feed_data(115,"Mc","Moscovium",0,"metal","unknown","*[Rn]5f146d107s27p3",1,'p');
    e[115].feed_data(116,"Lv","Livermorium",0,"metal","solid","*[Rn]5f146d107s27p4",1,'p');
    e[116].feed_data(117,"Ts","Tennessine",0,"metal","solid","*[Rn]5f146d107s27p5",1,'p');
    e[117].feed_data(118,"Og","Oganesson",0,"noble gas","unknown","*[Rn]5f146d107s27p6",1,'p');
}
void table()
{

    ifstream fin;
    fin.open("periodictable.txt",ios::in);

    while(!fin.eof())
    {
        ch=fin.get();
        cout<<ch;
    }
    fin.close();
}


void display_all()
{
    cout<<"            ***********************************************            \n";
    cout<<"            |                 DISPLAY ALL MENU            |            \n";
    cout<<"            ***********************************************            \n";

    cout<<"**********************************************\n";
    cout<<" Atomic no  Symbol       Name      Mass\n";
    cout<<"**********************************************\n";
    for(int i=0; i<118; ++i)
    {
        e[i].tabular_display();
    }
}

void search_display()
{
    char choice='y';
    int search_atmno=0,flag=0;
    do
    {
        cout<<"            ***********************************************            \n";
        cout<<"            |                 SEARCH & DISPLAY            |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"Enter the atomic number ::";
        cin>>search_atmno;
        for(int i=0; i<118; ++i)
        {

            if(e[i].ret_atomicno()==search_atmno)
            {
                e[i].display();
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"Search unsuccessful!!\n";
        }
        cout<<"Do you want to do more y/n :: ";
        cin>>choice;
    }
    while(choice=='y');
}
void search_symbol()
{
    char symb[4],choice='y';
    int flag=0;
    do
    {
        cout<<"            ***********************************************            \n";
        cout<<"            |                 SEARCH by SYMBOL            |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"Enter the symbol of element to search :: ";
        cin.get(ch);
        cin.getline(symb,4);
        cout<<"\n";
        for(int i=0; i<118; ++i)
        {
            if(strcmp(e[i].ret_symb(),symb)==0)
            {
                e[i].display();
                ++flag;
            }
        }
        if(flag==0)
        {
            cout<<"Not found!!\n";
        }
        cout<<"Do you want to do more y/n :: ";
        cin>>choice;
    }
    while(choice=='y');


}

void disp_block()
{
    char blk,choice='y';
    int flag=0,schoice=0;
    do
    {

        cout<<"            ***********************************************            \n";
        cout<<"            |                 DISPLAY by BLOCK            |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"\n";
        cout<<"[1].S block\n";
        cout<<"[2].P block\n";
        cout<<"[3].D block\n";
        cout<<"[4].F block\n";
        cout<<"Enter the choice of block of elements to display :: ";
        cin>>schoice;
        switch(schoice)
        {
        case 1:
            blk='s';
            break;

        case 2:
            blk='p';
            break;

        case 3:
            blk='d';
            break;

        case 4:
            blk='f';
            break;

        default:
            cout<<"Invalid choice!!\n";
        }
        cout<<"\n";
        cout<<"**********************************************\n";
        cout<<" Atomic no  Symbol       Name      Mass\n";
        cout<<"**********************************************\n";
        for(int i=0; i<118; ++i)
        {
            if(blk==e[i].ret_block())
            {
                e[i].tabular_display();
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"Not found!!\n";
        }
        cout<<"Do you want to do more y/n :: ";
        cin>>choice;
    }
    while(choice=='y');

}
void disp_state()
{

    char stat[10],choice='y';
    int flag=0,schoice=0;
    do
    {
        cout<<"            ***********************************************            \n";
        cout<<"            |             LIST BY SOLID/LIQUID/GAS        |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"\n";
        cout<<"[1].Solid\n";
        cout<<"[2].Liquid\n";
        cout<<"[3].Gas\n";
        cout<<"[4].Unknown\n";
        cout<<"Enter the choice state of elements to display :: ";
        cin>>schoice;
        switch(schoice)
        {
        case 1:
            strcpy(stat,"solid");
            break;

        case 2:
            strcpy(stat,"liquid");
            break;

        case 3:
            strcpy(stat,"gas");
            break;

        case 4:
            strcpy(stat,"unknown");
            break;

        default:
            cout<<"Invalid choice!!\n";
        }
        cout<<"\n";
        cout<<"**********************************************\n";
        cout<<" Atomic no  Symbol       Name      Mass\n";
        cout<<"**********************************************\n";
        for(int i=0; i<118; ++i)
        {
            if(strcmp(stat,e[i].ret_state())==0)
            {
                e[i].tabular_display();
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"Not found!!\n";
        }
        cout<<"Do you want to do more y/n :: ";
        cin>>choice;
    }
    while(choice=='y');

}

void disp_range()
{
    char choice='y';
    int first=0,last=0;
    do
    {
        cout<<"            ***********************************************            \n";
        cout<<"            |            DISPLAY by RANGE                 |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"\n";
        cout<<"Enter the First element of range :: ";
        cin>>first;
        cout<<"Enter the Last element of range  :: ";
        cin>>last;
        cout<<"**********************************************\n";
        cout<<" Atomic no  Symbol       Name      Mass\n";
        cout<<"**********************************************\n";
        for(int i=first-1; i<=last-1; ++i)
        {
            e[i].tabular_display();
        }
        cout<<"Do you want to do more y/n :: ";
        cin>>choice;
    }
    while(choice=='y');
}

void list_isotope()
{
    char choice='y';
    int isotop=0,flag=0;
    do
    {
        flag=0;
        cout<<"            ***********************************************            \n";
        cout<<"            |           LIST by ISOTOPES                  |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"\n";
        cout<<"Enter the Number of Isotopes :: ";
        cin>>isotop;
        cout<<"**********************************************\n";
        cout<<" Atomic no  Symbol       Name      Mass\n";
        cout<<"**********************************************\n";
        for(int i=0; i<199-1; ++i)
        {
            if(e[i].ret_isotope()==isotop)
            {
                e[i].tabular_display();
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"No element to display\n";
        }
        cout<<"Do you want to do more y/n :: ";
        cin>>choice;
    }
    while(choice=='y');
}
void menu()
{
    int choice=0;
    while(choice!=9)
    {

        cout<<"            ***********************************************            \n";
        cout<<"            |                 MAIN MENU                   |            \n";
        cout<<"            ***********************************************            \n";
        cout<<"\n";
        cout<<"[1]Periodic Table\n";
        cout<<"[2]Search Specific Element\n";
        cout<<"[3]Search by Symbol\n";
        cout<<"[4]Display All element\n";
        cout<<"[5]Display by Block\n";
        cout<<"[6]Display by Range\n";
        cout<<"[7]List by Solid/Liquid/Gas\n";
        cout<<"[8]List by Isotopes\n";
        cout<<"[9]Exit\n";
        cout<<"Enter the choice from above ::";
        cin>>choice;
        switch(choice)
        {
        case 1:
            table();
            break;

        case 2:
            search_display();
            break;

        case 3:
            search_symbol();
            break;

        case 4:
            display_all();
            break;

        case 5:
            disp_block();
            break;

        case 6:
            disp_range();
            break;

        case 7:
            disp_state();
            break;

        case 8:
            list_isotope();
            break;
        case 9:
            cout<<"Program will now exit\n";
            system("pause");
            exit(0);
            break;

        default:
            cout<<"Invalid choice try again!!\n";
        }
        system("pause");
        system("cls");

    }
}


int main()
{
    cout<<"---------------------------------------------------------------------------\n";
    cout<<"|       -----------------------------------------------------------       |\n";
    cout<<"|       |     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     |       |\n";
    cout<<"|       |     |                                             |     |       |\n";
    cout<<"|       |     |                                             |     |       |\n";
    cout<<"|       |     |.............................................|     |       |\n";
    cout<<"|       |     |                   WELCOME                   |     |       |\n";
    cout<<"|       |     |                 <<       >>                 |     |       |\n";
    cout<<"|       |     |              TO PERIODIC TABLE              |     |       |\n";
    cout<<"|       |     |.............................................|     |       |\n";
    cout<<"|       |     |                                             |     |       |\n";
    cout<<"|       |     |                                             |     |       |\n";
    cout<<"|       |     <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     |       |\n";
    cout<<"|       -----------------------------------------------------------       |\n";
    cout<<"---------------------------------------------------------------------------\n";
    system("pause");
    system("cls");
    data();
    menu();
    return 0;
}
