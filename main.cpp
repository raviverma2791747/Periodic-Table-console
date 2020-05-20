/*
Coder : Ravi Verma
gmail : ravivermaj488@gmail.com
*/

#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

class element
{
    int m_atomic_no;
    std::string m_symbol;
    std::string m_name;
    float m_mass;
    std::string m_type;
    std::string m_state;
    std::string m_config;
    int m_no_isotopes;
    char m_block;

public:
    element(int atomic_no,std::string symbol,std::string name,
    float mass,std::string type,std::string state,std::string config,
    int no_of_isotopes,char block):
    m_atomic_no(atomic_no),
    m_symbol(symbol),
    m_name(name),
    m_mass(mass),
    m_type(type),
    m_state(state),
    m_config(config),
    m_no_isotopes(no_of_isotopes),
    m_block(block)
    {

    }


    void property() const
    {
        std::cout<<"            ***********************************************            \n";
        std::cout<<"            |                 DISPLAY MENU                |            \n";
        std::cout<<"            ***********************************************            \n";
        std::cout<<"Atomic number            :"<<m_atomic_no<<std::endl;
        std::cout<<"Symbol                   :"<<m_symbol<<std::endl;
        std::cout<<"Name                     :"<<m_name<<std::endl;
        std::cout<<"Mass of element          :"<<m_mass<<std::endl;
        std::cout<<"Type of element          :"<<m_type<<std::endl;
        std::cout<<"State of element         :"<<m_state<<std::endl;
        std::cout<<"Configuration of element :"<<m_config<<std::endl;
        std::cout<<"Number of isotopes       :"<<m_no_isotopes<<std::endl;
        std::cout<<"Block of element         :"<<m_block<<std::endl;
    }

    void tabular_property() const
    {
        std::cout.width(3);
        std::cout<<m_atomic_no<<"         ";
        std::cout.width(3);
        std::cout<<m_symbol<<"    ";
        std::cout.width(10);
        std::cout<<m_name<<"     ";
        std::cout.width(7);
        std::cout<<m_mass<<std::endl;
    }

    const int& atomicno()
    {
        return m_atomic_no;
    }

    const std::string& symbol()
    {
        return m_symbol;
    }

    const char& block()
    {
        return m_block;
    }

    const std::string& state()
    {
        return m_state;
    }

    const int& isotope()
    {
        return m_no_isotopes;
    }

} ;

void table()
{
    std::ifstream fin;
    fin.open("periodictable.txt",std::ios::in);
    while(!fin.eof())
    {
        std::cout<<fin.get();       
    }
    fin.close();
}


void display_all(element e[])
{
    std::cout<<"            ***********************************************            "<<std::endl;
    std::cout<<"            |                 DISPLAY ALL MENU            |            "<<std::endl;
    std::cout<<"            ***********************************************            "<<std::endl;
    std::cout<<"**********************************************"<<std::endl;
    std::cout<<" Atomic no  Symbol       Name      Mass"<<std::endl;
    std::cout<<"**********************************************"<<std::endl;
    for(int i=0; i<118;i++)
    {
        e[i].tabular_property();
    }
}

void search_display(element e[])
{
    char choice  = 'y';
    int search_atomic_no = 0;
    bool flag = false;
    while(choice == 'y')
    {
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"            |                 SEARCH & DISPLAY            |            "<<std::endl;
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"Enter the atomic number ::";
        std::cin>>search_atomic_no;
        for(int i = 0; i < 118 ;i++)
        {

            if(e[i].atomicno() == search_atomic_no)
            {
                e[i].property();
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            std::cout<<"Search unsuccessful!!"<<std::endl;
        }
        std::cout<<"Do you want to do more y/n ::";
        std::cin>>choice;
    }
}
void search_symbol(element e[])
{
    std::string symbol;
    char choice = 'y';
    bool flag = true;
    while(choice == 'y')
    {
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"            |                 SEARCH by SYMBOL            |            "<<std::endl;
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"Enter the symbol of element to search :: ";
        std::cin>>symbol;
        for(int i=0; i<118; ++i)
        {
            if(e[i].symbol() == symbol)
            {
                e[i].property();
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            std::cout<<"Not found!!"<<std::endl;
        }
        std::cout<<"Do you want to do more y/n ::";
        std::cin>>choice;
    }
}

void disp_block(element e[])
{
    char block,choice='y';
    bool flag = true;
    int schoice = 0;
    while(choice == 'y')
    {
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"            |                 DISPLAY by BLOCK            |            "<<std::endl;
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"[1].S block"<<std::endl;
        std::cout<<"[2].P block"<<std::endl;
        std::cout<<"[3].D block"<<std::endl;
        std::cout<<"[4].F block"<<std::endl;
        std::cout<<"Enter the choice of block of elements to display ::";
        std::cin>>schoice;
        switch(schoice)
        {
        case 1:
            block = 's';
            break;

        case 2:
            block = 'p';
            break;

        case 3:
            block = 'd';
            break;

        case 4:
            block = 'f';
            break;

        default:
            std::cout<<"Invalid choice!!"<<std::endl;
        }
        std::cout<<"**********************************************\n";
        std::cout<<" Atomic no  Symbol       Name      Mass\n";
        std::cout<<"**********************************************\n";
        for(int i=0; i<118; ++i)
        {
            if(block == e[i].block())
            {
                e[i].tabular_property();
                flag = true;
            }
        }
        if(flag == false)
        {
            std::cout<<"Not found!!"<<std::endl;
        }
        std::cout<<"Do you want to do more y/n ::";
        std::cin>>choice;
    }
}
void disp_state(element e[])
{

    std::string state;
    char choice='y';
    bool flag = false;
    int schoice = 0;
    while(choice == 'y')
    {
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"            |             LIST BY SOLID/LIQUID/GAS        |            "<<std::endl;
        std::cout<<"            ***********************************************            "<<std::endl;
        std::cout<<"[1].Solid"<<std::endl;
        std::cout<<"[2].Liquid"<<std::endl;
        std::cout<<"[3].Gas"<<std::endl;
        std::cout<<"[4].Unknown"<<std::endl;
        std::cout<<"Enter the choice state of elements to display ::";
        std::cin>>schoice;
        switch(schoice)
        {
        case 1:
            state = "solid";
            break;

        case 2:
            state = "liquid";
            break;

        case 3:
            state = "gas";
            break;

        case 4:
            state = "unknown";
            break;

        default:
            std::cout<<"Invalid choice!!"<<std::endl;
        }
        std::cout<<"**********************************************"<<std::endl;
        std::cout<<" Atomic no  Symbol       Name      Mass"<<std::endl;
        std::cout<<"**********************************************"<<std::endl;
        for(int i=0; i<118; ++i)
        {
            if(state == e[i].state())
            {
                e[i].tabular_property();
                flag = true; 
            }
        }
        if(flag == false)
        {
            std::cout<<"Not found!!"<<std::endl;
        }
        std::cout<<"Do you want to do more y/n ::";
        std::cin>>choice;
    }
}

void disp_range(element e[])
{
    char choice='y';
    int first=0,last=0;
    while(choice == 'y')
    {
        std::cout<<"            ***********************************************            \n";
        std::cout<<"            |            DISPLAY by RANGE                 |            \n";
        std::cout<<"            ***********************************************            \n";
        std::cout<<"\n";
        std::cout<<"Enter the First element of range :: ";
        std::cin>>first;
        std::cout<<"Enter the Last element of range  :: ";
        std::cin>>last;
        std::cout<<"**********************************************\n";
        std::cout<<" Atomic no  Symbol       Name      Mass\n";
        std::cout<<"**********************************************\n";
        for(int i=first-1; i<=last-1; ++i)
        {
            e[i].tabular_property();
        }
        std::cout<<"Do you want to do more y/n :: ";
        std::cin>>choice;
    }
}

void list_isotope(element e[])
{
    char choice = 'y';
    int isotope = 0,flag=0;
    while(choice == 'y')
    {
        std::cout<<"            ***********************************************            \n";
        std::cout<<"            |           LIST by ISOTOPES                  |            \n";
        std::cout<<"            ***********************************************            \n";
        std::cout<<"\n";
        std::cout<<"Enter the Number of Isotopes :: ";
        std::cin>>isotope;
        std::cout<<"**********************************************\n";
        std::cout<<" Atomic no  Symbol       Name      Mass\n";
        std::cout<<"**********************************************\n";
        for(int i=0; i<118;i++)
        {
            if(e[i].isotope() == isotope)
            {
                e[i].tabular_property();
                flag = 1;
            }
        }
        if(flag==0)
        {
            std::cout<<"No element to display\n";
        }
        std::cout<<"Do you want to do more y/n :: ";
        std::cin>>choice;
    }
}
void menu(element e[])
{
    int choice=0;
    while(choice!=9)
    {

        std::cout<<"            ***********************************************            \n";
        std::cout<<"            |                 MAIN MENU                   |            \n";
        std::cout<<"            ***********************************************            \n";
        std::cout<<"\n";
        std::cout<<"[1]Periodic Table\n";
        std::cout<<"[2]Search Specific Element\n";
        std::cout<<"[3]Search by Symbol\n";
        std::cout<<"[4]Display All element\n";
        std::cout<<"[5]Display by Block\n";
        std::cout<<"[6]Display by Range\n";
        std::cout<<"[7]List by Solid/Liquid/Gas\n";
        std::cout<<"[8]List by Isotopes\n";
        std::cout<<"[9]Exit\n";
        std::cout<<"Enter the choice from above ::";
        std::cin>>choice;
        switch(choice)
        {
        case 1:
            table();
            break;

        case 2:
            search_display(e);
            break;

        case 3:
            search_symbol(e);
            break;

        case 4:
            display_all(e);
            break;

        case 5:
            disp_block(e);
            break;

        case 6:
            disp_range(e);
            break;

        case 7:
            disp_state(e);
            break;

        case 8:
            list_isotope(e);
            break;
        case 9:
            std::cout<<"Program will now exit\n";
            system("pause");
            exit(0);
            break;

        default:
            std::cout<<"Invalid choice try again!!\n";
        }
        system("pause");
        system("cls");

    }
}


int main()
{
    std::cout<<"---------------------------------------------------------------------------\n";
    std::cout<<"|       -----------------------------------------------------------       |\n";
    std::cout<<"|       |     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     |       |\n";
    std::cout<<"|       |     |                                             |     |       |\n";
    std::cout<<"|       |     |                                             |     |       |\n";
    std::cout<<"|       |     |.............................................|     |       |\n";
    std::cout<<"|       |     |                   WELCOME                   |     |       |\n";
    std::cout<<"|       |     |                 <<       >>                 |     |       |\n";
    std::cout<<"|       |     |              TO PERIODIC TABLE              |     |       |\n";
    std::cout<<"|       |     |.............................................|     |       |\n";
    std::cout<<"|       |     |                                             |     |       |\n";
    std::cout<<"|       |     |                                             |     |       |\n";
    std::cout<<"|       |     <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     |       |\n";
    std::cout<<"|       -----------------------------------------------------------       |\n";
    std::cout<<"---------------------------------------------------------------------------\n";
    std::cin.ignore();
    system("cls");
    element e[] = {
       element(1,"H","Hydrogen",1.0079,"non metal","gas","1s1",3,'s'),
       element(2,"He","Helium",4.0026,"noble gas","gas","1s2",2,'s'),
       element(3,"Li","Lithium",6.941,"alkali metal","solid","[He]2s1",2,'s'),
       element(4,"Be","Beryllium",9.0122,"alkaline earth metal","solid","[He]2s2",3,'s'),
       element(5,"B","Boron",10.811,"metalloid","solid","[He]2s22p1",2,'p'),
       element(6,"C","Carbon",12.0107,"non metal","solid","[He]2s22p2",3,'p'),
       element(7,"N","Nitrogen",14.0067,"non metal","gas","[He]2s22p3",3,'p'),
       element(8,"O","Oxygen",15.9994,"non metal","gas","[He]2s22p4",3,'p'),
       element(9,"F","Fluorine",18.9984,"non metal","gas","[He]2s22p5",2,'p'),
       element(10,"Ne","Neon",20.1797,"noble gas","gas","[He]2s22p6",3,'p'),
       element(11,"Na","Sodium",22.9897,"alkali metal","solid","[Ne]3s1",2,'s'),
       element(12,"Mg","Magnesium",24.305,"alkaline earth metal","solid","[Ne]3s2",3,'s'),
       element(13,"Al","Aluminum",26.9815,"metal","solid","[Ne]3s13p1",2,'p'),
       element(14,"Si","Silicon",28.0855,"metalloid","solid","[Ne]3s23p2",4,'p'),
       element(15,"P","Phosphorus",30.9738,"non metal","solid","[Ne]3s23p3",3,'p'),
       element(16,"S","Sulfur",32.065,"non metal","solid","[Ne]3s23p4",5,'p'),
       element(17,"Cl","Chlorine",35.453,"non metal","gas","[Ne]3s23p5",3,'p'),
       element(18,"Ar","Argon",39.0983,"noble gas","gas","[Ne]3s23p6",7,'p'),
       element(19,"K","Potassium",39.948,"alkali metal","solid","[Ar]4s1",3,'s'),
       element(20,"Ca","Calcium",40.078,"alkaline earth metal","solid","[Ar]4s2",9,'s'),
       element(21,"Sc","Scandium",44.9559,"Transition metal","solid","[[Ar]3d14s2",5,'d'),
       element(22,"Ti","Titanium",47.867,"Transition metal","solid","[[Ar]3d24s2",6,'d'),
       element(23,"V","Vanadium",50.9415,"Transition metal","solid","[Ar]3d34s2",4,'d'),
       element(24,"Cr","Chromium",51.9961,"Transition metal","solid","[Ar]3d54s1",5,'d'),
       element(25,"Mn","Manganese",54.938,"Transition metal","solid","[Ar]3d54s2",4,'d'),
       element(26,"Fe","Iron",55.845,"Transition metal","solid","[Ar]3d64s2",7,'d'),
       element(27,"Ni","Cobalt",58.6934,"Transition metal","solid","[Ar]3d74s2",5,'d'),
       element(28,"Co","Nickel",58.9332,"Transition metal","solid","[Ar]3d84s2",8,'d'),
       element(29,"Cu","Copper",63.546,"Transition metal","solid","[Ar]3d104s1",2,'d'),
       element(30,"Zn","Zinc",65.39,"Transition metal","solid","[Ar]3d104s2",7,'d'),
       element(31,"Ga","Gallium",69.723,"metal","solid","[Ar]3d104s24p1",2,'p'),
       element(32,"Ge","Germanium",72.64,"metalloid","solid","[Ar]3d104s24p2",7,'p'),
       element(33,"As","Arsenic",74.9216,"metalloid","solid","[Ar]3d104s24p3",3,'p'),
       element(34,"Se","Selenium",78.96,"non metal","solid","[Ar]3d104s24p4",9,'p'),
       element(35,"Br","Bromine",79.904,"non metal","liquid","[Ar]3d104s24p5",2,'p'),
       element(36,"Kr","Krypton",83.8,"noble gas","gas","[Ar]3d104s24p6",9,'p'),
       element(37,"Rb","Rubidium",85.4678,"alkali metal","solid","[Kr]5s1",5,'s'),
       element(38,"Sr","Strontium",87.62,"alkaline earth metal","solid","[Kr]5s2",9,'s'),
       element(39,"Y","Yttrium",88.9059,"Transition metal","solid","[Kr]4d15s2",5,'d'),
       element(40,"Zr","Zirconium",91.224,"Transition metal","solid","[Kr]4d25s2",8,'d'),
       element(41,"Nb","Niobium",92.9064,"Transition metal","solid","[Kr]4d45s1",5,'d'),
       element(42,"Mo","Molybdenum",95.94,"Transition metal","solid","[Kr]4d55s1",9,'d'),
       element(43,"Tc","Technetium",98,"Transition metal","solid","[Kr]4d55s2",5,'d'),
       element(44,"Ru","Ruthenium",101.07,"Transition metal","solid","[Kr]4d75s1",10,'d'),
       element(45,"Rh","Rhodium",102.9055,"Transition metal","solid","[Kr]4d85s1",5,'d'),
       element(46,"Pd","Palladium",106.42,"Transition metal","solid","[Kr]4d10",9,'d'),
       element(47,"Ag","Silver",107.8682,"Transition metal","solid","[Kr]4d105s1",6,'d'),
       element(48,"Cd","Cadmium",112.411,"Transition metal","solid","[Kr]4d105s2",11,'d'),
       element(49,"In","Indium",114.818,"metal","solid","[Kr]4d105s25p1",2,'p'),
       element(50,"Sn","Tin",118.71,"metal","solid","[Kr]4d105s25p2",11,'p'),
       element(51,"Sb","Antimony",121.76,"metalloid","solid","[Kr]4d105s25p3",3,'p'),
       element(52,"Te","Tellurium",126.9045,"metalloid","solid","[Kr]4d105s25p4",11,'p'),
       element(53,"I","Iodine",127.6,"non metal","solid","[Kr]4d105s25p5",3,'p'),
       element(54,"Xe","Xenon",131.293	,"noble gas","gas","[Kr]4d105s25p6",13,'p'),
       element(55,"Cs","Cesium",132.9055,"alkali metal","solid","[Xe]6s1",4,'s'),
       element(56,"Ba","Barium",137.327,"alkaline earth metal","solid","[Xe]6s2",8,'s'),
       element(57,"La","Lanthanum",138.9055,"Lanthanoids","solid","[Xe]5d16s2",3,'f'),
       element(58,"Ce","Cerium",140.116,"Lanthanoids","solid","[Xe]4f15d16s2",8,'f'),
       element(59,"Pr","Praseodymium",140.9077,"Lanthanoids","solid","[Xe]4f36s2",3,'f'),
       element(60,"Nd","Neodymium",144.24,"Lanthanoids","solid","[Xe]4f46s2",7,'f'),
       element(61,"Pm","Promethium",145,"Lanthanoids","solid","[Xe]4f56s2",3,'f'),
       element(62,"Sm","Samarium",150.36,"Lanthanoids","solid","[Xe]4f66s2",8,'f'),
       element(63,"Eu","Europium",151.964,"Lanthanoids","solid","[Xe]4f76s2",4,'f'),
       element(64,"Gd","Gadolinium",157.25,"Lanthanoids","solid","[Xe]4f75d16s2",7,'f'),
       element(65,"Tb","Terbium",158.9253,"Lanthanoids","solid","[Xe]4f96s2",3,'f'),
       element(66,"Dy","Dysprosium",162.5,"Lanthanoids","solid","[Xe]4f106s2",8,'f'),
       element(67,"Ho","Holmium",164.9303,"Lanthanoids","solid","[Xe]4f116s2",5,'f'),
       element(68,"Er","Erbium",167.259,"Lanthanoids","solid","[Xe]4f126s2",11,'f'),
       element(69,"Tm","Thulium",168.9342,"Lanthanoids","solid","[Xe]4f136s2",5,'f'),
       element(70,"Yb","Ytterbium",173.04,"Lanthanoids","solid","[Xe]4f146s2",11,'f'),
       element(71,"Lu","Lutetium",174.967,"Lanthanoids","solid","[Xe]4f145d16s2",4,'d'),
       element(72,"Hf","Hafnium",178.49,"Transition metal","solid","[Xe]4f145d26s2",8,'d'),
       element(73,"Ta","Tantalum",180.9479,"Transition metal","solid","[Xe]4f145d36s2",7,'d'),
       element(74,"W	","Tungsten",183.84,"Transition metal","solid","[Xe]4f145d46s2",7,'d'),
       element(75,"Re","Rhenium",186.207,"Transition metal","solid","[Xe]4f145d56s2",2,'d'),
       element(76,"Os","Osmium",190.23,"Transition metal","solid","[Xe]4f145d66s2",11,'d'),
       element(77,"Ir","Iridium",192.217,"Transition metal","solid","[Xe]4f145d76s2",7,'d'),
       element(78,"Pt","Platinum",195.078,"Transition metal","solid","[Xe]4f145d96s1",9,'d'),
       element(79,"Au","Gold",196.9665,"Transition metal","solid","[Xe]4f145d106s1",5,'d'),
       element(80,"Hg","Mercury",200.59,"Transition metal","liquid","[Xe]4f145d106s2",11,'d'),
       element(81,"Tl","Thallium",204.3833,"metal","solid","[Xe]4f145d106s26p1",3,'p'),
       element(82,"Pb","Lead",207.2,"metal","solid","[Xe]4f145d106s26p2",6,'p'),
       element(83,"Bi","Bismuth",208.9804,"metal","solid","[Xe]4f145d106s26p3",3,'p'),
       element(84,"Po","Polonium",209,"metal","solid","[Xe]4f145d106s26p4",3,'p'),
       element(85,"At","Astatine",210,"metalloid","solid","[Xe]4f145d106s26p5",1,'p'),
       element(86,"Rn","Radon",222,"noble gas","gas","[Xe]4f145d106s26p6",2,'p'),
       element(87,"Fr","Francium",223,"alkali metal","solid","[Rn]7s1",3,'s'),
       element(88,"Ra","Radium",226,"alkaline earth metal","solid","[Rn]7s2",4,'s'),
       element(89,"Ac","Actinium",227,"Actinoids","solid","[Rn]6d17s2",3,'f'),
       element(90,"Th","Thorium",231.0359,"Actinoids","solid","[Rn]6d27s2",6,'f'),
       element(91,"Pa","Protactinium",232.0381,"Actinoids","solid","[Rn]5f26d17s2",6,'f'),
       element(92,"U","Uranium",237,"Actinoids","solid","[Rn]5f36d17s2",6,'f'),
       element(93,"Np","Neptunium",238.0289,"Actinoids","solid","[Rn]5f46d17s2",3,'f'),
       element(94,"Pu","Plutonium",243,"Actinoids","solid","[Rn]5f67s2",6,'f'),
       element(95,"Am","Americium",244,"Actinoids","solid","[Rn]5f77s2",3,'f'),
       element(96,"Cm","Curium",247,"Actinoids","solid","[Rn]5f76d17s2",8,'f'),
       element(97,"Bk","Berkelium",247,"Actinoids","solid","[Rn]5f97s2",5,'f'),
       element(98,"Cf","Californium",251,"Actinoids","solid","[Rn]5f107s2",7,'f'),
       element(99,"Es","Einsteinium",252,"Actinoids","solid","[Rn]5f117s2",4,'f'),
       element(100,"Fm","Fermium",257,"Actinoids","solid","[Rn]5f127s2",4,'f'),
       element(101,"Md","Mendelevium",258,"Actinoids","solid","[Rn]5f137s2",3,'f'),
       element(102,"No","Nobelium",259,"Actinoids","solid","[Rn]5f147s2",3,'f'),
       element(103,"Lr","Lawrencium",261,"Actinoids","solid","[Rn]5f147s27p1",1,'d'),
       element(104,"Rf","Rutherfordium",262,"Transition metal","unknown","[Rn]5f146d27s2",1,'d'),
       element(105,"Db","Dubnium",262,"Transition metal","unknown","*[Rn]5f146d37s2",1,'d'),
       element(106,"Sg","Seaborgium",266,"Transition metal","unknown","*[Rn]5f146d47s2",1,'d'),
       element(107,"Bh","Bohrium",264,"Transition metal","unknown","*[Rn]5f146d57s2",2,'d'),
       element(108,"Hs","Hassium",277,"Transition metal","unknown","*[Rn]5f146d67s2",2,'d'),
       element(109,"Mt","Meitnerium",268,"Transition metal","unknown","*[Rn]5f146d77s2",1,'d'),
       element(110,"Ds","Darmstadtium",0,"Transition metal","unknown","*[Rn]5f146d97s1",1,'d'),
       element(111,"Rg","Roentgenium",272,"metal","unknown","*[Rn]5f146d107s1",1,'d'),
       element(112,"Cn","Copernicium",0,"Transition metal","unknown","*[Rn]5f146d107s2",1,'d'),
       element(113,"Nh","Nihonium",0,"metal","unknown","*[Rn]5f146d107s27p1",1,'p'),
       element(114,"Fl","Flerovium",0,"metal","unknown","*[Rn]5f146d107s27p2",1,'p'),
       element(115,"Mc","Moscovium",0,"metal","unknown","*[Rn]5f146d107s27p3",1,'p'),
       element(116,"Lv","Livermorium",0,"metal","solid","*[Rn]5f146d107s27p4",1,'p'),
       element(117,"Ts","Tennessine",0,"metal","solid","*[Rn]5f146d107s27p5",1,'p'),
       element(118,"Og","Oganesson",0,"noble gas","unknown","*[Rn]5f146d107s27p6",1,'p')
       
    };
    menu(e);
    return 0;
}
